#include<iostream>
using namespace std;

// in this we are going to learn about compile time polymorphism and it is also called early binding it called so because in this the compiler alreddy knows which functions to execute when the function is called.

class Base_Class{
    public:
        int var_base;   
        void display(){
            cout<<"the value of var_base is "<<var_base<<endl;
        }
};

class Derived_class: public Base_Class{
    public:
        int var_derived;
        void display(){
            cout<<"the value of var_derived is "<<var_derived<<endl;
            cout<<"the value of var_derived is "<<var_base<<endl;
        }
};

int main(){
    // the below are the class pointers which towards class objects
    
    Base_Class * Base_class_pointer;
    Base_Class obj_base;

    Derived_class * Derived_class_pointer;
    Derived_class obj_derived;

    // pointing Base_class_pointer to obj_derived
    Base_class_pointer = & obj_derived;

    // but even thought you point it to obj_derived the pointer belongs to Base_Class  so it points to the base class
    Base_class_pointer->var_base = 55;
    Base_class_pointer->display();

    // in the beloiw code lines we are pointing DErived to obj_derived which is a object of Derived_class and it points to the object
    Derived_class_pointer = & obj_derived;
    Derived_class_pointer->var_derived = 56;
    Derived_class_pointer->display();

    return 0;
}