#ifndef		FASTEASING_H
#define		FASTEASING_H

#include <math.h>

/// This uppersize, more data more precision
#define UPPERSIZE	10


#define PHI		3.141592653589793238

/// Just for test
float linear[ UPPERSIZE ] { 1, 1, 1 ,1, 1,
							1, 1, 1, 1, 1 };
/// Just for test
float Quadratic[ UPPERSIZE ] { 0, 1, 4, 9, 16, 25, 36, 49, 64, 81 };

/// Just for test
float Cubic[ UPPERSIZE ] { 0, 1, 8, 27, 64, 125, 216, 343, 512, 729 };

/// Just for test... until 90 degree
float Sine[ UPPERSIZE ] { 0.156434, 0.309017, 0.453991, 0.587785, 0.707107, 0.809017, 0.891007, 0.951057, 0.987688, 1 };

////////////////////////////////////////////////////////////////

float EasingLinear(float from, float to)
{
	int i = (from / (to-1) ) * UPPERSIZE ;
	return linear[ i ];
}	

float EasingQuadratic(float from, float to)
{
	int i = (from / (to-1) ) * UPPERSIZE ;
	return Quadratic[ i ];
}	

float EasingCubic(float from, float to)
{
	int i = (from / (to-1) ) * UPPERSIZE ;
	return Quadratic[ i ];
}	

float EasingSine(float from, float to)
{
	int i = (from / (to-1) ) * UPPERSIZE ;
	return Sine[ i ];
}	


#endif //	FASTEASING_H