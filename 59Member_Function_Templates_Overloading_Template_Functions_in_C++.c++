#include<iostream>
using namespace std;
// this program is about member function initialization and overlaoding functions using templates
template <class T>

class program{
    public:
        T data;
        // initializing a contructor
        program(T a){
            data = a;
        }
        void display();
};

// declaring the display function in the program class
template <class T>
void program<T> :: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"the value of the funciton is "<<a<<endl;
}

template<class T>

void func(T a){
    cout<<"the value of the template funciton is "<<a<<endl;
}

int main(){

    // program<int> t(5);
    // t.display();

    program<string> t("javascript");
    t.display();
    cout<<"the value of the function is "<<t.data<<endl;

    // the below code lines is used for functino overloading
    func(5);
    // for the below code lines the int a funcition does not run because it's parameters are of type int and our arguments are of type float so the template functions are executed whose parametes type can be changed
    func<float>(2.5);
    func(2.5);
    return 0;
}