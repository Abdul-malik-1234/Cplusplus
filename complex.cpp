#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
    Complex operator+(Complex x){
        Complex temp(real+x.real,img+x.img);
        return temp;
    }
};
int main(){
    Complex c1(1,2),c2(2,3);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}