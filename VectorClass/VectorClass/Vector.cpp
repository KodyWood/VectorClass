#include "Vector.h"

Vector::Vector()
{

}
Vector::Vector(std::vector<int> vec)
{
	objVec = vec;
}

Vector::~Vector()
{

}

int Vector::add(int index, int b)
{
	return objVec.at(index) + b;
}

int Vector::sub(int index, int b)
{
	return objVec.at(index) - b;
}

int Vector::mul(int index, int b)
{
	return objVec.at(index) * b;
}
float Vector::div(int index, int b)
{
	return (float)objVec.at(index) / b;
}



int Vector::getValueAtIndex(int index) 
{
	return objVec.at(index);
}