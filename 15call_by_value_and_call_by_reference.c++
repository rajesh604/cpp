#include<iostream>

using namespace std;

// the below one is the sum function used to do the sum of two variables

int sum(int a,int b) {
    int c = a + b;
    return c;
}

// the below function do not swap the actual parameters the below one is called call by value function it takes the copies of actual paramaters and and swaps them and after that the formal parameters get destroyed

// void swap(int a,int b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// the below function swaps the actual parameters because it changes the value at actual paramaters and after the function is runned the assigned addresses get destroyed the below one is called the call by reference function 

// void swap(int* a,int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// the below function swaps the values using reference variables because in the below function the arguments in the function brackets points to the address of the parameters so it can directly change them

// void swap(int &a,int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// the below function returns the reference of a

// int & swap(int &a,int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

// the below code block does not work for function which returns reference of a variable

// int swap(int &a,int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

int main(){

    int a = 6,b = 7;

    // cout<<"the sum of "<<a<<"and "<<b<<"is "<<sum(a,b)<<endl;
    // cout<<"the value of variables before swapping is "<<a<<" and "<<b<<endl;

    // swap(a,b);

    // cout<<*('0x61fef0')<<endl;

    // swap(&a,&b) // the beside code line is used to swap the variables passed to it using pointer reference

    // using the below code line you change the return value of the function swap

    // by using functions we can change the variables value the below onw is an example

    // you can understand the below code block which is useful

    // int temp = swap(a,b);
    // 7
    // swap(a,b) = swap(b,a);
    // 7               6
    // swap(b,a) = temp;
    // 6             7

    // cout<<"the value of variables before swapping is "<<a<<" and "<<b<<endl;

    // the below one's are called reference variables in which the a varible points to the address of another variable
    
    return 0;

}