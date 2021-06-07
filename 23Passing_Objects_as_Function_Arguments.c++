#include<iostream>
using namespace std;

// the below one is the class used to print the complex numbers

class complex{
    int a;
    int b;

    public:
        void setdata(int v,int r){
            a = v;
            b = r;
        }

        // the below one is the function which takes inputs which are object and from the objects it takes some variables and adds them and assign them to a and similar with b
        void setdatabysum(complex t,complex y){
            // in the below code line we are assigning the value we got by adding variable a value in object t and variable a value in object y
            a = t.a + y.a;
            // in the below code line we are assigning the value we got by adding variable b value in object t and variable b value in object y
            b = t.b + y.b;
        }

        // the below code line is used to print the complex nubmers
        void printnumbers(){
            cout<<"the comples number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){

    complex c1,c2,c3;
    // in the below code line we are setting a as 5 and b as 6
    c1.setdata(5,6);
    c1.printnumbers();

// in the below code line we are setting a as 7 and b as 8
    c2.setdata(7,8);
    c2.printnumbers();
    
// in the below code line we are setting a as the sum of variable a in object c1 and a in object c2 and b as the sum of variable b in object c1 and b in object c2
    c3.setdatabysum(c1,c2);
    c3.printnumbers();

    return 0;
}