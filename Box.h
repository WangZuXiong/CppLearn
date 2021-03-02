#pragma once
#include <iostream>
using namespace std;

class Box
{
public:
	double length;
	double breadth;
	double height;
	// 成员函数声明
	double get(void);
	void set(double len, double bre, double hei);
};

