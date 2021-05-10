#pragma once

template<typename T>
class Point
{
public:
	Point() : x{ 0 }, y{ 0 }{}
	Point(T x, T y) : x{ x }, y{ y } {}

	void set(T x, T y); //{ this->x = x; this->y = y; }
private :
	T x, y;
};

template<typename T>
void Point<T>::set(T x, T y)
{
	this->x = x;
	this->y = y;
}

template<typename T, int Size>
class array
{
public:
	T& operator [] (size_t position) {
		return m_elements[posistion];
	}
	const T& operator [] (size_t position) const {
		return m_elements[posistion];
	}

	void swap(array& other);
private:
	T m_elements[Size];
};

//template<typename T, Size>
//void array<T, Size>::swap(array& other)
//{
//	for (size_t i = 0; i < Size)
//	{
//		T temp = m_elements
//	}
//}


typedef Point<int>pointi_t;
typedef Point<float>pointf_t;

typedef int this_is_a_really_stupid_way_to_say_int;
//typedef double currency_t;