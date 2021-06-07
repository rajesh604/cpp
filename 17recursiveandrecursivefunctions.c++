#include<iostream>
using namespace std;

// in this we are going go to know about recursions.So what are recursions recursion is calling of a particular function over and over until we get the desired output 

// the below one is a function used to calculate the factorial of a given number

// so what is a factorial. it is a product of a number and the numbers before it till 1

// and there is a exception in factorial that factorial of 0 is 1 and factorial of 1 is 1

int factorial(int n){
    if(n<2){
        return 1;
    }
    return n * factorial(n-1);
}

// the above code block executes as follows let input = 6 when the function is executed then the value given as return is given as output.

// 6 * factorial(5)
// 6 * 5 * factorial(4)
// 6 * 5 * 4 *factorial(3)
// 6 * 5 * 4 * 3 *factorial(2)
// 6 * 5 * 4 * 3 * 2 *factorial(1)
// 6 * 5 * 4 * 3 * 2 * 1 

// the above code can also be executed using iterative approach so let's do it

int factorial_iter(int n){
    int number = 1;
    for (int i = n; i > 0; i--)
    {
        number = number*i;
    }
    return number;
}

// the above is the finding of a factorial using iterative approach
// so let's check how it works for input = 5

// here in this program the we initiate a variable equated to 1
// and we run a for loop initiating i to 5 and telling the for loop to run until i>0 and at each completion of loop decrement the value of i by 1
// when inside the loop the statement's start executing
// number = number*i
// number = 1*5
// now the number value is 5
// loop runs again for i = 4
// number = 5 * 4
// loop runs again for i = 3
// number = 20 * 3
// loop runs again for i = 2
// number = 60 * 2
// loop runs again for i = 1
// number = 120 * 1
// loop stops because i = 0 and the condition i>0 is not met
// and finally we retuen number

// the below one is a function used to calculate the fibonacci of a given index the below one is the fibonacci series

// 1,1,2,3,5,8,13,21,34,55

// in the above series a number is the sum of the predecessor and the predecessor of beside predecessor of a given number
// we can reduce the above statement to a algorithm element at index x = element at index (x-1) + element at index (x-2)
// in the below function we take the index of the number for which the user wants the fiboannci number

int fibonacci(int n){

    if(n<2){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

// in the below code block we are going to give a fibonacci number of index n using iterative approach

int fibonacci_iter(int n){
    
    int number = 0;
    number = (n-1) + (n-2);
    return number;

}

// the above code is executed as follows suppose the input is 5

// fibonacci(5-1) + fibonacci(5-2)
// in the below code line since there is no value available to fibonacci(4) and fibonacci(3) they call the function fibonacci(4) and fibonacci(3)
// fibonacci(4) + fibonacci(3)
// fibonacci(3) + fibonacci(2) + fibonacci(2) + fibonacci(1)
// fibonacci(2) + fibonacci(1) + fibonacci(1) + fibonacci(0) + fibonacci(1) + fibonacci(0) + fibonacci(1)
// we can see in the above code line that some number give fibonacci input as 1 and 0 and we have gave a condition in fibonacci function that if fibonacci as an input which is lesser than 2 then it returns 1 as output
// so the above code line reduces to fibonacci(2) + 1 + 1 + 1 + 1 + 1 + 1
// fibonacci(1) + fibonacci(0) + 6
// 1 + 1 + 6
// 8
// so the fibonacci at index 5 is 8

int main(){

    // factorial of a number

    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    // cout<<"the factorial of the number "<<a<<" is "<<factorial_iter(a)<<endl;
    cout<<"the factorial of the number "<<a<<" is "<<fibonacci_iter(a)<<endl;
    return 0;
}