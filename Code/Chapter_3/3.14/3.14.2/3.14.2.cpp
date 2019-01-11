#include <iostream>
#include <vector>


using namespace std;

int main()
{
	string nu;
	vector<string>hello;
	int i = 0;
	while(i < 10)
	{
		if(i<10)
		{
			cin >> nu;
			hello.push_back(nu);
		}
		i++;
	}
	int a = 0;
	while(a<10)
	{
		if(a < 10)
		{
			cout <<hello[a]<<endl;
		}
		a++;
	}

}
