#ifndef NCT_COMPILER
#define NCT_COMPILER

/* Define types for bit use */

#ifndef BOOLEAN
#define BOOLEAN
typedef char boolean;
#define TRUE 1
#define FALSE 0
#endif

/* Compiler flag definition */
#define COMP_ON 1;
#define COMP_OFF 0;

typedef char sint8;
typedef unsigned char uint8;
typedef short sint16;
typedef unsigned short uint16;
typedef long sint32;
typedef unsigned long uint32;
typedef long long sint64;
typedef unsigned long long uint64;
typedef float float32;
typedef double float64;

typedef uint8 Std_ReturnType;

#define RET_OK 0
#define RET_NOT_OK 1

typedef uint8 Std_ExitType;

#define EXIT_OK 0
#define EXIT_ERROR 1

#endif // !NCT_COMPILER
