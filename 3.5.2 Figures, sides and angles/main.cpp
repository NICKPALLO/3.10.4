#include <iostream>
#include <string>
#include <Windows.h>

#include"figure.h"
#include"triangle.h"
#include"right_triangle.h"
#include"isosceles_triangle.h"
#include"equilateral_triangle.h"


#include"quadrilateral.h"
#include"rectangl.h"
#include"square.h"
#include"parallelogram.h"
#include"rhombus.h"


void printInfo(Figure* figure)
{
	if (figure->get_permission())
	{
		figure->print_info();
	}
}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle triangle(1, 2, 3, 4, 5, 6);
	std::cout << std::endl;
	printInfo(&triangle);

	Right_triangle rTriangle(3, 2, 4, 60, 30);
	std::cout << std::endl;
	printInfo(&rTriangle);

	Isosceles_triangle iTriangle(2, 3, 60, 30);
	std::cout << std::endl;
	printInfo(&iTriangle);

	Equilateral_triangle eTriangle(4);
	std::cout << std::endl;
	printInfo(&eTriangle);

	Quadrilateral quadrilateral(2, 4, 5, 3, 30, 20, 180, 130);
	std::cout << std::endl;
	printInfo(&quadrilateral);

	Rectangl rectangle(1, 2);
	std::cout << std::endl;
	printInfo(&rectangle);

	Square square(10);
	std::cout << std::endl;
	printInfo(&square);

	Parallelogram parallelogram(2, 4, 50, 65);
	std::cout << std::endl;
	printInfo(&parallelogram);

	Rhombus rhombus(2, 120, 60);
	std::cout << std::endl;
	printInfo(&rhombus);

	return 0;
}