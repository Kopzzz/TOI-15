#include<iostream>
using namespace std;
class Circle{
private:
    double radius;
public:
    Circle(){radius=0.0;}
    Circle(double r){radius=r;}
    void setRadius(double r){radius=r;}
    double getDiameter(){return radius*2;}
    double getArea(){return radius*radius*(22.0/7);}
    double getCircumference(){return 2*(22.0/7)*radius;}
    double getRadius(){return radius;}
    void setDiameter(double d){radius = d/2;}
/*    void setArea(double a)
    void setCircumference(double c)*/
};
main(){
    Circle c1,c2(7);
    cout<<"Area c1 : "<<c1.getArea()<<endl;
    c1.setRadius(5);
    cout<<"Circumference c1 : "<<c1.getCircumference()<<endl;
    cout<<"Diameter c2 : "<<c2.getDiameter()<<endl;
}
