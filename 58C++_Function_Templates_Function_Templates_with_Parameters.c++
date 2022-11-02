#include<iostream>
using namespace std;

// templates can be used in functions the following examples can demonstrate it for you
template<class T,class T1>

T func(T a,T1 b){
    T avg = (a + b)/2;
    return avg;
}

// the below one is the code block used to swap the values passed to it

template<class T>

void swapp(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    func <float,float>;

    int x = 5;
    int y = 6;

    cout<<"the value of the func is "<<func(5,4)<<endl;

    swapp<float>

    ;swapp(x,y);

    cout<<x<<endl<<y;
    return 0;
}