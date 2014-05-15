//Line.h
#pragma once

class Line
{
public:
	Line(unsigned short int);
	Line(void);
	~Line(void);
	unsigned short int Get_number(void);
private:
	unsigned short int _number;
};

using namespace std;
#include <memory>
typedef std::shared_ptr<Line> spLine;