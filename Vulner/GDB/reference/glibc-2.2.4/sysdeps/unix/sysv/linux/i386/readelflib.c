/* Copyright (C) 1999, 2000, 2001 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Andreas Jaeger <aj@suse.de>, 1999 and
		  Jakub Jelinek <jakub@redhat.com>, 2000.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */


int process_elf32_file (const char *file_name, const char *lib, int *flag,
			unsigned int *osversion, char **soname,
			void *file_contents, size_t file_length);
int process_elf64_file (const char *file_name, const char *lib, int *flag,
			unsigned int *osversion, char **soname,
			void *file_contents, size_t file_length);

/* Returns 0 if everything is ok, != 0 in case of error.  */
int
process_elf_file (const char *file_name, const char *lib, int *flag,
		  unsigned int *osversion, char **soname, void *file_contents,
		  size_t file_length)
{
  ElfW(Ehdr) *elf_header = (ElfW(Ehdr) *) file_contents;
  int ret;

  if (elf_header->e_ident [EI_CLASS] == ELFCLASS32)
    return process_elf32_file (file_name, lib, flag, osversion, soname,
			       file_contents, file_length);
  else
    {
      switch (elf_header->e_machine)
	{
	case EM_IA_64:
	case EM_X86_64:
	  break;
	default:
	  error (0, 0, _("%s is for unknown machine %d.\n"),
		 file_name, elf_header->e_machine);
	  return 1;
	}

      ret = process_elf64_file (file_name, lib, flag, osversion, soname,
				file_contents, file_length);
      /* IA64/X86-64 64bit libraries are always libc.so.6+.  */
      if (!ret)
	switch (elf_header->e_machine)
	  {
	  case EM_IA_64:
	    *flag = FLAG_IA64_LIB64|FLAG_ELF_LIBC6;
	    break;
	  case EM_X86_64:
	    *flag = FLAG_X8664_LIB64|FLAG_ELF_LIBC6;
	    break;
	  }

      return ret;
    }
}

#undef __ELF_NATIVE_CLASS
#undef process_elf_file
#define process_elf_file process_elf32_file
#define __ELF_NATIVE_CLASS 32
#include "sysdeps/generic/readelflib.c"

#undef __ELF_NATIVE_CLASS
#undef process_elf_file
#define process_elf_file process_elf64_file
#define __ELF_NATIVE_CLASS 64
#include "sysdeps/generic/readelflib.c"
