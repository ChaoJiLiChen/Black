#include <iostream>
#include <string>
using namespace std;

string &test(string name);

int main()
{
	string my = "abc";
	string &myname =  test(my);
	cout <<myname<<endl;

}

string &test(string name)
{
	cout <<"name:"<<name<<endl;
	name = name + "hello";
	return name;


}
