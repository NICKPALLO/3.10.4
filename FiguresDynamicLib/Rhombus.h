#pragma once
#ifdef RHOMBUS_EXPORTS
#define RHOMBUS_API __declspec(dllexport)
#else
#define RHOMBUS_API __declspec(dllimport)
#endif
#include "Quadrilateral.h"

class Rhombus : public Quadrilateral
{
public:
	RHOMBUS_API Rhombus(int a, int A, int B);
};