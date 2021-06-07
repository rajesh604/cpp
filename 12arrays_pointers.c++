#include<iostream>
using namespace std;

int main(){

    // so guys let's learn about arrays which are used to store variables in a contiguouis blocks and help us  from declaring multiple variables
    // the below one is an example of an array which is used to store memory in contiguos blocks
    //  ________ _________ __________
    // |        |         |         |
    // |   98   |   55    |   67    |
    // |        |         |         |
    //  ----------------------------
    // the above one is a array of 3 blocks which can be created using int marks[3] here marks can be of any name it is a variable
    // int marks[3] = {98,55,67}
    // the below code line is used to initialize an array of 5 elements
    // int marks[5] = {98,55,67,98,78};
    // or
    // int marks[] = {98,55,67,98,78};
    // or

    int marks[5];

    marks[0] = 98;
    marks[1] = 55;
    marks[2] = 67;
    marks[3] = 98;
    marks[4] = 78;
    
    // you can also change the values of the array by declaring a value an equating to them 
    // example

    // marks[0] = 25;
    
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    // let's learn about pointers

    // let's know the pointer formula

    // new pointer = old pointer + i * sizeof(datatype)
    //                             |
    //                           number

    int* p = marks;

    // the below code line is used to print the value at address marks
    cout<<"the value of marks[0] is "<<*p<<endl;

    // the below code line is used to print the value at new address which is the next element after first element
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;

    // the below code line is used to print the value at new address which is the second element after first element
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;

    // the below code line is used to print the value at new address which is the third element after first element
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;
    
    // the below code line is used to print the value at new address which is the fourth element after first element
    cout<<"the value of marks[4] is "<<*(p+4)<<endl;

    // so rather than doing the above thing you can also do the follwing thing
    // print the value at address p

    // cout<<*p<<endl;

    // the print function prints the value at address p and then increments the address by four bytes

    // cout<<*(p++)<<endl;

    // the print function prints the value at new address

    // cout<<*p<<endl;

    //  you can execute the above program using for loop too

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<*(p+i)<<endl;
    // }
    
    return 0;
}