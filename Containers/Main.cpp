#include <iostream>

template<typename TValue>
class set
{
public:
	struct node_t
	{
		node_t(const TValue& value) : _value{ value } {}

		TValue _value;
		node_t* _left{ nullptr };
		node_t* _right{ nullptr };

	};

	void insert(const TValue& value)
	{
		node_t* new_node = new node_t{ value };

		if (_root == nullptr)
		{
			_root = new_node;
		}
		else
		{
			node_t* node = _root;
			while (node)
			{
				if (value == node->_value)break;

				if (value < node->_value)
				{
					if (node->_left == nullptr)
					{
						node->_left = new_node;
						break;
					}
					node = node->_left;
				}
				else
				{
					if (node->_right == nullptr)
					{
						node->_right = new_node;
						break;
					}
					node = node->_right;
				}
			}
		}
	}

	bool find(const TValue& value)
	{
		node_t* node = _root;
		while (node && node->_value != value)
		{
			node = (value < node->_value) ? node->_left : node->_right;
		}

		return (node);
	}

private:
	node_t* _root{ nullptr };
};


template<typename TKey, typename TValue>
class map
{
public:
	struct node_t
	{
		node_t(const TKey& key, const TValue& value) : _key{ key}, _value { value } {}

		TKey _key;
		TValue _value;
		node_t* _left{ nullptr };
		node_t* _right{ nullptr };

	};

	void insert(const TKey key, const TValue& value)
	{
		node_t* new_node = new node_t{ key, value };

		if (_root == nullptr)
		{
			_root = new_node;
		}
		else
		{
			node_t* node = _root;
			while (node)
			{
				if (key == node->_key)break; 

				if (key < node->_key)
				{
					if (node->_left == nullptr)
					{
						node->_left = new_node;
						break;
					}
					node = node->_left;
				}
				else
				{
					if (node->_right == nullptr)
					{
						node->_right = new_node;
						break;
					}
					node = node->_right;
				}
			}
		}
	}

	TValue at(const TKey& key)
	{
		node_t* node = _root;
		while (node && node->_key != key)
		{
			node = (key < node->_key) ? node->_left : node->_right;
		}

		return (node->_value);
	}

private:
	node_t* _root{ nullptr };
};

//typedef unsigned int id_t;
using id_t = unsigned int;

int main()
{
	set<id_t> ids;
	ids.insert(20);
	ids.insert(10);
	ids.insert(30);
	ids.insert(25);
	ids.insert(2);
	ids.insert(70);

	std::cout << "find(10):" << ids.find(10) << std::endl;
	std::cout << "find(5):" << ids.find(5) << std::endl;
	std::cout << "find(30):" << ids.find(30) << std::endl;
	std::cout << "find(3):" << ids.find(3) << std::endl;

	map<id_t, std::string> students;
	students.insert(20, "Andrew");
	students.insert(10, "Bob");
	students.insert(30, "Peter");
	students.insert(5, "Jim");

	std::cout << students.at(10) << std::endl;
	std::cout << students.at(5) << std::endl;
	std::cout << students.at(30) << std::endl;
}