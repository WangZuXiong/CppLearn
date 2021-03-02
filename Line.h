#pragma once
#include <iostream>
using namespace std;

class Line
{
	public:
		int getLength(void);
		//简单的构造函数
		Line(int len);
		//拷贝构造函数
		Line(const Line& obj);
		//析构函数
		~Line();
	private :
		int* ptr;
};

