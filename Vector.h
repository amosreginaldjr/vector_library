#pragma once
#include<iostream>
using namespace std;

template<typename data>
class Vector;

template<typename data>
ostream& operator<<(ostream& COUT, Vector<data>& veccy);

template <typename data>
class Vector
{
private:
	int capacity; //this holds the max size of the array
	data* cur_user_array;
	int sizeIs; //this holds the total amount of elements that is inside the array
	friend ostream& operator<< <>(ostream& COUT, Vector<data>& veccy);

public:
	bool operator<(Vector<data>& input);
	bool operator>(Vector<data>& input);
	bool operator>=(Vector<data>& input);
	bool operator<=(Vector<data>& input);
	bool operator==(Vector<data>& input);
	Vector<data> operator+(Vector<data>& input1);
	data& operator[](int index);
	data& operator->();
	Vector();
	~Vector();
	data front();
	data back();
	bool is_empty();
	void auto_resize();
	void clear();
	void insert(int index, data value);
	void pop_back(); //removes the last element
	void push_back(data push_data_to_back_vector/*user_input*/);
	void shrink_to_fit();
	void swap(int index1, int index2);
	void remove(int index);
	int get_size();
	int get_capacity();
	int indexOf(data& lookFor);
	
	//debug: 
	/*(These functions should only ever be called when you need to debug
	the program and is not intended to be part of a release version)*/
	void debugAry();
};