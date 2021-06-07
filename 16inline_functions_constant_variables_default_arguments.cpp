#include<iostream>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

// in the above libraries i have imported some to calculate the time

// the below one is a function used to return the money received by the person after one year

// the below one is a function which contains a default value which when passed overwrited the default value and if not passed then the default value is passed

// inline is a function which replaces the function call and places the return statment ove there so that all the execution protocal like when the function is called the actual values are copied to fomal parameters and then the formal parameters go under executions and then the value is returned and that value is passed to the place where the function is called.inline reduces all this protocal and tries to reduce time and there is also disadvantages of inline function it is that if you cannot use inline for larger funcitons if it applied there then when ever the function is called then it takes more space to run and may eventually slow down ther program 

// i have measured the time several times but i could not find any differences both the inline as well as int are showing same time sometimes int is showing more speed performance and sometimes inline 

// inline int money(int money,float intrestrate=2.4){
//     return money*intrestrate;
// }

// int money(int money,float intrestrate=2.4){
//     return money*intrestrate;
// }

int bankmoney(int deposit){
    // static function is a type of functin that is executed only one time from next this value is not executed

    static int money_alreday = 100000;

    money_alreday = money_alreday + deposit; // and static value is alway retained 

    return money_alreday;
}

// now let's learn what are constant arguments
// the below function changes the value of pointer passed to it

// void pointer_address(int* address){
//     *address = *address + 1;
//     }

// the below function does not allow the user to chnage the pointer value because he has declared const it means that the assigned pointer is a constant and cannot be changed

// void pointer_address(const int* address){
//     *address = *address + 1;
//     }

int main(){
    int a;

    // cout<<"sir please enter the money in bank ";cin>>a;

    // cout<<"sir please enter your intrest rate ";cin>> b;

    // auto start = high_resolution_clock::now();

    // cout<<"sir your money combined with intrest rate is "<<money(a)<<endl;

    // cout<<"sir your money combined with intrest rate is "<<money(a)<<endl;
    // cout<<"sir your money combined with intrest rate is "<<money(a)<<endl;
    // cout<<"sir your money combined with intrest rate is "<<money(a)<<endl;
    // cout<<"sir your money combined with intrest rate is "<<money(a)<<endl;
    // auto stop = high_resolution_clock::now();

    // auto duration = duration_cast<microseconds>(stop - start);
  
    // cout << "Time taken by function: "
    //      << duration.count() << " microseconds" << endl;
    
    // int deposit = 100000;

    // cout<<"your bank balance is " << bankmoney(deposit)<<endl;
    
    // cout<<"your bank balance is " << bankmoney(deposit)<<endl;

    // cout<<"your bank balance is " << bankmoney(deposit)<<endl;

    int* p;

    int array[]  = {1,2,14,4,5};
    p = array;

    return 0;
}