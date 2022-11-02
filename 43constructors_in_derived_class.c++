// hello this program is about how constructors are derived in base class

#include <iostream>
using namespace std;

// initiating class data1

class data1
{
protected: // ---> the beside modifier is options you can even declare them in private
    int data;

public:
    // initiating the constructor
    data1(int a)
    {
        data = a;
    }
    void get_data1()
    {
        cout << "sir the value of data is " << data << endl;
    }
};

// initiating class data2

class data2
{
protected: // ---> the beside modifier is options
    int data0;

public:
    // initiating the constructor
    data2(int a)
    {
        data0 = a;
    }

    void get_data2()
    {
        cout << "sir the value of data0 is " << data0<< endl;
    }
};

// initiating a class derived from data1 and data2 throught multiple inheritance

class derived : public data1, public data2
{
protected: // ---> the beside modifier is options
    int data3, data4;

public:

    // initiating the constructor

    derived(int a, int b, int c, int d) : data1(a), data2(b)
    {
        data3 = c;
        data4 = d;
    }
    void display()
    {
        get_data1();
        get_data2();
        cout << "the value of the data3 is " << data3 << endl;
        cout << "the value of the data4 is " << data4 << endl;
    }
};

int main()
{
    derived rajesh(1, 2, 3, 4);
    rajesh.display();
    return 0;
}