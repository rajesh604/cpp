#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 56;
    int* p = &a;
    cout<<"the value at address a is "<<*p<<endl;
    cout<<"the value at address a is "<<*(&a)<<endl;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<p<<endl;

    // the new operator is used for dynamic memory allocation and delete is used to delete the dynamic memory

    int* pr = new int(60);
    cout<<"the value at address p is "<<*pr<<endl;

    int* arr = new int[5];
    arr[0] = 0;
    // arr[1] = 1;
    // the above one can be declared as follows
    *(arr+1) = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    delete[] arr;
    cout<<"the value at address arr[0] is "<<arr[0]<<endl;
    cout<<"the value at address arr[1] is "<<arr[1]<<endl;
    cout<<"the value at address arr[2] is "<<arr[2]<<endl;
    cout<<"the value at address arr[3] is "<<arr[3]<<endl;
    cout<<"the value at address arr[4] is "<<arr[4]<<endl;

    return 0;
}