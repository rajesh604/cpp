// hello in this program we are going to learn about constructors so what is constructors constructors are a type of subroutine  which sets the values of the objects.

// construtors are called automatically when the program is executed and you don't need to call functions like you do in the previous programs

#include<iostream>
using namespace std;

class setter{

    int a,b;
    public:

        setter(void); // the beside constructor prototype constructors should be given the name of the class

        void printn(){
            cout<<"the addition of numbers a and b is "<<a<<endl;
        }

};

// the below one is the constructor declaration

setter :: setter(void){ // --> the beside is a default constructor as it takes no arguments and if no arguments are given the compiler allocates default values

    a = 10;
    b = 20;

}

int main(){

    setter x,y;

    x.printn();
    y.printn();

    return 0;
}

// in constructors you can also assign default values