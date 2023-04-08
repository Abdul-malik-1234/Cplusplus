#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int imag;
    public:
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<real<<" +i"<<imag;
    }
    friend Complex operator+(Complex c1,Complex c2);
    friend ostream& operator<<(ostream& o,Complex& c);
    
};
ostream& operator<<(ostream& o,Complex& c){
        o<<c.real<<"+i"<<c.imag;
        return o;
    }
Complex operator+(Complex c1,Complex c2){
    Complex temp(c1.real+c2.real,c1.imag+c2.imag);
    return temp;
}
int main(){
    Complex c1(1,2),c2(3,4);
    Complex c3=c1+c2;
    cout<<c3;
    return 0;
}