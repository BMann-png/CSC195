#include <iostream>
using namespace std;


void set(int& i)
{
	i = 100;
}

int main()
{
	int i1 = 2345;
	int i2 = 20;

	int& r = i1;
	int* p = nullptr;


	p = &i1;
	p = &i2;

	char* pc = (char*)&i1;
	cout << (int)*pc << endl;

	r = 30;
	set(r);
	cout << i1 << endl;
	cout << r << endl;

	cout << p << endl;
	cout << *p << endl;
	/*
	//this allocates the memory necessary, but does not necessary initialize it yet
	int* p1 = new int;

	int t = 2;

	p1 = &t;

	//frees up the memory
	delete p1;

	int* p2 = new int[1];

	delete[] p2;
	*///This stuff seems to cause an 'assertion failure'
	
}