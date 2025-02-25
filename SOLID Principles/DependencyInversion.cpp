#include<bits/stdc++.h>
using namespace std;

// class WiredKeyboard {
//     public:
//         void connect() {
//             cout << "Wired Keyboard connected" << endl;
//         }
//     };
    
//     class Computer {
//         WiredKeyboard keyboard; // Direct dependency
//     public:
//         void useKeyboard() {
//             keyboard.connect();
//         }
//     };

class IKeyboard {
    public:
        virtual void connect() = 0;
        virtual ~IKeyboard() {}
    };
    
class WiredKeyboard : public IKeyboard {
    public:
        void connect() override {
            cout << "Wired Keyboard connected" << endl;
        }
    };
    
class WirelessKeyboard : public IKeyboard {
    public:
        void connect() override {
            cout << "Wireless Keyboard connected" << endl;
        }
    };

    
class Computer {
        IKeyboard* keyboard; // Depend on abstraction
    public:
        Computer(IKeyboard* k) : keyboard(k) {}
        void useKeyboard() {
            keyboard->connect();
        }
    };
    
int main() {
    // Ikeyboard* k1 = new Non

        // WiredKeyboard wk;
        // WirelessKeyboard wlk;
        // Computer c1(&wk);
        // Computer c2(&wlk);
        // c1.useKeyboard(); // Works with wired keyboard
        // c2.useKeyboard(); // Works with wireless keyboard
    }
    
    