#include "Line.h"

// 成员函数的定义
Line::Line(int len)
{
	cout << "调用构造函数" << endl;
	//为指针分配内存
	//ptr = new int;
	//*ptr = len;
}

Line::Line(const Line& obj)
{
	cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
	//ptr = new int;
	//*ptr = *obj.ptr;//值拷贝
}

Line::~Line(void)
{
	cout << "释放内存" << endl;
	//delete ptr;
}

int Line::getLength(void)
{
	return *ptr;
}

void display(Line obj)
{
	//cout << "line 大小：" << obj.getLength() << endl;
}

void main1()
{
	Line line(10);
	//这里把实参->形参 发生了拷贝；则会调用拷贝构造函数
	//display(line);

	Line line1 = line;
}
