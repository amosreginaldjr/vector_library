#include<iostream>
#include"Vector.h"
#include"Vector.cpp"
using namespace std;

int main()
{
	Vector<int> vec;
	int userData = 0;
	int size_to_pass = vec.size();

	//unsure:
	

	//input data to array:
	vec.push_back(1595);
	vec.push_back(3654); vec.push_back(5145); vec.push_back(5684); vec.push_back(3654);
	vec.push_back(5145); vec.push_back(5684); vec.push_back(1595); vec.push_back(3654);
	vec.push_back(22); vec.push_back(23);
	//[1595, 3654, 5145, 5684, 3654, 5145, 5684, 1595, 3654, 22, 23]

	vec.pop_back();

	vec.insert(3, 14);
	//[1595, 3654, 5145, 14, 5684, 3654, 5145, 5684, 1595, 3654, 22, 23]

	//vector size:
	cout << endl << "THE SIZE IS " << vec.size() << endl;

	//output array:
	vec.outputAry();


	//vec.clear();
	//cout << "Vector after clear:";
	//vec.outputAry();

	return 0;
}