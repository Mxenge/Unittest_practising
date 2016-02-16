// RoorFinder.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "RoorFinder.h"
#include<math.h>

// This is an example of an exported variable
ROORFINDER_API int nRoorFinder=0;

// This is an example of an exported function.
ROORFINDER_API int fnRoorFinder(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see RoorFinder.h for the class definition
CRoorFinder::CRoorFinder()
{
	return;
}

// Find the square root of a number

double 	CRoorFinder::SquareRoot(double v)
{
	double result = v;
	double diff = v;
	while (diff > result / 1000)
	{
		double oldResult = result;
		result = result - (result*result - v) / (2 * result);
		diff = abs(oldResult - result);
	}
	return result;
}
