#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    // the values in c++ can be chnage this is way you might know it by observing the below code block

    // int a = 56;

    // cout<<"the value of a is: "<<a<<endl;
    // a = 58;
    // cout<<"the value of a is: "<<a<<endl;

    // so to avoid the change we use constants

    // const float b = 36;
    // cout<<"the value of b is: "<<a<<endl;

    // b = 47; --> error

    // cout<<"the value of b is: "<<a<<endl;

    // when we run the above code block we get the following error:
    /*7constants_manipulators.cpp:20:7: error: assignment of read-only variable 'b'
    20 |     b = 47;
      |     ~~^~~~*/

    // we get it because we are changing the value of a constant variable which cannot be changed it is generally used for fixed variables like pi

    // int a = 3,b = 78,c = 98;

    // setw is a function in iomanip which is used to set the minimum space taken by the variable you might know it by using the following block of code

    // setw and endl all these are called manipulators which are used to manipulate the code

    // cout<<"the value of a with setw is: "<<a<<endl;
    // cout<<"the value of b with setw is: "<<b<<endl;
    // cout<<"the value of c with setw is: "<<c<<endl;
    
    // cout<<"\nthe value of a without setw is: "<<setw(4)<<a<<endl;
    // cout<<"the value of b without setw is: "<<setw(4)<<b<<endl;
    // cout<<"the value of c without setw is: "<<setw(4)<<c<<endl;

    // operator precedence

    int a = 8,b = 5;
    int c = a*6 + b;

    // the above one is solve in the following way (a*6) + 5 the above one is solved according to precedence and associativity
    // precedence is similarly a law according to which the calculation is executed like in maths we have bodmass similaryly in c++ and other programming languages have precedence according to which they solve the calculation if the precedence of two operators is same then associativity is checked that in what way the program is executed whether from left to right or viceversa.
    // you can know it by viewing c++reference in web
    cout<<"the value of c is: "<<c<<endl;
    return 0;
}
