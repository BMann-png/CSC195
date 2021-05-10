#include "Point.h"

namespace blm
{
	float x, y;
	Point operator + (blm::Point& p1) 
	{
		Point p;

		p.x = x + p1.x;
		p.y = y + p1.y;

		return p;
	}

	void Write(std::ostream& ostream) {
		ostream << x << " : " << y << std::endl;
	}


	std::ostream& operator << (std::ostream& ostream, const blm::Point& point)
	{
		return ostream << point.x << " : " << point.y << std::endl;
	}
}