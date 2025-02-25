#include<bits/stdc++.h>
using namespace std;

// class Bird {
//     public:
//         virtual void fly() {
//             cout << "Flying" << endl;
//         }
//     };
    
//     class Penguin : public Bird {
//     public:
//         void fly() override { 
//             throw runtime_error("Penguins can't fly!"); 
//         }
//     };
    
class Bird {
    public:
        virtual void move() = 0; // More general behavior
    };
    
    class FlyingBird : public Bird {
    public:
        void move() override {
            cout << "Flying" << endl;
        }
    };
    class NonFlyingBird : public Bird {
        public:
            void move() override {
                cout << "walk" << endl;
            }
        };
    
    class Penguin : public NonFlyingBird {
    public:
        void move() override {
            cout << "Swimming" << endl;
        }
    };
    