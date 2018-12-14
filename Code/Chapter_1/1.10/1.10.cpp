/*
使用递减顺序打印10 到 0 的整数 使用“--”
by Jack 2018.12.13
*/
#include <iostream>

using namespace std;

int main()
{
	int init = 10;
	while(init >=0)
	{
		cout <<init<<" "<<endl;
		--init;
	}
	return 0;
}
