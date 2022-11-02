#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id = a;
            price = b;
        }

        void display(){
            cout<<"the id of the item is "<<id<<endl;
            cout<<"the price of the item is "<<price<<endl;
        }
};

int main(){
    int size = 3;
    int i;
    // the below code line is used to point a pointer to 3 different objects
    // the below code line is used to create a dynamic memory the size = sizeofint*35
    // int *pts = new int [35];
    Shop *ptr = new Shop [size];
    // copying the address of ptr to pointer ptrs
    Shop *ptrs = ptr;
    int p,q;

    // the below for loop is used to assign values to different objects

    for (i = 0; i < size; i++)
    {
        cout<<"sir please enter the id of the item "<<i+1<<endl;
        cin>>p;
        cout<<"sir please enter the price of the item "<<i+1<<endl;
        cin>>q;
        // (ptr+i)->setData(p,q);
        // you can use the above code line or use the below two code lines
        ptr->setData(p,q);
        // the below code line is used to increment the address of the pointer to next object
        ptr++;
    }
    
    // the below for loop is used to display the assigned value

    for (i = 0; i < size; i++)
    {
        cout<<"for item "<<i+1<<endl;
        // (ptrs+i)->display();
        // you can use the above code line or use the below two code lines
        ptrs->display();
        ptrs++;
    }
    
    return 0;
}