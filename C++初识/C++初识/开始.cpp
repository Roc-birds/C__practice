#define _CRT_SECURE_NO_WARNINGS
/*
int a = 0;
namespace stat
{
	int a = 4;
	namespace one
	{
		int a = 1;
	}
	namespace tow
	{
		int a = 2;
	}
}
//不止可以存变量，可以有自定义函数等，而且可以嵌套其他命名空间
int main()
{
	printf("%d\n", a);
	//这次打印先寻找局部变量（main内部的），如果没有找外部的的不包括stat内部的
	printf("%d\n", stat::a);
	//打印stat内部定义的变量
	printf("%d\n", stat::one::a);
}
*/

/*
#include<iostream>
//using namespace std;
using  std::cout;
using  std::cin;
using  std::endl;
int main()
{

	int a = 3;
	int b = 6;
	int c = 0;
	cout << b << endl;
	cout << a << endl;
	cout << endl;
	cin >> c;
	cout << a << endl << b <<endl<<c<< endl;
	return 0;
}
*/


//函数重载  引用
#include<iostream>
using namespace std;
void sweap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
	cout << a <<" " << b << endl;
}
void sweap(double& a, double& b)
{
	double c = a;
	a = b;
	b = c;
	cout << a << " " << b << endl;
}
int main()
{
	int a = 2, b = 4;
	sweap(a, b);
	double c = 1.5, d = 2.5;
	sweap(c, d);
	return 0;
}