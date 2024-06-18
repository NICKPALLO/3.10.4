#pragma once
#ifdef TRIANGLE_EXPORTS
#define TRIANGLE_API __declspec(dllexport)
#else
#define TRIANGLE_API __declspec(dllimport)
#endif
#include"Figure.h"

class Triangle : public Figure
{
protected:
	int a, b, c, A, B, C;
	TRIANGLE_API Triangle(int a, int b, int c, int A, int B, int C, std::string name);
public:
	TRIANGLE_API Triangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, "Треугольник") {}
	TRIANGLE_API void print_info() override;
};