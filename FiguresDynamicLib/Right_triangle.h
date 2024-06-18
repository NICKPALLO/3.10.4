#pragma once
#ifdef RIGHT_TRIANGLE_EXPORTS
#define RIGHT_TRIANGLE_API __declspec(dllexport)
#else
#define RIGHT_TRIANGLE_API __declspec(dllimport)
#endif

#include"Triangle.h"
#include "Error.h"

class Right_triangle : public Triangle
{
public:
	RIGHT_TRIANGLE_API Right_triangle(int a, int b, int c, int A, int B);
};