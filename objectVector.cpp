// objectVector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;


class Vector
{
public:
	float x, y;
	float length=0;

	Vector() {
		static int count=0;
		setlocale(LC_ALL, "Rus");
		count++;
		cout << endl;
		cout << "Начало работы конструктора:" << endl;
		cout << "Вводите X и Y " << count << " вектора" << endl;
		cin >> x;
		cin >> y;
		getLength(0);
	}

	Vector(Vector a, Vector b) {
		x = a.x + b.x;
		y = a.y + b.y;
		getLength(0);
		getVector();
	}
	void getVector() {
		setlocale(LC_ALL, "Rus");
		cout << "Вектор имеет координаты: " << endl;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;

	}
	void getLength(int i) {
		if (length == 0)
		{
			length = sqrt(x*x + y*y);
		}
		if (i != 0)
		{
			cout << "Длинна вектора " << length << endl;
		}
	}
	float scal(Vector v) {
		return (x*v.x) + (y*v.y);
	}
	
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Vector a = Vector();
	a.getLength(1);
  
	Vector b = Vector();
	b.getLength(1);

	cout << endl;
	cout << "Скалярное произведение векторов" << endl;
	float sc = a.scal(b);
	cout << sc << endl;
	
	cout << endl;
	Vector c = Vector(a, b);

	/*
	Vector c = Vector();
	c.getLength(1);

	Vector d = Vector();
	d.getLength(1);
	*/
	system("pause");
	return 0;
}

