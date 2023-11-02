#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Fraction{
public:
    int num,denom; // numerator  denominator
    void setFraction(int n, int d){num=n;denom=d;}
    void getFraction(int &n, int &d){n=num;d=denom;}
    int getNum(){return num;}
    int getDenom(){return denom;}
    Fraction mul( Fraction other ){
        return Fraction((num*other.num),(denom*other.denom));
    }
    Fraction add( Fraction other ){
        return Fraction((num*other.denom)+(denom*other.num),(denom*other.denom));
    }
    Fraction sub( Fraction other ){
        return Fraction((num*other.denom)-(denom*other.num),(denom*other.denom));
    }
    Fraction div( Fraction other ){
        return Fraction((num*other.denom),(denom*other.num));
    }
    string str()
    {
        string s=to_string(num)+"/"+to_string(denom);
        return s;
    }
    bool isEqualTo( Fraction other){
        if((other.num/other.denom)==(num/denom))return true;
        else return false;
    }
    void print(){cout << num <<"/" <<denom ;}
    Fraction(int n, int d){num=n;denom=d;}
    Fraction(){num=0,denom=0;}

};
int main(){
    Fraction f1(2,3),f2(4,7),f3,f4;
    int x,y;
    f2.getFraction(x,y);
    f3.setFraction(x,y);
    f4=f3.mul(f1);
    f1.print(); cout<<" x ";
    f3.print(); cout<<" = ";
    f4.print(); cout<<endl;
    Fraction *f5=new Fraction(1,2);
    cout<<f4.str()+" / "+f5->str();
    cout<<" = "+f4.div(*f5).str()+"\n";
    if(f2.isEqualTo(f3)) cout<<"Equal.\n";
    else cout<<"Not equal.\n";
}

