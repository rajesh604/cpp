
// hello in this program we are going to learn about function overloading so what is function overloading funciton overloading is the ability to create multiple function with the same name but with different implications let's learn the examples below

#include<iostream>
using namespace std;
class complex{

    int x,y;

    public:

        complex(){
            x = 0;
            y = 0;
        }

        complex(int r){
            x = r;
            y = 0;
        }

        complex(int r,int t){
            x = r;
            y = t;
        }

        void printthings(){
            cout<<x<<" + "<<y<<"i"<<endl;
        }
};

int main(){
    
    // you can see in the below programs that we have created different objects and gave different inputs with that objects and gave 1 input in c1 object and gave no input in c2 object but all the function have worked currectly and the program executed with no maximum effor but how is that possible it is possible due to function overloading in which the compiler checks what function to print by seeing the inputs even the funciton names are same

    complex c(1,5),c1(1),c2;
    c.printthings();
    c1.printthings();
    c2.printthings();
    return 0;
}