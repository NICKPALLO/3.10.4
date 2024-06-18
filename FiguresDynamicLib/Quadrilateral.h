#pragma once
#ifdef QUADRILATERAL_EXPORTS
#define QUADRILATERAL_API __declspec(dllexport)
#else
#define QUADRILATERAL_API __declspec(dllimport)
#endif
#include"Figure.h"

class Quadrilateral : public Figure
{
protected:
	int a, b, c, d, A, B, C, D;
	QUADRILATERAL_API Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
public:
	QUADRILATERAL_API Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D, "Четырехугольник") {}
	QUADRILATERAL_API void print_info() override;
};