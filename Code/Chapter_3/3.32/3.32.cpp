#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	vector<int>vec;
	for(int i = 0 ; i < 10 ; i ++)
	{
		vec.push_back(arr[i]);
	}
	for(vector<int>::iterator abc = vec.begin() ; abc != vec.end(); ++abc )
	{
		cout <<*abc<<endl;
	}
}
