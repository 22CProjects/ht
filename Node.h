// Node header file 
#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

using namespace std;

template <class key_type, class value_type> 
class Node 
{
	private:
		key_type key;
		value_type value;

	public:
		Node() { key = -1, value = StudentData(); }
		Node(key_type key, value_type value) { this->key = key; this->value = value; }
		int get_key() { return key; }
		value_type get_value() { return value; }
		void set_value(value_type value) { this->value = value; }
};

#endif