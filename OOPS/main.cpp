#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    string id;
    int age;
    long long phone;

    Student(string name,string id,int age ,long long phone)
    {
        cout<<"parameterised constructor called\n";
        this->name=name;
        this->id=id;
        this->age=age;
        this->phone=phone;
    }
    // string getName()
    // {
    //     return this->name;
    // }
    // string getId()
    // {
    //     return this->id;
    // }
    // int getAge()
    // {
    //     return this->age;
    // }
    // long long getPhone()
    // {
    //     return this->phone;
    // }
    ~Student()
    {
        cout<<"Destuctor called\n";
    }

};

int main()
{
   
    Student* s1 = new Student("Harsh","123",21,12345);
    delete(s1);

    return 0;
}