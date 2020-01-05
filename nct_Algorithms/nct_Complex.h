#ifndef NCT_COMPLEX
#define NCT_COMPLEX

#include "nct_Compile.h"

struct ComplexNumber {
	float32 re;
	float32 im;
};

typedef struct ComplexNumber Complex;

/* API provide for Complex Number */

/* Adding two Complex Numbers 
 * Input: c1: complex number 1
 * Input: c2: complex number 2
 * Output: Return value
 */
Complex ComplexAdd(Complex c1, Complex c2);

/* Subtracting two Complex Numbers
 * Input: c1: complex number 1
 * Input: c2: complex number 2
 * Output: Return value
 */
Complex ComplexSub(Complex c1, Complex c2);

/* Multiple two Complex Numbers
 * Input: c1: complex number 1
 * Input: c2: complex number 2
 * Output: Return value
 */
Complex ComplexMul(Complex c1, Complex c2);

/* Reciprocal of a complex number (1/c)
 * Input: c complex number 
 * Output: c
 * Return Value: Complex number valid, 0 successful, 1 failed
 */
Std_ReturnType ComplexRec(Complex * c);

/* Division of two Complex Numbers
 * Input: c1: complex number 1
 * Input: c2: complex number 2
 * Output: co
 * Return Value: Complex number valid, 0 successful, 1 failed
 */
Std_ReturnType ComplexDiv(Complex * c1, Complex * c2, Complex * co);

/* Find a Conjugation of a complex number
 * Input: c: complex number
 * Output: Return Value
 */
Complex ComplexConj(Complex c);

#endif // !NCT_COMPLEX

