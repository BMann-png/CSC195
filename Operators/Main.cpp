#include <iostream>
#include "Point.h"

//void Add(blm::Point& p1, blm::Point& p2)
//{
//	p1.x += p2.x;
//	p1.y += p2.y;
//}


//void operator + (blm::Point& p1, const blm::Point& p2)
//{
//	p1.x += p2.x;
//	p1.y += p2.y;
//}

int main()
{
	blm::Point point1(12, 8);
	blm::Point point2(4, 5);

	//Add(point1, point2);
	blm::Point point3 = point1 + point2;
	//point1.Write(std::cout);
	std::cout << point3;
}