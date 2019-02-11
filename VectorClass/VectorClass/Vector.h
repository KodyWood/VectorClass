#pragma once
#include <vector>
class  Vector
{
public:
	 Vector();
	 Vector(std::vector<int>);
	~Vector();

	int add(int, int);
	int sub(int, int);
	int mul(int, int);
	float div(int, int);
	int getValueAtIndex(int);

private:
	std::vector<int> objVec;
};


