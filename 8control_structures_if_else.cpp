#include<iostream>
using namespace std;
int main()
{
    // the below are the conditions according which the c++ program works

    // SEQUENCE STRUCTURES
    //          |
    //        _____
    //       |ENTRY|
    //       ```|````
    //        _______
    //       |ACTION1|
    //       ```|````
    //        _______
    //       |ACTION2|
    //       ```|````
    //         EXIT
    //  the above is a way in which the program is executed

    // SELECTION STRUCTURES
    //                    |
    //                   / \
    //                  /CON\
    //                  \   /
    //      ------------ \ / ----------------
    //      |                               |
    //      |                               |
    //    ACTION1                         ACTION2
    //      |                                |
    //      |                                |
    //       ---------------- ---------------
    //                       |
    //                     EXIT
    // the above one is a  seleciton structures according the program execution structure depends on the condition if the condition is true one structure is executed if false another structure is executed
    //                                LOOP STRUCTURES
    //                                       |          LOOP 
    //                                     ENTRY  <-----------------
    //                                        |                     |
    //                                       / \                    |
    //                                      /CON\                   |
    //                                      \   /      TRUE         |
    //                                       \ / ----------------ACTION1
    //                                        |
    //                                        |
    //                                     ACTION2
    //                                        |
    //                                        |
    //                                       EXIT

    // the above one is a loop structure if the condition is met then the program go on running until program's condition is false

    // the above one are modelled through if-else statement
    // if-else ladder
    // switch case

    // let's implement if else
    // the below one is a type of selection structures example

    // int age;

    // cout<< "enter your age"<<endl;
    // cin>>age;

    // if ((age>=19) && (age<=25)){
    //     cout<<"your are an adult"<<endl;
    // }

    // else if(age<=18){
    //     cout<<"you are an child"<<endl;
    // }

    // else
    // {
    //     cout<<"you are an citizen"<<endl;
    // }
    //  

    // the below one is a type of selection structure is executed in switch case
    int age;

    cout<< "enter your age"<<endl;
    cin>>age;

    switch (age)
    {

    // if the case is 18 then the code below it get executed and break statement says the compiler to get out of the switch case and if the break is not applied and any case is met then the following cases may get executed

    case 18:
        cout<<"you are 18"<<endl;
        // break;

    case 20:
        cout<<"you are 20"<<endl;
        // break;

    case 25:
        cout<<"you are 25"<<endl;
        // break;
    
    default:
        cout<<"no special cases"<<endl;
        break;
    }

    cout<<"we are done with switch cases"<<endl;
    return 0;
    
}
