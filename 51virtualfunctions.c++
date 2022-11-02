#include<iostream>
using namespace std;

// in this we are going to see run time polymorphism it occurs due to function overrrding 
// function overrrding occurs when similar function member is present in both base and derived class
// run time polymorphism is also called late binding

class Base_Class{
    public:
        int var_base;
        // initializing function member
        virtual void display(){
            cout<<"the value of var_base is "<<var_base<<endl;
        }
};

class Derived_class: public Base_Class{
    public:
        int var_derived;
        virtual void display(){
            cout<<"2the value of var_derived is "<<var_derived<<endl;
            cout<<"2the value of var_base is "<<var_base<<endl;
        }
};

class multi1_Derived_class: public Derived_class{
    public:
        int multi1_derived;
        void display(){
            cout<<"3the value of var_derived is "<<var_derived<<endl;
            cout<<"3the value of var_base is "<<var_base<<endl;
            cout<<"3the value of multi1_derived is "<<multi1_derived<<endl;
        }
};

class multi2_Derived_class: public multi1_Derived_class{
    public:
        int multi2_derived;
        void display(){
            cout<<"4the value of var_derived is "<<var_derived<<endl;
            cout<<"4the value of var_base is "<<var_base<<endl;
            cout<<"4the value of multi1_derived is "<<multi1_derived<<endl;
            cout<<"4the value of multi1_derived is "<<multi2_derived<<endl;
        }
};


int main(){
    // initializing function pointer
    Base_Class * Base_class_pointer;
    // creating classes objects
    Derived_class Dc;
    multi1_Derived_class m1Dc;
    multi2_Derived_class m2Dc;

    // pointing base pointer to derived objects and you can see the function in the derived base class is executed it is executed because we had kept virtual beside the function member of base class so the similar function in the derived class get's executed

    Base_class_pointer = &m2Dc;
    Base_class_pointer->display();

    return 0;
}

// rules of virtual functions

// 1.virtual functions cannot be static
// 2.They are accessed by object pointers
// 3.Virtual functions can be a friend of another class
// 4.A virtual function in the base class might not be used.
// 5.If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class