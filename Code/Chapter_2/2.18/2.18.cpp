/*
更改指针的值和指针所指对象的值

*/
#include <iostream>

using namespace std;

int main()
{
	int * ptr = NULL;
	int nu = 10;
	ptr = &nu;
	cout <<"ptr"<<*ptr<<endl;
	*ptr = 20;
	cout <<"ptr"<<*ptr<<endl;

}
