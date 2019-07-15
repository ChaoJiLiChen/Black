//
//  main.cpp
//  使用指针交换两个数组中的最大值
//
//  Created by Chen on 2019/7/11.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>

using namespace std;

//1.创建两个数字数组
//2.找出两个数组中分别最大的数值
//3.指针指向这两个数值
//4.交换

int * find_Max(int *array,int num);
void show(int *array,int num);

int main(int argc, const char * argv[]) {

    int num_Array1[] = {2,4,9,56,23,12};
    int num_Array2[] = {45,90,12,34,55,88,2};

    
    show(num_Array1,sizeof(num_Array1)/sizeof(num_Array1[0]));
    show(num_Array2,sizeof(num_Array2)/sizeof(num_Array2[0]));
    
    int * a = find_Max(num_Array1,sizeof(num_Array1)/sizeof(num_Array1[0]));
    int * b = find_Max(num_Array2,sizeof(num_Array2)/sizeof(num_Array2[0]));
    
    cout <<"a:"<<a<<endl;
    cout <<"b:"<<b<<endl;

    cout <<"hello"<<endl;
    exchange(a,b);
    show(num_Array1,sizeof(num_Array1)/sizeof(num_Array1[0]));
    show(num_Array2,sizeof(num_Array2)/sizeof(num_Array2[0]));

    return 0;

    
}

int * find_Max(int *array,int num)
{
    int *position = NULL;
    int max = array[0];
    for(int i =0;i<num;i++)
    {
        if(max < array[i])
        {
            max = array[i];
            position = &array[i];
        }
    }
    return position;
    
}

void show(int *array,int num)
{
    for(int i =0;i<num;i++)
    {
        cout <<array[i]<<" ";
    }
    cout<<endl;
}

void exchange(int *pa, int *pb)
{
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}







