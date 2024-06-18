#pragma once
#ifdef ERROR_EXPORTS
#define ERROR_API __declspec(dllexport)
#else
#define ERROR_API __declspec(dllimport)
#endif

#include <stdexcept>

class Error : public std::domain_error
{
public:
	ERROR_API Error(std::string massage) : domain_error(massage) {
	}
};