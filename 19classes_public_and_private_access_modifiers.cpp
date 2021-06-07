#include<iostream>
using namespace std;

// hello guys in theis program we are going to learn about classes and private and public modifiers

// so why do we use class it is used to store multiple datat types ? then you might raise a question we have structure for that then why do we used classes since structures can also store multiple data types . the anwer is structures does not provide any security and the data can be accessed from anywhere in the program. and for the real world projects we use classes becuase it is preferred.
// in the below code line we have initiated a class

class Employee{

    // in the below code line we have initiated a private modifier which is things in which we declare the data which cannnot be accessed by anyone directly.
    private:
        int a,b,c;
    // in the below code line we initiated a public modifier which is a thing in which we declare the data which can be accessed by anyone
     public:
        int d,e;
        // we declared a function prototype in the below code line
        void setdata(int a1,int a2,int a3);
        // in the below code line we have declare a functoin
        void getdata(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};

// in the below code block we have declared a function which says the function below indicates the function in the class Employee  and the below function can access the elements in the private class

// void Employee :: setdata(int a1,int a2,int a3){
//     a = a1;
//     b = a2;
//     c = a3;
// }

// the below function cannot run because we have not initiated the void Employee :: which inidicates that the thing after it belongs to the class Employee and the below function cannot access the variables in the private class

// void setdata(int a1,int a2,int a3){
//     a = a1;
//     b = a2;
//     c = a3;
// }


int main(){
    Employee rajesh; // creating a object rajesh using class Employee
    // the below code line can not be initiated because the variable belongs to private modifier
    // rajesh.a = 50;
    // the below two code lines can be initiated because the variable belongs to public modifier
    rajesh.d = 34;
    rajesh.e = 35;
    // calling the function
    rajesh.setdata(5,6,7);
    rajesh.getdata();
    return 0;
}