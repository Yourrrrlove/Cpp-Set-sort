#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

class MyCompare   //仿函数
{
public:
	bool operator()(int v1, int v2) const   //最后必须加const限定，否则报错
	{
		return v1 > v2; //降序排列
	}
};

void test()
{
	set<int>s1;  //默认升序
	s1.insert(10);
	s1.insert(50);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	set<int, MyCompare>s2;  //降序
	s2.insert(10);
	s2.insert(50);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


int main()
{
	test();
	system("pause");
	return 0;
}
