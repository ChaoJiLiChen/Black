/*
用户输入两个数 打印这两个数中间的整数
by Jack 2018.12.13
*/
#include <iostream>

using namespace std;

int main()
{
	cout <<"please cin two number"<<endl;
	int a = 0;
	int b = 0;
	cin >> a >> b;
	if(a < b)
	{
		while (a < b)
		{
			++a;
			cout <<a<<" "<<endl;
		}
	}
	if(a > b)
	{
		while (b <a)
		{
			++b;
			cout <<b<<" "<<endl;
		}
	}
	return 0;
}
