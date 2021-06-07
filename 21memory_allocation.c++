#include<iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop :: setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void) {

    for (int i = 0; i <counter; i++) {
        cout<<"sir the price of item of item id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;

    }
}

int main()
{

    // suppose there is a class of a wedding_function and that classe has a funciton water_dispeneser and let's see the people who are arriving to the function as objects so each one has different name and age but each one of them uses water_dispeneser. it means that all objects has common water_dispenser function so what does the compiler do does it store water_dispenser function for all objects? no it does not what it does is it stores water_dispenser function one time and let all the object use it. you can assume the objects memory as follows.

    // +++++++++++++++++++++++++++++++++++++++++++++
    // |   obj1   |   obj2   |   obj3  |    obj4   |
    // |   name1  |   name2  |  name3  |   name4   |
    // |   age1   |    age2  |   age3  |    age4   |
    // +++++++++++++++++++++++++++++++++++++++++++++
    // | |  |    / \  =====  |+++++++  |+++++|     |
    // | |  |   / __\   |    |+++++++  |+++++|     |
    // | |/\|   |   |   |    |+++++++  |\          |
    // +++++++++++++++++++++++++++++++++++++++++++++

    Shop rajesh;
    rajesh.initCounter();
    for (int i = 0; i < 3; i++){
        rajesh.setPrice();
    }
    rajesh.displayPrice();
    return 0;
}