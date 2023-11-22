#include<iostream>
using namespace std;

class Shape
{
        protected:
                  double x,y;
        public:
                  void set_dim(double i,double j=0)
                  {
                        x=i;
                        y=j;
                  }
                  virtual void show_area()
                  {
                        cout<<"No area computational defined";
                        cout<<"for this case.\n";
                  }
};

class Triangle:public Shape
{
        public:
                void show_area()
                {
                        cout<<"Triangle with height ";
                        cout<<x<<" and base "<<y;
                        cout<<" has an area of ";
                        cout<<x*0.5*y<<".\n";
                }
};

class Square:public Shape
{
        public:
                void show_area()
                {
                        cout<<"Square with dimenstions ";
                        cout<<x<<"x"<<y;
                        cout<<" has an area of ";
                        cout<<x*y<<".\n";
                }
};

class Circle:public Shape
{
        public:
                void show_area()
                {
                        cout<<"Circle with radius ";
                        cout<<x;
                        cout<<" has an area of ";
                        cout<<3.14*x*x;
                }
};

int main()
{
        Shape *p;
        Triangle t;
        Square s;
        Circle c;
        
        p=&t;
        p->set_dim(10.0,5.0);
        p->show_area();
        
        p=&s;
        p->set_dim(10.0,5.0);
        p->show_area();
        
        p=&c;
        p->set_dim(10.0,5.0);
        p->show_area();
        
        return 0;
}
