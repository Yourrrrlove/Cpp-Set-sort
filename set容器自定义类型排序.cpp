#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

class Compare
{
public:
	bool operator()(const Person&p1, const Person&p2) const
	{
		return p1.m_age > p2.m_age;
	}
};


void test()
{
	set<Person, Compare>s1;
	Person p1("刘备", 24);
	Person p2("关羽", 30);
	Person p3("张飞", 40);
	Person p4("赵云", 25);
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person,Compare>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
	}

}


int main()
{
	test();
	system("pause");
	return 0;
}
