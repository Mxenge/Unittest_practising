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
	return 0.0;
}

