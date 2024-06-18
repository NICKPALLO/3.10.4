#pragma once
#ifdef RECTANGL_EXPORTS
#define RECTANGL_API __declspec(dllexport)
#else
#define RECTANGL_API __declspec(dllimport)
#endif

#include"Quadrilateral.h"

class Rectangl : public Quadrilateral
{
public:
	RECTANGL_API Rectangl(int a, int b);
};