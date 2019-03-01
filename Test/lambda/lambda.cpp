#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return  a < b;
}

int main()
{
	vector<int> myvec {3, 2, 5, 7, 3, 2};
	vector<int> lbvec(myvec);

	sort(myvec.begin(), myvec.end(), cmp); // 旧式做法
	cout << "predicate function:" << endl;
	for (int it : myvec)
		cout << it << ' ';
	cout << endl;
}
