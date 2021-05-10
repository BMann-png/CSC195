#include <iostream>
#include "Point.h"

//int max(int i1, int i2)
//{
//	if (i1 > i2)
//	{
//		return i1;
//	}
//	else
//	{
//		return i2;
//	}
//
//}

template<typename T>
T max(T i1, T i2)
{
	if (i1 > i2)
	{
		return i1;
	}
	else
	{
		return i2;
	}

}

template<typename T1, typename T2>
T1 max(T1 i1, T2 i2)
{
	return (i1 < i2) ? i1 : i2;
}

template<typename T>
T min(T i1, T i2)
{
	return (i1 < i2) ? i1 : i1;
}

template<typename T>
T sqr(T v)
{
	return v * v;
}

int main()
{
	pointi_t pi(4, 6);
	pointf_t pf(3.5f, 10.2f);

	array<float, 20> n;

	this_is_a_really_stupid_way_to_say_int i = 10;

	std::cout << max(10, 14) << std::endl;
	std::cout << max(3.5f, 6.7f) << std::endl;
	std::cout << max(3.5f, 18) << std::endl;

}