#include <string>
#include <iostream>
using namespace std;

class Debug
{
public:
	Debug();
	~Debug();
	void Log(string message);
	void Log(int message);
	void Log(double message);
	static void StaticLog(string message);

private:

};