#include <iostream>
using namespace std;
int main()

{

    /*LOOPS IN C++
    1.for loop
    2.while loop
    3. do-whlie loop
    */

    //    the below one is a loop in c++

    // example of finite loop
    // basic syntax of for loop in c++

    // first the initialization takes place and it takes place only once in the eniter process of for loop and after that the condition is checked if the condition is true then the code is runned and then the control goes to updation and  then the control goes to condition and it goes on until the condition is false

    // for(initialization;condition;updation)
    // {
    //     code body()
    // }

    // for (int i = 1; i < 3; i++)
    
    // {
    //     cout<<i<<endl;
    // }

    // EXAMPLE OF INFINITE LOOP

    // for (int i = 0; i < 15<=40; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    /*while loop in c++
    syntax

    while(condition){
        statement
         }
        */
    // finite while loop

    int i = 0;

    // while (i<40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // infinite while loop

    // the below loop runs because condition is itself true

    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    /*do while loop
        syntax
        do{
            c++ statement;
        }while(condition);
    */

    // do while loop is a type of while loop which first execute the statement and then checks the condition and whatever the condition might the do while loop executes the statement at least once the proof is below block of code

    // do
    // {
    //     cout<<i<<endl;
    //     i++;

    // } while (false);

    // FINITE DO-WHILE LOOP

    // do
    // {
    //     cout<<i<<endl;
    //     i++;

    // } while (i<=50);
    
    // INIFINITE DO-WHILE LOOP

    // do
    // {
    //     cout<<i<<endl;
    //     i++;

    // } while (true);

    //  return 0;

    // caution do not leave a lnfinite loop else it may crash or slow down your computer performance.
}
