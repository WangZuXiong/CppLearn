#pragma once
#include <iostream>
using namespace std;

class IntNum
{
	public:
		//构造函数
		IntNum(int x = 0) :xptr(new int(x))
		{
			cout << "Calling constructor" << endl;
		}
		//复制构造函数
		IntNum(const IntNum& n) :xptr(new int(*n.xptr))
		{
			cout << "Calling copy constructor" << endl;
		}
		//移动构造函数
		IntNum(IntNum&& n) :xptr(n.xptr)
		{
			n.xptr = nullptr;
			cout << "Calling move constructor" << endl;
		}
		//析构函数
		~IntNum()
		{
			delete xptr;
			cout << "Destructing..." << endl;
		}
	private :
		int* xptr;
};

