// CppLearn.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>//引入iostream库，等价于把这个库复制粘贴放到这一行
using namespace std;//引入std命名空间
/// <summary>
/// 声明函数原型
/// </summary>
/// <param name="message"></param>
void Log(string message);

/// <summary>
/// 函数调用在函数引用之前，则不需要申明函数原型
/// </summary>
/// <param name="message"></param>
void Log1(double message)
{
	cout << message << endl;
}

int main()
{
	Log1(1.0);

	const double pi(3.1415926);

	cout << int(pi) << endl;

	Log("8980");

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

class Debug
{
public:
	Debug();
	~Debug();
	void Log(string message);
	void Log(int message);
	void Log(double message);

private:

};

Debug::Debug()
{
}

Debug::~Debug()
{
}

/// <summary>
/// 函数的定义
/// </summary>
/// <param name="message"></param>
void Debug::Log(string message)
{
	cout << message << endl;
}

void Debug::Log(int message)
{
	cout << message << endl;
}

void Debug::Log(double message)
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