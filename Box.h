#pragma once
#include <iostream>
using namespace std;

class Box
{
	public:
		static int count;//静态数据成员声明
		double length;
		double breadth;
		double height;
		// 成员函数声明
		double get(void);
		void set(double len, double bre, double hei);
		static void ShowCount();
};
int Box::count = 0;//静态数据成员定义和初始化，使用类名限定

