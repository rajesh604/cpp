#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:

        void setdetails(int v,int s){
            a = v;
            b = s;
        }
        // the below one is the friend function used to give permission to some external function to access it's private members you can initiate friend function in any place either public or private.
        friend complex sumofvaribles(complex o1,complex o2);

        void printdetails(void){
            cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

// the below one is the function used to get the sum of the complex numbers given as input into this function.like public member you cannot access the private members directly by their name you need to specify object.function_name(or)any other thing
complex sumofvaribles(complex o1,complex o2){
    complex o3;
    o3.setdetails((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){

    complex c1,c2,sum;

    c1.setdetails(1,4);
    c1.printdetails();

    c2.setdetails(3,6);
    c2.printdetails();

    sum = sumofvaribles(c1,c2);
    sum.printdetails();
    return 0;
}