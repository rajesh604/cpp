#include<iostream>
using namespace std;

// function overloading is the ability to create function with same name and each with their own implementations

int add(float a,float b){
    return (a+b);
}

int add(int a,int b,int c){
    return (a+b+c);
}

int main(){

    // c++ has some features which according to actual arguments and formal arguments the compiler knows which function to initialize. and even if we pass different arguments with different datatypes it tries to convert them to other datatypes and tries not to return any error value and it focuses on the type of function and according to which it converts the data and you can see that in first function

    cout<<"the sum of 3,6 and 9 is "<<add(3,6,9)<<endl;

    return 0;
    
}