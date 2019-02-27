#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

void print_subset(int n,int s)
{
	for(int i=0;i<n;i++)
		if(s&(1<<i)) printf(" sub = %d",i);
	cout<<endl;  
}
int main()
{
	int s[4]={0,1,2,3};
	for(int i=0;i<(1<<4);i++)
	{
		printf("i = %d",i);
		print_subset(4,i);
	}
	return 0;
}
