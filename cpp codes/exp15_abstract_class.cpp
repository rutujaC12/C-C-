#include<iostream>
class Shape
{
        public:
                Shape();
                virtual ~shape()
                {
                }
                virtual long GetArea()=0;
                virtual long GetPerim()=0;
                virtual void Draw()=0;
                
        private:
};

void Shape::Draw()
{
        std::cout<<"Abstract drawing mechanism!\n";
}

class Circle:public Shape
{
public:
        Circle(int radius):itsRadius(radius)
        {
        }
        ~Circle()
        {
        }
        long GetArea()
        {
                return 3*itsRadius*itsRadius;
        }
        long GetPerim()
        {
                return 9*itssRadius;
        }
        void Draw();
private:
        int itsRadius;
        int itsCircumference;
};

void Circle::
