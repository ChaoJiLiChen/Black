#include <iostream>
#include <stdarg.h>
#include <stdio.h>

int sum(int n, ...)
{
	va_list arg_ptr;
	int i = 0, nRes = 0;
	va_start(arg_ptr, n);
	for(; i < n; ++i)
	{
		int temp = va_arg(arg_ptr, int);
		nRes += temp;
	}
	va_end(arg_ptr);
	return nRes;
}

void myPrintf(const char *strFormat, ...)
{
	if(NULL==strFormat)   return;
	va_list arg_ptr;
	va_start(arg_ptr, strFormat);
	char strInfo[1000] = {0};       // 小心别溢出？
	vsprintf(strInfo, strFormat, arg_ptr);      // 按格式打印到strInfo，功能类似sprintf
	fputs(strInfo, stdout);
	va_end(arg_ptr);
}

int main()
{
	myPrintf("%s %d\n","the result is ", sum(4, 45, 15, 45, 100)); 
	return 0;
}

