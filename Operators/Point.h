#pragma once
#include <iostream>

namespace blm
{
	
	class Point
	{
	public:
		Point() : x{ 0 }, y{ 0 } { }
		Point(float x, float y) : x{ x }, y{ y } {}

		friend Point operator + (const Point& p1);
		Point operator - (const Point& p1);
		Point operator * (float s);

		friend void Write(std::ostream& ostream);

		friend std::ostream& operator << (std::ostream& ostream, const blm::Point& point);

	public:
		float x, y;
	/*private:
		float x, y;*/
	};
}

