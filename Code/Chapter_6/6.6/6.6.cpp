#include <iostream>

using namespace std;


int func(int num1 , int num2);
void out();
int main()
{
func(2 ,3);
}

int func(int num1 , int num2)
{
static int N = num1 + num2;
cout <<"N = "<<N<<endl;

}

void out()
{
}
