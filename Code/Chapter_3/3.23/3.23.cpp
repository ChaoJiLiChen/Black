#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a (10,20);
	for(vector<int>::iterator it = a.begin();it != a.end(); ++it)
	{
		cout <<(*it)*2<<endl;
	}


}
