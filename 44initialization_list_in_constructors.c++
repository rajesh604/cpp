
// hello this program is about initializing a constructor in a different way this methods is used when constructor body becomes complex

#include<iostream>
using namespace std;
/*
syntax for initialization list

constructor(argument):initialization-section{
    assignment+other
}

*/

class data{
    int i,j;
    // int j,i;
    public:
        // you can execute the constructor even in this form
        // data(int a,int b):i(a),j(b)
        // data(int a,int b):i(a),j(a+b)
        // data(int a,int b):i(a),j(i+b)
        // data(int a,int b):i(a),j(5+b)
        // data(int a,int b):i(a + j),j(5+b) --> by executing the beside code line the i returns garbage value because in the initialization itself we have not initialized j before initializing it to i
        // data(int a,int b):i(a + j),j(5+b)
        // data(int a,int b):j(b),i(a) -->the beside code is executed without no error
        // data(int a,int b):j(b),i(a+j)// --> by executing the beside code line i returns garbage value because in the initialization of the variables i and j we have first initialized i and then j due to this in the above initialization section we have first declare i and then j else i returns garbage value but if you have initialized j then i in the private modifier range then the above code line works
        // you can also execute the constructors in the below way
        
        data(int a,int b):i(a)
        {
            j = b;
            cout<<"the value of i is "<<i<<endl;
            cout<<"the value of j is "<<j<<endl;
        }
};

int main(){
    data r(1,2);
    return 0;
}