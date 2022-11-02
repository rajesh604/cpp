#include<iostream>
using namespace std;

// destructor never takes an argument not returns it

class loan{
    // initiating a static variable
    static int count;
    public:

        loan(){
            count++;
            cout<<" sir "<<count<<" you have assigned loan"<<endl;
        }

        // the below one is a destructor which is passed only when the constructor of the object is destroyed

        ~loan(){
            cout<<" sir "<<count<<" you have payed the loan"<<endl;
            count--;
        }

};

// the below code line is used to assign 0 to count variable

int loan::count = 0;

int main(){

    cout<<"sir entering the bank"<<endl;
    loan n1;

    {
        cout<<"sir entering the bank"<<endl;
        loan n2;
        cout<<"sir entering the bank"<<endl;
        loan n3;
    }

    return 0;
}