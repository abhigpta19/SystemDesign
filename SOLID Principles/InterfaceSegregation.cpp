// class IWorker {
//     public:
//         virtual void work() = 0;
//         virtual void eat() = 0;
//     };
    
//     class Robot : public IWorker {
//     public:
//         void work() override {
//             cout << "Robot working" << endl;
//         }
        
//         void eat() override { // Wrong: Robots don't eat
//             throw runtime_error("Robots don't eat!");
//         }
//     };
    


class IWork {
    public:
        virtual void work() = 0;
        virtual ~IWork() {}
    };
    
    class IEat {
    public:
        virtual void eat() = 0;
        virtual ~IEat() {}
    };
    
    class Human : public IWork, public IEat {
    public:
        void work() override {
            cout << "Human working" << endl;
        }
        void eat() override {
            cout << "Human eating" << endl;
        }
    };
    
    class Robot : public IWork {
    public:
        void work() override {
            cout << "Robot working" << endl;
        }
    };
    