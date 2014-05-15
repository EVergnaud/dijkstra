//Line.cpp
#pragma once

#include "Line.h"


Line::Line(unsigned short int number)
{
	_number=number;
}
Line::Line(void)
{
}
Line::~Line(void)
{
}
unsigned short int Line::Get_number(void)
{
	return _number;
}