#include<iostream>
using namespace std;

class Circle
{
	private:
		int centerX;
		int centerY;
		float radius;
		float circumference;
		float area;
	public:
		Circle()
		{
			centerX = 0;
			centerY = 0;
			radius = 0;
		}
		Circle(int cx, int cy)
		{
			centerX = cx;
			centerY = cy;
			radius = 0;
		}
		Circle(int cx, int cy, int r)
		{	
			centerX = cx;
			centerY = cy;
			radius = r;
		}
		void calcArea();
		float getArea();
		void calcCircumference();
		float getCircumferenece();
};

class Line :: public Circle
{
	privete
}

void Circle :: calcArea()
{
	area = 3.14 * radius * radius;
}

float Circle :: getArea()
{
	return area;
}

void Circle :: calcCircumference()
{
	circumference = 2 * 3.14 * radius;
}

float Circle :: getCircumferenece()
{
	return circumference;
}

int main()
{
	float area, cir;
	Circle c1(3, 5, 3);
	c1.calcArea();
	area = c1.getArea();
	cout<<"Area is: "<<area<<endl;
	c1.calcCircumference();
	cir = c1.getCircumferenece();
	cout<<"Circumference is: "<<cir<<endl;
	return 0;
	
}
