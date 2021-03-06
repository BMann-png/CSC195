#pragma once
#include <initializer_list>

namespace blm
{

	template<typename T, size_t Size>
	class array
	{
	public:
		array();
		array(const std::initializer_list<T>& ilist);
		
		T& operator [] (size_t position);
		const T& operator [] (size_t position) const;
		T& at(size_t position);
		const T& at(size_t position) const;

		T& front();
		T& back();

		T* data();

		void fill(T value);
		void swap(array& other);

		bool empty() const;
		size_t size() const;

	private:
		size_t m_size = Size;
		T m_elements[Size]{};
	};


	template<typename T, size_t Size>
	array<T, Size>::array(const std::initializer_list<T>& ilist)
	{
		size_t i = 0;

		for (auto iter = ilist.begin(); iter != ilist.end(); iter++)
		{
			m_elements[i] = *iter;
			i++;
		}
	}

	template<typename T, size_t Size>
	T& array<T, Size>::operator [] (size_t position)
	{
		return array::at(position);
	}

	template<typename T, size_t Size>
	const T& array<T, Size>::operator [] (size_t position) const
	{
		return array::at(position);
	}

	template<typename T, size_t Size>
	T& array<T, Size>::at(size_t position)
	{
		if (position <= array::m_size && position >= 0)
		{
			return m_elements[position];
		}
		else
		{
			return m_elements[0];
		}
	}

	template<typename T, size_t Size>
	const T& array<T, Size>::at(size_t position) const
	{
		if (position <= array::m_size && position >= 0)
		{
			return m_elements[position];
		}
		else
		{
			return m_elements[0];
		}
	}


	template<typename T, size_t Size>
	T& array<T, Size>::front()
	{
		return m_elements[0];
	}

	template<typename T, size_t Size>
	T& array<T, Size>::back()
	{
		return m_elements[m_size - 1];
	}


	template<typename T, size_t Size>
	T* array<T, Size>::data()
	{
		T* pointer = nullptr;
		pointer = m_elements;
		return pointer;
	}


	template<typename T, size_t Size>
	void array<T, Size>::fill(T value)
	{
		for (size_t i = 0; i < array::m_size; i++)
		{
			array::m_elements[i] = value;
		}
	}

	template<typename T, size_t Size>
	void array<T, Size>::swap(array& other)
	{
		T temp[10]{};

		for (size_t i = 0; i < array::m_size; i++)
		{
			temp[i] = other[i];
			other[i] = m_elements[i];
			m_elements[i] = temp[i];
		}
	}


	template<typename T, size_t Size>
	bool array<T, Size>::empty() const
	{
		return false;
	}

	template<typename T, size_t Size>
	size_t array<T, Size>::size() const
	{
		return m_size;
	}
}