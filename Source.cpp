#include<iostream>
#include"Vector.h"
#include"Vector.cpp"
using namespace std;

int main()
{
	Vector<int> vec;
	Vector<int>* pVec = &vec;
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
	//[1595, 3654, 5145, 5684, 3654, 5145, 5684, 1595, 3654, 22]

	vec.insert(3, 14);
	//[1595, 3654, 5145, 14, 5684, 3654, 5145, 5684, 1595, 3654, 22]

	//vector size:
	cout << endl << "THE SIZE IS " << vec.size() << endl;

	cout << "Front: " << vec.front() << endl;
	cout << "Back: " << vec.back() << endl;

	//output array:
	vec.outputAry();
	
	

	//detecting if the vector is empty:
	/*cout << "isEmpty: " << vec.is_empty() << endl;
	cout << "Clearing array...";
	vec.clear();
	cout << "isEmpty: " << vec.is_empty() << endl;*/


	//vec.clear();
	//cout << "Vector after clear:";
	//vec.outputAry();

	return 0;
}