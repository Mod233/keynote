/* Copyright (C) 1997, 1998, 1999, 2000 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

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

/*
 *	ISO C99: 7.8 Format conversion of integer types	<inttypes.h>
 */

#ifndef _INTTYPES_H
#define _INTTYPES_H	1

#include <features.h>
/* Get the type definitions.  */
#include <stdint.h>


/* The ISO C99 standard specifies that these macros must only be
   defined if explicitly requested.  */
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS

# if __WORDSIZE == 64
#  define __PRI64_PREFIX	"l"
#  define __PRIPTR_PREFIX	"l"
# else
#  define __PRI64_PREFIX	"ll"
#  define __PRIPTR_PREFIX
# endif

/* Macros for printing format specifiers.  */

/* Decimal notation.  */
# define PRId8		"d"
# define PRId16		"d"
# define PRId32		"d"
# define PRId64		__PRI64_PREFIX "d"

# define PRIdLEAST8	"d"
# define PRIdLEAST16	"d"
# define PRIdLEAST32	"d"
# define PRIdLEAST64	__PRI64_PREFIX "d"

# define PRIdFAST8	"d"
# define PRIdFAST16	"d"
# define PRIdFAST32	"d"
# define PRIdFAST64	__PRI64_PREFIX "d"


# define PRIi8		"i"
# define PRIi16		"i"
# define PRIi32		"i"
# define PRIi64		__PRI64_PREFIX "i"

# define PRIiLEAST8	"i"
# define PRIiLEAST16	"i"
# define PRIiLEAST32	"i"
# define PRIiLEAST64	__PRI64_PREFIX "i"

# define PRIiFAST8	"i"
# define PRIiFAST16	"i"
# define PRIiFAST32	"i"
# define PRIiFAST64	__PRI64_PREFIX "i"

/* Octal notation.  */
# define PRIo8		"o"
# define PRIo16		"o"
# define PRIo32		"o"
# define PRIo64		__PRI64_PREFIX "o"

# define PRIoLEAST8	"o"
# define PRIoLEAST16	"o"
# define PRIoLEAST32	"o"
# define PRIoLEAST64	__PRI64_PREFIX "o"

# define PRIoFAST8	"o"
# define PRIoFAST16	"o"
# define PRIoFAST32	"o"
# define PRIoFAST64	__PRI64_PREFIX "o"

/* Unsigned integers.  */
# define PRIu8		"u"
# define PRIu16		"u"
# define PRIu32		"u"
# define PRIu64		__PRI64_PREFIX "u"

# define PRIuLEAST8	"u"
# define PRIuLEAST16	"u"
# define PRIuLEAST32	"u"
# define PRIuLEAST64	__PRI64_PREFIX "u"

# define PRIuFAST8	"u"
# define PRIuFAST16	"u"
# define PRIuFAST32	"u"
# define PRIuFAST64	__PRI64_PREFIX "u"

/* lowercase hexadecimal notation.  */
# define PRIx8		"x"
# define PRIx16		"x"
# define PRIx32		"x"
# define PRIx64		__PRI64_PREFIX "x"

# define PRIxLEAST8	"x"
# define PRIxLEAST16	"x"
# define PRIxLEAST32	"x"
# define PRIxLEAST64	__PRI64_PREFIX "x"

# define PRIxFAST8	"x"
# define PRIxFAST16	"x"
# define PRIxFAST32	"x"
# define PRIxFAST64	__PRI64_PREFIX "x"

/* UPPERCASE hexadecimal notation.  */
# define PRIX8		"X"
# define PRIX16		"X"
# define PRIX32		"X"
# define PRIX64		__PRI64_PREFIX "X"

# define PRIXLEAST8	"X"
# define PRIXLEAST16	"X"
# define PRIXLEAST32	"X"
# define PRIXLEAST64	__PRI64_PREFIX "X"

# define PRIXFAST8	"X"
# define PRIXFAST16	"X"
# define PRIXFAST32	"X"
# define PRIXFAST64	__PRI64_PREFIX "X"


/* Macros for printing `intmax_t' and `uintmax_t'.  */
# define PRIdMAX	__PRI64_PREFIX "d"
# define PRIiMAX	__PRI64_PREFIX "i"
# define PRIoMAX	__PRI64_PREFIX "o"
# define PRIuMAX	__PRI64_PREFIX "u"
# define PRIxMAX	__PRI64_PREFIX "x"
# define PRIXMAX	__PRI64_PREFIX "X"


/* Macros for printing `intptr_t' and `uintptr_t'.  */
# define PRIdPTR	__PRIPTR_PREFIX "d"
# define PRIiPTR	__PRIPTR_PREFIX "i"
# define PRIoPTR	__PRIPTR_PREFIX "o"
# define PRIuPTR	__PRIPTR_PREFIX "u"
# define PRIxPTR	__PRIPTR_PREFIX "x"
# define PRIXPTR	__PRIPTR_PREFIX "X"


/* Macros for scanning format specifiers.  */

/* Signed decimal notation.  */
# define SCNd8		"hhd"
# define SCNd16		"hd"
# define SCNd32		"d"
# define SCNd64		__PRI64_PREFIX "d"

# define SCNdLEAST8	"hhd"
# define SCNdLEAST16	"hd"
# define SCNdLEAST32	"d"
# define SCNdLEAST64	__PRI64_PREFIX "d"

# define SCNdFAST8	"hhd"
# define SCNdFAST16	__PRIPTR_PREFIX "d"
# define SCNdFAST32	__PRIPTR_PREFIX "d"
# define SCNdFAST64	__PRI64_PREFIX "d"

/* Signed decimal notation.  */
# define SCNi8		"hhi"
# define SCNi16		"hi"
# define SCNi32		"i"
# define SCNi64		__PRI64_PREFIX "i"

# define SCNiLEAST8	"hhi"
# define SCNiLEAST16	"hi"
# define SCNiLEAST32	"i"
# define SCNiLEAST64	__PRI64_PREFIX "i"

# define SCNiFAST8	"hhi"
# define SCNiFAST16	__PRIPTR_PREFIX "i"
# define SCNiFAST32	__PRIPTR_PREFIX "i"
# define SCNiFAST64	__PRI64_PREFIX "i"

/* Unsigned decimal notation.  */
# define SCNu8		"hhu"
# define SCNu16		"hu"
# define SCNu32		"u"
# define SCNu64		__PRI64_PREFIX "u"

# define SCNuLEAST8	"hhu"
# define SCNuLEAST16	"hu"
# define SCNuLEAST32	"u"
# define SCNuLEAST64	__PRI64_PREFIX "u"

# define SCNuFAST8	"hhu"
# define SCNuFAST16	__PRIPTR_PREFIX "u"
# define SCNuFAST32	__PRIPTR_PREFIX "u"
# define SCNuFAST64	__PRI64_PREFIX "u"

/* Octal notation.  */
# define SCNo8		"hho"
# define SCNo16		"ho"
# define SCNo32		"o"
# define SCNo64		__PRI64_PREFIX "o"

# define SCNoLEAST8	"hho"
# define SCNoLEAST16	"ho"
# define SCNoLEAST32	"o"
# define SCNoLEAST64	__PRI64_PREFIX "o"

# define SCNoFAST8	"hho"
# define SCNoFAST16	__PRIPTR_PREFIX "o"
# define SCNoFAST32	__PRIPTR_PREFIX "o"
# define SCNoFAST64	__PRI64_PREFIX "o"

/* Hexadecimal notation.  */
# define SCNx8		"hhx"
# define SCNx16		"hx"
# define SCNx32		"x"
# define SCNx64		__PRI64_PREFIX "x"

# define SCNxLEAST8	"hhx"
# define SCNxLEAST16	"hx"
# define SCNxLEAST32	"x"
# define SCNxLEAST64	__PRI64_PREFIX "x"

# define SCNxFAST8	"hhx"
# define SCNxFAST16	__PRIPTR_PREFIX "x"
# define SCNxFAST32	__PRIPTR_PREFIX "x"
# define SCNxFAST64	__PRI64_PREFIX "x"


/* Macros for scanning `intmax_t' and `uintmax_t'.  */
# define SCNdMAX	__PRI64_PREFIX "d"
# define SCNiMAX	__PRI64_PREFIX "i"
# define SCNoMAX	__PRI64_PREFIX "o"
# define SCNuMAX	__PRI64_PREFIX "u"
# define SCNxMAX	__PRI64_PREFIX "x"

/* Macros for scaning `intptr_t' and `uintptr_t'.  */
# define SCNdPTR	__PRIPTR_PREFIX "d"
# define SCNiPTR	__PRIPTR_PREFIX "i"
# define SCNoPTR	__PRIPTR_PREFIX "o"
# define SCNuPTR	__PRIPTR_PREFIX "u"
# define SCNxPTR	__PRIPTR_PREFIX "x"

#endif	/* C++ && format macros */


__BEGIN_DECLS

#if __WORDSIZE == 64

/* We have to define the `uintmax_t' type using `ldiv_t'.  */
typedef struct
  {
    long int quot;		/* Quotient.  */
    long int rem;		/* Remainder.  */
  } imaxdiv_t;

#else

/* We have to define the `uintmax_t' type using `lldiv_t'.  */
typedef struct
  {
    long long int quot;		/* Quotient.  */
    long long int rem;		/* Remainder.  */
  } imaxdiv_t;

#endif


/* Compute absolute value of N.  */
extern intmax_t imaxabs (intmax_t __n) __THROW __attribute__ ((__const__));

/* Return the `imaxdiv_t' representation of the value of NUMER over DENOM. */
extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __THROW __attribute__ ((__const__));

/* Like `strtol' but convert to `intmax_t'.  */
extern intmax_t strtoimax (__const char *__restrict __nptr,
			   char **__restrict __endptr, int __base) __THROW;

/* Like `strtoul' but convert to `uintmax_t'.  */
extern uintmax_t strtoumax (__const char * __restrict __nptr,
			    char ** __restrict __endptr, int __base) __THROW;

/* Like `wcstol' but convert to `intmax_t'.  */
extern intmax_t wcstoimax (__const wchar_t * __restrict __nptr,
			   wchar_t **__restrict __endptr, int __base) __THROW;

/* Like `wcstoul' but convert to `uintmax_t'.  */
extern uintmax_t wcstoumax (__const wchar_t * __restrict __nptr,
			    wchar_t ** __restrict __endptr, int __base) __THROW;

#ifdef __USE_EXTERN_INLINES

# if __WORDSIZE == 64

/* Like `strtol' but convert to `intmax_t'.  */
#  ifndef __strtol_internal_defined
extern long int __strtol_internal (__const char *__restrict __nptr,
				   char **__restrict __endptr,
				   int __base, int __group) __THROW;
#   define __strtol_internal_defined	1
#  endif
extern __inline intmax_t
strtoimax (__const char *__restrict nptr, char **__restrict endptr,
	   int base) __THROW
{
  return __strtol_internal (nptr, endptr, base, 0);
}

/* Like `strtoul' but convert to `uintmax_t'.  */
#  ifndef __strtoul_internal_defined
extern unsigned long int __strtoul_internal (__const char *
					     __restrict __nptr,
					     char ** __restrict __endptr,
					     int __base, int __group) __THROW;
#   define __strtoul_internal_defined	1
#  endif
extern __inline uintmax_t
strtoumax (__const char *__restrict nptr, char **__restrict endptr,
	   int base) __THROW
{
  return __strtoul_internal (nptr, endptr, base, 0);
}

/* Like `wcstol' but convert to `intmax_t'.  */
#  ifndef __wcstol_internal_defined
extern long int __wcstol_internal (__const wchar_t * __restrict __nptr,
				   wchar_t **__restrict __endptr,
				   int __base, int __group) __THROW;
#   define __wcstol_internal_defined	1
#  endif
extern __inline intmax_t
wcstoimax (__const wchar_t *__restrict nptr, wchar_t **__restrict endptr,
	   int base) __THROW
{
  return __wcstol_internal (nptr, endptr, base, 0);
}


/* Like `wcstoul' but convert to `uintmax_t'.  */
#  ifndef __wcstoul_internal_defined
extern unsigned long int __wcstoul_internal (__const wchar_t *
					     __restrict __nptr,
					     wchar_t **
					     __restrict __endptr,
					     int __base, int __group) __THROW;
#   define __wcstoul_internal_defined	1
#  endif
extern __inline uintmax_t
wcstoumax (__const wchar_t *__restrict nptr, wchar_t **__restrict endptr,
	   int base) __THROW
{
  return __wcstoul_internal (nptr, endptr, base, 0);
}

# else /* __WORDSIZE == 32 */

/* Like `strtol' but convert to `intmax_t'.  */
#  ifndef __strtoll_internal_defined
__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
					 char **__restrict __endptr,
					 int __base, int __group) __THROW;
#   define __strtoll_internal_defined	1
#  endif
extern __inline intmax_t
strtoimax (__const char *__restrict nptr, char **__restrict endptr,
	   int base) __THROW
{
  return __strtoll_internal (nptr, endptr, base, 0);
}

/* Like `strtoul' but convert to `uintmax_t'.  */
#  ifndef __strtoull_internal_defined
__extension__
extern unsigned long long int __strtoull_internal (__const char *
						   __restrict __nptr,
						   char **
						   __restrict __endptr,
						   int __base,
						   int __group) __THROW;
#   define __strtoull_internal_defined	1
#  endif
extern __inline uintmax_t
strtoumax (__const char *__restrict nptr, char **__restrict endptr,
	   int base) __THROW
{
  return __strtoull_internal (nptr, endptr, base, 0);
}

/* Like `wcstol' but convert to `intmax_t'.  */
#  ifndef __wcstoll_internal_defined
__extension__
extern long long int __wcstoll_internal (__const wchar_t *
					 __restrict __nptr,
					 wchar_t **__restrict __endptr,
					 int __base, int __group) __THROW;
#   define __wcstoll_internal_defined	1
#  endif
extern __inline intmax_t
wcstoimax (__const wchar_t *__restrict nptr, wchar_t **__restrict endptr,
	   int base) __THROW
{
  return __wcstoll_internal (nptr, endptr, base, 0);
}


/* Like `wcstoul' but convert to `uintmax_t'.  */
#  ifndef __wcstoull_internal_defined
__extension__
extern unsigned long long int __wcstoull_internal (__const wchar_t *
						   __restrict __nptr,
						   wchar_t **
						   __restrict __endptr,
						   int __base,
						   int __group) __THROW;
#   define __wcstoull_internal_defined	1
#  endif
extern __inline uintmax_t
wcstoumax (__const wchar_t *__restrict nptr, wchar_t **__restrict endptr,
	   int base) __THROW
{
  return __wcstoull_internal (nptr, endptr, base, 0);
}

# endif	/* __WORDSIZE == 32	*/
#endif	/* Use extern inlines.  */

__END_DECLS

#endif /* inttypes.h */
