#pragma once
#ifdef ISOSCELES_TRIANGLE_EXPORTS
#define ISOSCELES_TRIANGLE_API __declspec(dllexport)
#else
#define ISOSCELES_TRIANGLE_API __declspec(dllimport)
#endif
#include"Triangle.h"

class Isosceles_triangle : public Triangle
{
public:
	ISOSCELES_TRIANGLE_API Isosceles_triangle(int a, int b, int A, int B);
};