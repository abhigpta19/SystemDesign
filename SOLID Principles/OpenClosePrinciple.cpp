// "Software entities (classes, modules, functions) should be open for extension but closed for modification."

// This means:
// ✅ Open for Extension → We should be able to add new functionality without changing the existing code.
// ❌ Closed for Modification → We should avoid modifying existing code to prevent breaking existing functionality.

// class Vehicles
// {
//     public:
//     void park(int tyre,)
//     {
//         if(tyre==2)
//         cout<<"Bike park";
//         else if(tyre==4)
//         cout<<"car parking";
//         else if(tyre===6)
//     }
// };

class Vehicle
{
    public:
    virtual void park()=0;
};

class Bike : public Vehicle
{
    public:
    void park()
    {
        cout<<"Bike park";
    }
};

class Car : public Vehicle
{
    public:
    void park()
    {
        cout<<"Car parkig";
    }
};

class Truck : public Vehicle
{
    public: 
    void park()
    {
        cout<<"Truck park";
    }
};




