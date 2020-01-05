#include "nct_Complex.h"

Complex ComplexAdd(Complex c1, Complex c2) 
{
	Complex ComplexTemp;
	ComplexTemp.re = c1.re + c2.re;
	ComplexTemp.im = c1.im + c2.im;
	return ComplexTemp;
}

Complex ComplexSub(Complex c1, Complex c2)
{
	Complex ComplexTemp;
	ComplexTemp.re = c1.re - c2.re;
	ComplexTemp.im = c1.im - c2.im;
	return ComplexTemp;
}

Complex ComplexMul(Complex c1, Complex c2)
{
	Complex ComplexTemp;
	ComplexTemp.re = c1.re*c2.re - c1.im*c2.im;
	ComplexTemp.im = c1.re*c2.im - c1.im*c2.re;
	return ComplexTemp;
}

Std_ReturnType ComplexRec(Complex * c)
{
	if (0 == c->re && 0 == c->im) 
	{
		return RET_NOT_OK;
	}
	c->re = c->re / (c->re * c->re + c->im * c->im);
	c->im = -(c->im / (c->re * c->re + c->im * c->im));
	return RET_OK;
}

Std_ReturnType ComplexDiv(Complex* c1, Complex* c2, Complex * co)
{
	if ((0 == c1->re && 0 == c1->im) || (0 == c2->re && 0 == c2->im))
	{
		return RET_NOT_OK;
	}
	co->re = 1/(c2->re*c2->re + c2->im*c2->im)*(c1->re * c2->re + c1->im * c2->im);
	co->im = 1/(c2->re * c2->re + c2->im * c2->im)*(c2->re * c1->im - c1->re * c2->im);
	return RET_OK;
}

Complex ComplexConj(Complex c)
{
	if (0 == c.im)
	{
		return c;
	}
	c.im = -c.im;
	return c;
}
