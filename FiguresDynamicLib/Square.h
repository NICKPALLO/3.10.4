#pragma once
#ifdef SQUARE_EXPORTS
#define SQUARE_API __declspec(dllexport)
#else
#define SQUARE_API __declspec(dllimport)
#endif

#include"Quadrilateral.h"

class Square : public Quadrilateral
{
public:
	SQUARE_API Square(int a);
};