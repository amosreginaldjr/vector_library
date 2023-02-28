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


	vector1Operations(vec);
	vector2Operations(vec2);
	//vectorChar(vecChar);
	//vectorString(vecSt);

	testingOperatorOverloading(vec, vec2);

	/*bool a, b, c, d;
	a = (vec < vec2);	 //3654  <  29  =  0
	b = (vec <= vec2);	 //3654  <= 29  =  1
	c = (vec > vec2);	 //3654  >  29  =  1
	d = (vec >= vec2);	 //3654  >= 29  =  1
	cout << a << b << c << d << endl;*/
	
	cout << endl;
	cout << "pvec->front(): " << pvec->front();
	cout << endl;

	return 0;
}

void vector1Operations(Vector<int>& vec)
{
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
	cout << endl << "THE SIZE IS " << vec.get_size() << endl;

	cout << "Front: " << vec.front() << endl;
	cout << "Back: " << vec.back() << endl;

	//output array:
	cout << vec << endl;


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
	vec2.push_back(1595);
	vec2.push_back(8569); vec2.push_back(7542); vec2.push_back(3658); vec2.push_back(2569);
	vec2.push_back(2579); vec2.push_back(6852); vec2.push_back(6541); vec2.push_back(7856);
	vec2.push_back(55); vec2.push_back(56);
	//[9595, 8569, 7542, 3658, 2569, 2579, 6852, 6541, 7856, 55, 56]

	vec2.pop_back();
	//[9595, 8569, 7542, 3658, 2569, 2579, 6852, 6541, 7856, 55]

	vec2.insert(1, 29);
	//[9595, 29, 8569, 7542, 3658, 2569, 2579, 6852, 6541, 7856, 55]

	//vector size:
	cout << endl << "2|THE SIZE IS " << vec2.get_size() << endl;

	cout << "2|Front: " << vec2.front() << endl;
	cout << "2|Back: " << vec2.back() << endl;

	//output array:
	cout << vec2 << endl;


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
	vecChar.push_back('a');
	vecChar.push_back('e');
	vecChar.push_back('o');
	vecChar.push_back('u');
	vecChar.push_back('i');
	vecChar.pop_back();
	vecChar.insert(2, 'i');

	cout << "The FRONT is: " << vecChar.front() << endl;
	cout << "The BACK is: " << vecChar.back() << endl;

	cout << "The SIZE is: " << vecChar.get_size() << endl;
	cout << "The CAPACITY is: " << vecChar.get_capacity() << endl;


	cout << vecChar << endl;
}

void vectorString(Vector<string>& vecSt)
{
	vecSt.push_back("Reginald");
	vecSt.push_back("Jr");
	vecSt.push_back("Amos");
	cout << vecSt << endl;

	vecSt.swap(2, 0);
	cout << vecSt;
	vecSt.swap(1, 2);
	cout << vecSt << endl;
}

void testingOperatorOverloading(Vector<int>& vec, Vector<int>& vec2)
{
	//operator<
	if (vec < vec2)
		cout << "vec < vec2\n";
	else
		cout << "vec >= vec2\n";

	//operator<=
	if (vec <= vec2)
		cout << "vec <= vec2\n";
	else
		cout << "vec > vec2\n";

	//operator>
	if (vec > vec2)
		cout << "vec > vec2\n";
	else
		cout << "vec <= vec2\n";

	//operator>=
	if (vec >= vec2)
		cout << "vec >= vec2\n";
	else
		cout << "vec < vec2\n";


}