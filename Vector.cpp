#include<iostream>
#include"Vector.h"
using namespace std;

template<typename data>
Vector<data>::Vector()
{
	capacity = 1; //default 1?
	cur_user_array = new data[capacity]; //this value has to modify on the heap
	sizeIs = 0;
}

template<typename data>
Vector<data>::~Vector()
{
	delete[] cur_user_array;
	cout << "Destructor Called" << endl;
}

template<typename data>
data Vector<data>::front()
{
	return cur_user_array[0];
}

template<typename data>
data Vector<data>::back()
{
	return cur_user_array[sizeIs - 1];
}

template<typename data>
bool Vector<data>::is_empty()
{
	if (sizeIs == 0)
		return 1;
	return 0;
}

template<typename data>
void Vector<data>::auto_resize()
{
	if (capacity == 0)
		capacity++;
	else if (capacity == sizeIs)
	{
		capacity *= 2;
		//cout << "size has been doubled" << endl;
		cout << "capacity: " << capacity << "|sizeIs: " << sizeIs << endl;

		data* temp_arr = new data[capacity];
		for (int i = 0; i < capacity / 2; i++)
		{
			temp_arr[i] = cur_user_array[i];
		}
		delete[] cur_user_array;
		cur_user_array = temp_arr;
	}
}

template<typename data>
void Vector<data>::clear()
{
	sizeIs = 0;
}

template<typename data>
void Vector<data>::insert(int index, data value)
{
	auto_resize(); //if the array is full, double the size to be able to insert something new

	if (index > sizeIs) //fix this
	{
		cout << "Index is too large" << endl;
		return;
	}

	for (int i = sizeIs; i > index; i--) //not sure if its supposed to be i<index
	{
		cur_user_array[i] = cur_user_array[i - 1];
	}
	cur_user_array[index] = value;
	sizeIs++;
}

template<typename data>
void Vector<data>::pop_back()
{
	if (sizeIs == 0)
	{
		cout << "there is nothing to pop" << endl;
		return;
	}
	sizeIs--; //this shrinks the size of the array by 1 so it deletes the last element
}

template<typename data>
void Vector<data>::push_back(data push_data_to_back_vector/*user_input*/)
{
	sizeIs++;
	auto_resize();
	cout << "push_back called" << endl;
	cur_user_array[sizeIs - 1] = push_data_to_back_vector;
}

template<typename data>
void Vector<data>::shrink_to_fit()
{
	if (sizeIs == capacity)
		return;

	if (capacity > sizeIs)
	{
		capacity = sizeIs;
	}
}

template<typename data>
int Vector<data>::get_size() //size of the array currently
{
	return sizeIs;
}

template<typename data>
int Vector<data>::get_capacity()
{
	return capacity;
}


template<typename data>
void Vector<data>::swap(int index1, int index2)
{
	if (index1 > sizeIs || index2 > sizeIs)
		return; //try catch throw

	data temp;
	temp = cur_user_array[index1];
	cur_user_array[index1] = cur_user_array[index2];
	cur_user_array[index2] = temp;
}


//operator overloading
template<typename data>
ostream& operator<<(ostream& COUT, Vector<data>& veccy)
{
	COUT << "[";
	for (int i = 0; i < veccy.get_size() - 1; i++)
	{
		COUT << veccy.cur_user_array[i] << ", ";
	}
	COUT << veccy.cur_user_array[veccy.get_size() - 1];
	cout << "]" << endl;
	return COUT;
}

template<typename data>
bool Vector<data>::operator<(Vector<data>& input)
{
	if (sizeIs != input.sizeIs)
		return (sizeIs < input.sizeIs);

	if (sizeIs == input.sizeIs)
	{
		for (int i = 0; i < sizeIs; i++)
		{
			if (cur_user_array[i]/*or you can use "this[i]"*/ < input[i])
				return true;
			else if (cur_user_array[i] > input[i])
				return false;
		}
		return false;
	}
}

template<typename data>
bool Vector<data>::operator>(Vector<data>& input)
{
	if (sizeIs != input.sizeIs)
		return(sizeIs > input.sizeIs);

	if (sizeIs == input.sizeIs)
	{
		for (int i = 0; i < sizeIs; i++)
		{
			if (cur_user_array[i] > input[i])
				return true;
			else if (cur_user_array[i] > input[i])
				return false;
		}
		return false;
	}
}

template<typename data>
bool Vector<data>::operator>=(Vector<data>& input)
{
	if (sizeIs != input.sizeIs)
		return(sizeIs > input.sizeIs);

	if (sizeIs == input.sizeIs)
	{
		for (int i = 0; i < sizeIs; i++)
		{
			if (cur_user_array[i] > input[i])
				return true;
			else if (cur_user_array[i] > input[i])
				return false;
		}
		return false;
	}
}

template<typename data>
bool Vector<data>::operator<=(Vector<data>& input)
{
	if (sizeIs != input.sizeIs)
		return (sizeIs < input.sizeIs);

	if (sizeIs == input.sizeIs)
	{
		for (int i = 0; i < sizeIs; i++)
		{
			if (cur_user_array[i]/*or you can use "this[i]"*/ < input[i])
				return true;
			else if (cur_user_array[i] > input[i])
				return false;
		}
		return false;
	}
}


template<typename data>
data& Vector<data>::operator[](int index)
{
	return cur_user_array[index];
}

template<typename data>
data& Vector<data>::operator->()
{
	return cur_user_array;
}




//Debug Functions:
template<typename data>
void Vector<data>::debugAry()
{
	//cout << endl;
	cout << "[";
	for (int i = 0; i < sizeIs; i++)
	{
		cout << "Element " << i << ": ";
		cout << cur_user_array[i] << endl;//", ";
	}
	//cout << cur_user_array[sizeIs];
	cout << "]";
	cout << endl;
}