//设置public private 主要是为了继承的问题 无论是public private 类的本身对象都可以调用 但是在类外无法直接调用 可以用类对象去调用 或者这个方法是static的
#include <iostream>

using namespace std;

class A
{
	public:
		//static int add();
		int add();

};

int A::add()
{
	cout <<"hello"<<endl;
}
int main()
{
	A::add();

}
