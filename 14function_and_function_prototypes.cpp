#include<iostream>
using namespace std;


// the below one is a fuction used to perform a chunk of task and keeping it small makes it easy for refactoring and function helps us to perform different tasks with out making code complete

// the below one is a function declaration 

// int mul(int n,int m){
//     int o = n * m;
//     return o;
// }

// suppose the user defines the same function after main then what does the compiler do the compiler returns

// function_and_function_prototypes.cpp:20:62: error: 'mul' was not declared in this scope
// 20 |     cout << "the multiplication of "<<a<<" and "<<b<<" is "<<mul(a,b)<<endl;

// so to not make the code complicated and let the functoin be declared after the main function we use function prototype it is declared as follows

int mul(int a, int b);

// and it also helps the programmer to know the error if the datatypes given in function prototype and the datatypes given in the function does not match then the program returns error it helps the programmer to correct his mistakes

// by writing the above code line the program functions and rather than writing the above code line you can also write
// int mul(int,int);

// but you cannot write the above code block as follows
// int mul();
// nor
// int mul(a,b);

// void hello();

// the same above code line could be executed as following code line which says the compiler that the function is a void function and will take void as parameter so that helps the compiler to prepare for that function and says the compiler to even search after main function function prototype is liked by many users and c also acquainted it due to it's fame

void hello(void);

int main(){
    // the main itself is a function
    int a,b;
    a = 3;
    b = 6;
    cout << "the multiplication of "<<a<<" and "<<b<<" is "<<mul(a,b)<<endl;
    hello();
    // here n and m are actual paremeters
    return 0;
}

// both the formal and actual paremeters can be same

int mul(int a,int b){
    // here n and m are formal parameters
    int o = a * b;
    return o;
}

// and there comes a question whether all function have return value then the answer is no
// there are void function which do not return any value

void hello(){
    cout<<"hello";
}