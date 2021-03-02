#include "Box.h"

//函数成员的定义
double Box::get(void)
{
	return length * breadth * height;
}

void Box::set(double len, double bre, double hei)
{
	length = len;
	breadth = bre;
	height = hei;
}
