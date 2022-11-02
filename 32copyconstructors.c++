#include<iostream>
using namespace std;

class number{
    int a;
    public:

        // the below one is the default constructor

        number(){
            a = 0;
        }

        number(int number){
            a = number;
        }

        // the below one is the copy constructor

        number(number &obj){
            cout<<" copy constructor is called "<<endl;
            a = obj.a;
        }

        void display(void){
            cout<<"sir the value of the object is "<<a<<endl;
        }

};

int main(){

    // you can assign the values to the objects using the following code line

    number x,y(45),z;
    x.display();
    y.display();

    // the below code line calls the copy constructor sir though the copy constructor is not defined the below code line runs because the compiler passes the copy constructor on it's own

    number z1 = y;
    z1.display();
    // sir the below code line does not call the copy constructor because the below obj z is already initialized so in the below code line we only assign the value y to z
    z = y;
    return 0;

}