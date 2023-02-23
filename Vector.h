#pragma once
#include<iostream>
using namespace std;

template <typename data>
class Vector
{
private:
	int capacity; //this holds the max size of the array
	data* cur_user_array;
	int sizeIs; //this holds the total amount of elements that is inside the array
public:
	Vector();
	~Vector();
	void outputAry();
	int size();
	void push_back(data push_data_to_back_vector/*user_input*/);
	void auto_resize();
	void pop_back(); //removes the last element
	void insert(int index, data value);
	void clear();
	void shrink_to_fit();
	bool is_empty();


	//impliment this to output the array
	/*ostream& operator<<(ostream& os, Vector& v)
	{
		os << "[ ";
		for (int i = 0; i < v._size - 1; i++)
		{
			os << v.arr[i] << ", ";
		}
		os << v.arr[v._size - 1] << " ]";
		return os;
	}*/
};