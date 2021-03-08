// CppLearn.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <string>
#include <iostream>//引入iostream库，等价于把这个库复制粘贴放到这一行
#include "Debug.h"
#include "IntNum.h"
#include <vector>
using namespace std;//引入std命名空间
int main();
/// <summary>
/// 声明函数原型
/// </summary>
/// <param name="message"></param>
void Foo(string message);

/// <summary>
/// 函数调用在函数引用之前，则不需要申明函数原型
/// 这个函数不是某个类的成员函数，而是在类外作为独立的全局函数
/// </summary>
/// <param name="message"></param>
void Foo1(double message)
{
	cout << message << endl;
}

int average(const vector<int>& arr)
{
	auto length = arr.size();
	auto sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	float temp = sum / length;
	//return temp;
	return static_cast<int>(temp);
}

IntNum GetIntNum()
{
	//调用了构造函数
	IntNum intNum;
	//调用了复制构造函数
	IntNum intNum2(intNum);
	//调用了移动构造函数
	return intNum;
}

int main()
{
	int x1 = 1;
	Debug::LogT(x1);

	Debug::LogT(1.1f);

	return 0;

	GetIntNum();
	return 0;
	//基于范围的for循环配合auto的举例
	vector<double> vs(10);
	for (auto i = vs.begin(); i != vs.end(); i++)
	{
		cout << *i << endl;
	}

	for (auto e : vs)
	{
		cout << e;
	}


	return 0;
	vector<int> intArr(2);
	auto length = intArr.size();
	for (int i = 0; i < length; i++)
	{
		cin >> intArr[i];
	}

	cout << "average:" + to_string(average(intArr)) << endl;

	//cout << intArr.size() << endl;


	return 0;

	int(*cp)[9][8] = new int[1][9][8];


	char(*fp)[3];
	fp = new char[3][3];

	return 0;
	//调用一个静态函数
	Debug::StaticLog("call static function success");

	Debug debug;
	debug.Log("str");

	Foo1(1.0);
	Foo("8980");

	const double pi(3.1415926);
	cout << int(pi) << endl;

	return 0;

	int x;
	cin >> x;

	cout << x << endl;
	//Debug::Log(x);
	//cout << 5l;
	cout << sizeof(int);//4



	return 0;
	std::cout << "Hello World!\n";
	cout << "Hello World!\n";
	cout << "Hello" << endl;//endl 会换行  
}

/// <summary>
/// 函数的定义
/// </summary>
void Foo(string message)
{
	cout << message << endl;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件