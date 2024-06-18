#pragma once
#ifdef FIGURE_EXPORTS
#define FIGURE_API __declspec(dllexport)
#else
#define FIGURE_API __declspec(dllimport)
#endif

#include <iostream>

class Figure
{
protected:
	int sizeNum;
	bool permission;
	std::string name;
public:
	FIGURE_API Figure();
	FIGURE_API bool get_permission();
	FIGURE_API int get_sizeNum();
	FIGURE_API std::string get_name();
	FIGURE_API virtual void print_info() {}
};