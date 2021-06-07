// you can also execute the code in the 25classfunction in the below way both are right

#include<iostream>
// the below codeline reduces our effort we put in the program
using namespace std;

// the below code line says to the compiler that the class business exists in the program you can go before and check it

class businesslistprint;

// initiating a class
class business{

    int a,b;

    // friend int businesslistprint :: additionreal(business ,business);
    // friend int businesslistprint :: additioncomp(business ,business);
    // the below code lines empowers the businesslistprint class to access the members of business  class

    friend businesslistprint;

    public:
        // the below code line is used to assign values to the object business

        void assigning(int v1,int v2){
            a = v1;
            b = v2;
        }

};

class businesslistprint{

    public:

        // funciton declaration
        int additionreal(business o1,business o2);

        int additioncomp(business,business);

};


// function declaration
int businesslistprint :: additionreal(business o1,business o2){
    return(o1.a + o2.a);
}

// function declaration
int businesslistprint :: additioncomp(business o1,business o2){
    return(o1.b + o2.b);
}

int main(){
    // let's code
    business hello,vijay;

    hello.assigning(1,7);

    vijay.assigning(9,8);

    businesslistprint sum;

    int rp = sum.additionreal(hello,vijay);
    int pr = sum.additioncomp(hello,vijay);
    
    // cout<<"the addition of the real number of hello and vijay is "<<rp<<endl;
    cout<<"the addition of real number of hello and vijay is "<<rp<<endl;
    cout<<"the addition of complex part of hello and vijay is "<<pr<<endl;

    return 0;
}