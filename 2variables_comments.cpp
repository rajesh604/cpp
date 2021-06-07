#include<iostream>
// the below one is used to say to the program that the functions given as input in the program belong to std namespace or else you can also mention std before every function you use from the iostream
using namespace std;
// the below one is a basic c++ program
int main(){
    // the below code line is used to create a variable
    int sum=6;
    // the below code line is used to print the statement after << 
    // if you do not use using namespace std; you need to type the below code line
    // std::cout << "hello world"<< sum;
    cout << "hello world"<< sum;
    // the below code line is used to return 0 if 0 is returned then it indicates succesfull termination program
    return 0;
}

