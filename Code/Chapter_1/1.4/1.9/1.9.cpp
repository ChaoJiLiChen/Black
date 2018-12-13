#include <iostream>

using namespace std;

int main()
{
	int init = 50;
	int sum = 0;
	while(init <= 100)
	{
		sum += init;
		++ init;
	}
	cout <<"sum :"<<sum <<endl;
	return 0;
}
