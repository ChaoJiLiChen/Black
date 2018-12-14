/*
引入C++ primer给的头文件
读取两个ISBN相同的Sales_item对象 输出他们的和
by Jack 2018.12.14

*/
#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
Sales_item item1;
Sales_item item2;
cin >> item1;
cin >> item2;
cout <<item1 + item2 <<endl;

}
