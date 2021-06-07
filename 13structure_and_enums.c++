#include<iostream>
using namespace std;

// struct is a type of data type which is used to create an variable which can store multiple datatypes

typedef struct business_man
{
    long double donations;
    char letter;
    long double net_worth;
} bm;

union money
{

    int honey;
    char object;
    float water_service;

};

int main(){

    struct business_man rajesh;

    // rajesh.donations = 120000000000000000;
    // rajesh.letter = 'r';
    // rajesh.net_worth = 120000000000000000;

    // cout<<"the value is "<<rajesh.donations<<endl;
    // cout<<"the value is "<<rajesh.letter<<endl;
    // cout<<"the value is "<<rajesh.net_worth<<endl;

    // struct business_man vijay;
    // rather than writing the above code you can also write the below code line 

    // bm vijay;

    // vijay.donations = 120000000000000000;
    // vijay.letter = 'v';
    // vijay.net_worth = 20000000000000000;

    // cout<<"the value is "<<vijay.donations<<endl;
    // cout<<"the value is "<<vijay.letter<<endl; 
    // cout<<"the value is "<<vijay.net_worth<<endl;

    // typdef is one of the features using which you can just use the an element instread of writing struct variable_name

    // union is a type of datatype which allows the user to declare only one assignement to it's variable the user can only declare value to only variable at a time and could only use that if he declares a new variable then the previos declaration is erased and if you try to print that value you will get an garbage value so with no further delya let's start our programming

    // union money rupees;

    // rupees.honey = 500;

    // rupees.object = 'v';
    // rupees.water_service = 20;

    // cout<<"the value is "<<rupees.honey;

    // cout<<"\nthe value is "<<rupees.object;
    // cout<<"\nthe value is "<<rupees.water_service;

    // in the above one you can only declare one at a time else you will get garbage values as output
    // the variables given in union datatype it takes the memory of largest datatypes assigned to it and tries to satisfy the requirements of the datatype using that memory and this is one of the way it is used for memory management

    // enum function

    enum Meal{ breakfast,lunch,dinner};

    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    Meal m1 = breakfast;

    cout<<(m1==1)<<endl;
    cout<<(m1==0)<<endl;

    // if m1==1 then it returns 1 else it returns 0 here 1 stands for true and 0 stands for false
    // enum is a function used to improve readebility of a program  it assigns variables values to zero and other numbers
    
    return 0;
}