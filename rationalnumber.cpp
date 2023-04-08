//Write a class for rational number (p/q) with overloading + and <<operator
#include<iostream>
using namespace std;
class rational{
    private:
    int numerator;
    int denominator;
    public:
    rational(int p=1,int q=1){
        numerator=p;
        denominator=q;
    }
    friend rational operator+(rational r1,rational r2);
    friend ostream& operator<<(ostream& o,rational& r);
};
rational operator+(rational c1,rational c2){
    rational temp((c1.numerator*c2.denominator)+(c1.denominator*c2.numerator),(c1.denominator*c2.denominator));
    return temp;
}
ostream& operator<<(ostream& o,rational& r){
    if(r.numerator==r.denominator){
        o<<1;
        return o;
    }
    if(r.numerator%r.denominator==0) r.numerator/=r.denominator;
    if(r.denominator%r.numerator==0) r.denominator/=r.numerator;
    if(r.denominator==1){
        o<<r.numerator;
        return o;
    }
    o<<r.numerator<<'/'<<r.denominator;
    return o;
}
int main(){
    rational r1(4,2),r2(4,2);
    rational r3=r1+r2;
    cout<<r3;
    return 0;
}