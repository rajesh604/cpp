
#include<iostream>
using namespace std;

class Y;

class X{
    int num;
    public:
        void setvalue(int value){
            num = value;
        }
    friend void print(X,Y);
};

class Y{
    int data;
    public:
        void setvalue(int value){
            data = value;
        }
    friend void print(X,Y);
};

void print(X o1,Y o2){
    cout<<"the sum of the X and Y is "<<o1.num + o2.data<<endl;
}
int main(){

    X a;
    a.setvalue(2);
    Y b;
    b.setvalue(3);

    print(a,b);
    return 0;
}