#include<iostream>

using namespace std;

class Complex
{
	private:
	int real,imagin;
	
	public:
	Complex();
	Complex(int r, int i);
	//Complex(const Complex &num);
	
	void setReal(int r);
	int getReal();
	void setImagin(int i);
	int getImagin();
	
	Complex operator +(Complex num);
	Complex operator -(Complex num);
	
	void display();
	
};

Complex :: Complex()
{
	real = 0;
	imagin = 0;
}

Complex :: Complex(int r, int i)
{
	real = r;
	imagin = i;
}

void Complex :: setReal(int r)
{
	real = r;
}

int Complex :: getReal()
{
	return real;
}

void Complex :: setImagin(int i)
{
	imagin = i;
}

int Complex :: getImagin()
{
	return imagin;
}

/*
Complex :: Complex(const Complex &num)
{
        this -> real = num.getReal();
	
	this -> imagin = num.getImagin();
		
}

*/

Complex Complex :: operator +(Complex num)
{
	Complex c;
	int temR, temI;
	
	temR = real + num.getReal();
	temI = imagin + num.getImagin();
	
	c.setReal(temR);
	c.setImagin(temI);
	
	return c;
	
}

Complex Complex :: operator -(Complex num)
{
	Complex c;
	int temR, temI;
	
	temR = real - num.getReal();
	temI = imagin - num.getImagin();
	
	c.setReal(temR);
	c.setImagin(temI);
	
	return c;
	
}

void Complex :: display()
{
	cout<<real<<"+"<<imagin<<"i"<<endl;
}


int main()
{
	Complex c1(1,2), c2(3,4),c3;
	
	c3 = c1 + c2;
	
	c3.display();
	
}








