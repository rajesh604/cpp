#include<iostream>
using namespace std;

class A{
    int a;
    public:
        // void setdata(int a){
        //     // a = a; -- > the beside code line returns a garbage value
        //     this->a = a;
        //     // the above is the pointer pointing to a which sets the value of class variable a to local variable not only this you can also get the object as return using this pointer
        // }

        // calling reference objects

        A & setdata(int a){
            // a = a; -- > the beside code line returns a garbage value
            this->a = a;
            // the above is the pointer pointing to a which sets the value of class variable a to local variable not only this you can also get the object as return using this pointer
           return *this;
        }

        void getdata(){
            cout<<"the value of a is "<<a<<endl;
        }
};

int main(){
    A a;

    // a.setdata(4);
    // a.getdata();

    // when you return A you can also use getdata function after setdata function

    a.setdata(4).getdata();

    return 0;
}