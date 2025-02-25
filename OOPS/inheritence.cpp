#include<bits/stdc++.h>
using namespace std;

// class Phone
// {
//     public:
//     string screen;
//     void call(string type)
//     {
//         if(type=="dialphone")
//         {
//             cout<<"calling in dialohoe";
//         }
//         else if(type=="smartphpne")
//         {
//             cout<<"calling in smartphobe";
//         }
//         else if(type == "quantumphone")
//         {
//             cout<<"calling in quantam phone";
//         }
//     }
// };

class Phone
{
    public:
    string screen;
    virtual void call()=0;
};

class Smartphone : public Phone
{
    public:
    void call()
    {
        cout<<"calling in smartphone";
    }
    void internet(){
        
    }
};

class Dialphone : public Phone
{
    public:
    int dialpad;
    void call()
    {
        cout<<"calling in smartphone";
    }
};

class Quantam : public Phone
{
    public:
    void call()
    {
        cout<<"calling in quantam phone";
    }
};

int main()
{
    // Phone* p1 = new Phone();
    Phone* s1 = new Smartphone();
    Phone* d1 = new Dialphone();
    s1->call();
    d1->call();
    return 0;
}