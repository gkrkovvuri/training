//#ifndef __errors.h__
//#define __errors.h__

#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define err_abort(code, text) do { \
	fprintf(stderr, "%s at %s :%d: %s \n",\
		text, __FILE__, __LINE__, \
		strerror(code)); \
	abort(); \
} while(0);

#define  errno_abort(text) do { \
	fprintf(stderr, "%s at %s:%d: %s\n" ,\
		text, __FILE__, __LINE__, \
		strerrorno(code)); \
	abort(); \
} while(0);

//#endif
 
