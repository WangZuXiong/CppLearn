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
	template<class T>
	static void LogT(const T obj);
	static void StaticLog(string message);

private:

	
};

template<class T>
inline void Debug::LogT(const T obj)
{
	cout << obj << endl;
}
