#include<iostream>
using namespace std;
// the below one is a global variable
int glo = 6;

void sum(){
    int a;
    // the below one is a local variable
    glo = 0;
}

int main(){
    // initiating the variables
    // int a = 14;
    // int b = 2;
    // rather than initiating the variables separately you can also initiate it in the following way
    int a = 14 , b = 2;
    float pi = 5.64225559;
    char s = 's';
    double r = 5.6422555955;
    // if bool is assigned to true then it return 1 when it is printed
    bool t = true;   
    // cout << "\nthe value of a is " << a <<"\nthe value of b is " << b << "\nthe value of pi is " << pi << "\nthe value of s is " << s << "\nthe value of r is " << r << "\nthe value of t is " << t;
    // the below function gives glo = 0 as output which creates a local variable and if the global variable is of the same name then the program gives more importance or precedence to the local variable
    sum();
    cout << glo;
    return 0;
}