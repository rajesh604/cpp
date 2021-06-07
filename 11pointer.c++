#include<iostream>
using namespace std;

int main(){

    int a=6;

    // int *b = &a;
    // you can also execute the above code line as below:

    int* b = &a;

    // you can also execute the above code line as below:
    // the below code line shows the initiation of a pointer
    // int* b;
    // int* b;
    // assigning address to pointer b
    // b = &a;

    // you cannot initiate the pointer in this below two code lines way

    // int b;
    // b = &a;

    // it shows below error

    //     11pointer.c++:18:9: error: invalid conversion from 'int*' to 'int' [-fpermissive]
    //    18 |     b = &a;
    //       |         ^~
    //       |         |
    //       |         int*

    // & -----> (address of) operator
    // the below code lines are used to print the address of a

    // cout<<b<<endl;
    // cout<<&a<<endl;

    // * ------------> (value at) Dereference operator
    // the below code lines are used to print the value at address a
    // dereference operator is used to know the value at a particular address

    // cout<<*b<<endl;
    // cout<<*(&a)<<endl;

    // let's learn pointer to pointer here c is a pointer to a pointer it points a pointer b and which itself points to a

    int** c = &b;

    // c = 0x61ff04
    //   *c = *(&b)
    // **c = *(*(&b))
    // the above code is nearly executed as follows
    // **c = *(&a)
    // **c = 6

    // you can understand the pointers concept by a analogy let's assume that rohan,kiran,mahesh are friends they are staying in a hotel and each of them are given a room rohan has a apple and kiran has the address of rohan he wrote it in a paper and kept it in his room and mahesh has the address of rohan and mahes suddernly got a desire to eat an apple but he doesnot know the address of kiran but he has the address of rohan and he know's that rohan has the address of kiran so he goes to rohan using his address and he aska rohan to give tha address of kiran and rohan gives it and with that address he approches to kiran and asks his apple and kiran gives int
    // here in the story mahesh has address of rohan you see it has int** c = &b; in which address of b is assigned to c int pointer and mahesh goes and asks rohan the address of kiran you can see it has that mahesh is asking rohan value that is kiran's address *(&b) and he takes that value that is &a and goes to kiran and asks his value that is apple and you can see it has 6.

    // the below are some codelines using which you might understand what are pointers
    
//  ________________________                ___________________________                 _________________________
// |                        |              |                           |               |                         |       
// |                        |              |                           |               |                         |       
// |    the value of c is   |              |     the value of a is     |               |   the value of a if     |      
// |        0x61ff04        |  pointer of b|          0x61ff08         |  pointer of a |            6            |      
// |                        | <----------- |                           | <-----------  |   the address of a is   |      
// |                        |              |     the address of b is   |               |        0x61ff08         |      
// |                        |              |        0x61ff04           |               |                         |      
// |                        |              |                           |               |                         |      
// |                        |              |                           |               |                         |
//  ------------------------                ---------------------------                 ------------------------- 
//          c                                           b                                           a

//  so when you execute **c according to my knowledge it does this *(*(c)) = *(*(&b)) as c = &b = *(*(&b)) now it is asking the value at address b as you know * is a dereference operator so it is asking its value so from the above diagram we can see that the value at &b is &a = *(&a) and know the code is demanding the value at address a so from the above diagram we can see that the value at address a is 6 = 6

    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<*(&b)<<endl;
    cout<<"the address of b is "<< c <<endl;
    cout<<"the value at c is "<< *c <<endl;
    cout<<"the value at(value of (c))  is "<< **c <<endl;

    return 0;
}