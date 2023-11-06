#pragma once
#include <iostream>
using namespace std;
template <typename T>
class Vector {
	T* array;
	int size;
	int capacity;
public:
	Vector();
	~Vector();
	int getSize();
	int getCapacity();
	void push_back(const T element);
	void pop_back();
	T at(int index);
	T operator[](int index);
};