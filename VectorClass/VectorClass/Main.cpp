#include <iostream>
#include "Vector.h"


std::vector<int> testVec1, testVec2;



int main()
{
	testVec1.push_back(5);
	testVec1.push_back(2);
	testVec1.push_back(6);
	testVec1.push_back(4);

	testVec2.push_back(9);
	testVec2.push_back(4);
	testVec2.push_back(1);
	testVec2.push_back(7);


	Vector vector1(testVec1);
	Vector vector2(testVec2);

	for (int i = 0; i < testVec1.size(); i++)
	{
		std::cout << vector1.div(i, vector2.getValueAtIndex(i)) << std::endl;
	}


	return system("pause");
}