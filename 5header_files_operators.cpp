#include<iostream>
using namespace std;

// there are two types of header files
// 1.system header files: it comes with the compiler
// #include<iostream>
// 2.user defined header files: It is written by the programmer
// #include "this.h" --> the beside one is a user defined header file which should be present in the current working directory else the program fails

int main()
{   int a=6,b = 10;
    cout<<"operators in c++"<<endl;
    cout<<"the below ones are the operators in c++"<<endl;
    // arithmatic operators
    cout<<"the sum of a,b is "<<a+b<<endl;
    cout<<"the minus of a,b is "<<a-b<<endl;
    cout<<"the multiplication of a,b is "<<a*b<<endl;
    cout<<"the division of a,b is "<<a/b<<endl;
    cout<<"the modulus of a,b is "<<a%b<<endl;
    cout<<"the increment of a,b is "<<a++<<endl;
    cout<<"the decrement of a,b is "<<a--<<endl;
    cout<<"the increment of a,b is "<<++a<<endl;
    cout<<"the decrement of a,b is "<<--a<<endl;
    cout<<endl;
    // assignment operators --> used to assign the values to the variables

    //int a =3,b= 9;
    //char d='d

    // comparision operators --> used to compare the operators

    cout<<"following are the comparision operators in c++"<<endl;
    cout<<"the == between a and b is "<<(a==b)<<endl;
    cout<<"the != between a and b is "<<(a!=b)<<endl;
    cout<<"the >= between a and b is "<<(a>=b)<<endl;
    cout<<"the <= between a and b is "<<(a<=b)<<endl;
    cout<<"the > between a and b is  "<< (a>b)<<endl;
    cout<<"the < between a and b is  "<< (a<b)<<endl;

    // logical operators

    cout<<"following are the logical operators in c++"<<endl;
    // in the below code line inorder the value to be true both the values need to be true
    cout<<"the value of logical and operator is "<<((a==b) && (a<b))<<endl;
    // in the below code one of them is false and other is true
    cout<<"the value of logical or operator is "<<((a==b) || (a<b))<<endl;
    // in the below code the logical not operator converts the ouput into into another form like if the value is 1 then it converts it into 0 and vice versa
    cout<<"the value of logical not operator is "<<!((a==b) || (a<b))<<endl;

    // there are also bitwise operators in c++ you can also view them

    return 0;
}
