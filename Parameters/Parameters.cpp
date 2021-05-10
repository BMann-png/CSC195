#include <iostream>

void func1(int i)
{
	i = 10;
}

void func2(std::string text)
{
	//
}

void func3(int* i)
{
	if (i)
	{
		std::cout << *i << std::endl;
	}
}

int Random(int max) 
{
	int r = rand() % max + 1;

	return r;
}

class A
{
public:
	A() : i{ 0 } {}
	A(int v) : i{ v } { i = v; }

	void Set(int v) { i = v; }
	int Get() { return i; }
	int& GetRef() { return this->i; }

private:
	int i;
};


int main()
{
	A a{ 10 };
	a.Set(17);

	//return values
	
	srand(static_cast<unsigned int>(time(NULL)));

	std::cout << Random(10) << std::endl;

	//parameters
	int i = 0;
	func1(i);
	std::cout << i << std::endl;

	std::string text = "Hello!";

	time_t start = time(NULL);
	for (int i = 0; i < 1000000; i++)
	{
		func2(text);
	}

	time_t end = time(NULL);
	std::cout << end - start << std::endl;
	

	int* p = &i;
	func3(p);


}