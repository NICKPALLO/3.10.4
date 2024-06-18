#pragma once
#ifdef PARALLELOGRAM_EXPORTS
#define PARALLELOGRAM_API __declspec(dllexport)
#else
#define PARALLELOGRAM_API __declspec(dllimport)
#endif

#include"Quadrilateral.h"

class Parallelogram : public Quadrilateral
{
public:
	PARALLELOGRAM_API Parallelogram(int a, int b, int A, int B);
};
