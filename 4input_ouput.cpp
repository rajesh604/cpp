// in the below program we are going to going to about take input from the user and output a value

#include<iostream>

using namespace std;
int main()
{
    int num1,num2;
    // << is called insertion operator
    cout << "enter the num1\n";
    // >> is called extraction operator
    cin >> num1;

    cout << "enter the num2\n";
    cin >> num2;
    cout<<"the sum is " << num1 + num2;

    return 0;
}

// you cannot create a variable using reserved keywords