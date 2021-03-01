#include "Debug.h";

Debug::Debug()
{
}

Debug::~Debug()
{
}

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

void Debug::StaticLog(string message)
{
	cout << message << endl;
}


