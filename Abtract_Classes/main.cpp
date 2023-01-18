#include <iostream>

using namespace std;

class Shapes{
    public:
        virtual int Area()=0;// Pure Virtual function is declared

        void setval_width(int w){
            width=w;
        }

        void setval_height(int h){
            height=h;
        }

    protected:
        int width;
        int height;
};

class Rectangle: public Shapes{
    public:
        int Area(){
            return (width*height);
        }
};

class Triangle: public Shapes{
    public:
        int Area(){
            return (0.5*width*height);
        }
};

int main() {
    Rectangle r;
    Triangle t;

    r.setval_width(6);
    r.setval_height(7);

    t.setval_width(9);
    t.setval_height(6);

    cout<<"The area of the rectangle "<<r.Area()<<endl;
    cout<<"The area of the triangle "<<t.Area()<<endl;

    return 0;
}
