#include<bits/stdc++.h>
using namespace std;
class Complex{
    public:
    int real;
    int img;

   
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }

    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
};

class Addition{
    public:
    float add(float a,float b)
    {
        return a+b;
    }
    
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
    Complex add(Complex c1,Complex c2)
    {
        int r1 = c1.real;
        int r2 = c2.real;
        int i1 = c1.img;
        int i2 = c2.img;

        Complex sum(r1+r2,i1+i2);
        return sum;
    }
};

int main()
{
    Complex c1(3,4);
    Complex c2(2,2);
    Addition a1;

    a1.add(c1,c2).display();
    cout<<a1.add(3,5)<<endl;
    return 0;
}

