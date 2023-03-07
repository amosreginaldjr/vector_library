#include<iostream>
#include"Vector.h"
#include"Vector.cpp"
using namespace std;

void testingOperatorOverloading(Vector<int>& vec, Vector<int>& vec2);
void vectorString(Vector<string>& vecSt);
void vectorChar(Vector<char>& vecChar);
void vector2Operations(Vector<int>& vec);
void vector1Operations(Vector<int>& vec);
int main()
{
	Vector<int> vec;
	Vector<int>* pvec = &vec;
	Vector<int> vec2;
	Vector<int>* pvec2 = &vec2;
	Vector<char> vecChar;
	Vector<char>* pvecChar = &vecChar;
	Vector<string> vecSt;
	Vector<string>* pvecSt = &vecSt;

	vector1Operations(vec); //this initlizes the first <int> vector
	cout << endl;
	vector2Operations(vec2); //this initlizes the second <int> vector
	cout << endl;
	vectorChar(vecChar); //this initlizes the first <char> vector
	cout << endl;
	vectorString(vecSt); //this initlizes the first <string> vector
	cout << endl;
	testingOperatorOverloading(vec, vec2); //this is to show what happens wehnwe overload
	cout << endl;

	return 0;
}

void vector1Operations(Vector<int>& vec)
{
	//input data to array:
	cout << "Inputting data into vec: ";
	vec.push_back(1595);
	vec.push_back(3654); vec.push_back(5145); vec.push_back(5684); vec.push_back(3654);
	vec.push_back(5145); vec.push_back(5684); vec.push_back(1595); vec.push_back(3654);
	vec.push_back(22); vec.push_back(23);
	//[1595, 3654, 5145, 5684, 3654, 5145, 5684, 1595, 3654, 22, 23]
	cout << vec;

	cout << "pop(): ";
	vec.pop_back();
	cout << vec;
	//[1595, 3654, 5145, 5684, 3654, 5145, 5684, 1595, 3654, 22]

	cout << "insert (3, 14): ";
	vec.insert(3, 14);
	cout << vec;
	//[1595, 3654, 5145, 14, 5684, 3654, 5145, 5684, 1595, 3654, 22]

	//vector size:
	cout << "size of vec: " << vec.get_size() << endl;
	cout << "capacity of vec: " << vec.get_capacity() << endl;
	cout << "Front of vec: " << vec.front() << endl;
	cout << "Back of vec: " << vec.back() << endl;

	//output array:
	//cout << vec << endl;



	//detecting if the vector is empty:
	/*cout << "isEmpty: " << vec.is_empty() << endl;
	cout << "Clearing array...";
	vec.clear();
	cout << "isEmpty: " << vec.is_empty() << endl;*/


	//vec.clear();
	//cout << "Vector after clear:";
	//vec.outputAry();
}

void vector2Operations(Vector<int>& vec2)
{
	//input data to array:
	cout << "Inputting data into vec2: ";
	vec2.push_back(1595);
	vec2.push_back(8569); vec2.push_back(7542); vec2.push_back(3658); vec2.push_back(2569);
	vec2.push_back(2579); vec2.push_back(6852); vec2.push_back(6541); vec2.push_back(7856);
	vec2.push_back(55); vec2.push_back(56);
	//[9595, 8569, 7542, 3658, 2569, 2579, 6852, 6541, 7856, 55, 56]
	cout << vec2;

	cout << "pop(): ";
	vec2.pop_back();
	cout << vec2;
	//[9595, 8569, 7542, 3658, 2569, 2579, 6852, 6541, 7856, 55]

	cout << "insert (1, 29): ";
	vec2.insert(1, 29);
	//[9595, 29, 8569, 7542, 3658, 2569, 2579, 6852, 6541, 7856, 55]
	cout << vec2;


	//vector size:
	//vector size:
	cout << "size of vec2: " << vec2.get_size() << endl;
	cout << "capacity of vec2: " << vec2.get_capacity() << endl;
	cout << "Front of vec2: " << vec2.front() << endl;
	cout << "Back of vec2: " << vec2.back() << endl;

	//output array:
	//cout << vec2 << endl;


	//detecting if the vector is empty:
	/*cout << "2|isEmpty: " << vec2.is_empty() << endl;
	cout << "2|Clearing array...";
	vec2.clear();
	cout << "2|isEmpty: " << vec2.is_empty() << endl;*/


	//vec2.clear();
	//cout << "Vector after clear:";
	//cout << vec;
}

void vectorChar(Vector<char>& vecChar)
{
	cout << "Inputting data into vecChar: " << endl;
	vecChar.push_back('a');
	vecChar.push_back('e');
	vecChar.push_back('o');
	vecChar.push_back('u');
	vecChar.push_back('i');
	cout << vecChar;

	cout << "pop()";
	vecChar.pop_back();
	cout << vecChar;

	cout << "insert (2, 'i'): ";
	vecChar.insert(2, 'i');
	//[9595, 29, 8569, 7542, 3658, 2569, 2579, 6852, 6541, 7856, 55]
	cout << vecChar;
	

	cout << "size of vecChar: " << vecChar.get_size() << endl;
	cout << "capacity of vecChar: " << vecChar.get_capacity() << endl;
	cout << "Front of vecChar: " << vecChar.front() << endl;
	cout << "Back of vecChar: " << vecChar.back() << endl;

	cout << "Shrink_to_fit: ";
	vecChar.shrink_to_fit();
	cout << "capacity of vecChar: " << vecChar.get_capacity() << endl;

}

void vectorString(Vector<string>& vecSt)
{
	cout << "Inputting data into vecSt: " << endl;
	vecSt.push_back("Reginald");
	vecSt.push_back("Jr");
	vecSt.push_back("Amos");
	cout << vecSt;

	cout << "swap(2, 0): ";
	vecSt.swap(2, 0);
	cout << vecSt;
	cout << "swap(1, 2): ";
	vecSt.swap(1, 2);
	cout << vecSt << endl;
}

void testingOperatorOverloading(Vector<int>& vec, Vector<int>& vec2)
{
	//operator<
	cout << "vec < vec2: ";
	if (vec < vec2)
		cout << "vec < vec2\n";
	else
		cout << "vec >= vec2\n";

	//operator<=
	cout << "vec <= vec2: ";
	if (vec <= vec2)
		cout << "vec <= vec2\n";
	else
		cout << "vec > vec2\n";

	//operator>
	cout << "vec > vec2: ";
	if (vec > vec2)
		cout << "vec > vec2\n";
	else
		cout << "vec <= vec2\n";

	//operator>=
	cout << "vec >= vec2: ";
	if (vec >= vec2)
		cout << "vec >= vec2\n";
	else
		cout << "vec < vec2\n";

	cout << endl;
	
	cout << "overload+: \n";
	cout << "vec: " << vec;
	cout << "vec2: " << vec2;
	cout << "vec3 is the sum of the two arrays: \n";
	Vector<int>  vec3 = vec + vec2;
	cout << "vec3: " << vec3 << endl;
}