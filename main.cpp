#include <iostream>

using namespace std;

class Polygon{
protected:
	int width, height;
public:
	Polygon(int a, int b): width(a), height(b){}
	void set_values(int a, int b){width = a, height = b;}
	virtual int area(void) = 0;
	//virtual int area(){return 0;}
	void printarea(){cout << this->area() << endl;}
	
};

class Rectangle: public Polygon{
public:
	Rectangle(int a, int b): Polygon(a, b) {}
	int area(){return width * height;}
};

class Triangle: public Polygon{
public:
	Triangle(int a, int b):Polygon(a, b) {}
	int area(){return width * height/2;}
};

int main()
{
	Polygon *ppoly = new Rectangle (4, 7);
	Polygon *ppoly2 = new Triangle (4, 7);
	ppoly->printarea();
	ppoly2->printarea();
	delete ppoly;
	delete ppoly2;
	
	
	/*
	Rectangle rect;
	Triangle tri;
	//Polygon poly;
	Polygon * ptrpoly = &rect;
	Polygon * ptrpoly2 = &tri;
	//Polygon * ptrpoly3 = &poly;
	ptrpoly->set_values(4, 5);
	ptrpoly2->set_values(4, 5);
	//ptrpoly3->set_values(4, 5);
	cout << ptrpoly->area() << endl;
	cout << ptrpoly2->area() << endl;
	//cout << ptrpoly3->area() << endl;
	*/
}
