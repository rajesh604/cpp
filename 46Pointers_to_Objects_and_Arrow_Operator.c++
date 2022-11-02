#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};

int main(){

    // Complex c;
    // c.setData(1,54)  ;
    // c.getData();

    // Complex *ptr = &c;
    // (*ptr).setData(1,54);
    // (*ptr).getData();

    // Complex *ptr = new Complex;
    // (*ptr).setData(1,54);
    // (*ptr).getData();

    // the same above code block can be executed using arrow operator as 

    // Complex *ptr = new Complex;
    // (*ptr).setData(1,54);
    // ptr->setData(1,54);
    // ptr->getData();

    // (*ptr).setData(1,54);
    // the same above code line can be executed using the arrow operator as the below code line
    // ptr->setData(1,54);
    
    // the below code line is used to point a pointer to 3 objects and used to create objects at different locations and access them using ptr pointer by incrementing it's address by one

    Complex *ptr = new Complex[3];

    ptr->setData(1,54);
    ptr->getData();

    (ptr+1)->setData(1,4);
    (ptr+1)->getData();

    (ptr+2)->setData(1,5);
    (ptr+2)->getData();

    // you can get more information in the next program

    return 0;
}