#include<iostream>
using namespace std;

class businessman{

    int networth;
    public:
        string name;
        int age;
        void setdetails(void){
            // the below code sets the networth of the businessman same
            networth = 100000;
            cout<<"sir please enter the name of the businessman"<<endl;
            cin>>name;
            cout<<"sir please enter the age of the businessman"<<endl;
            cin>>age;

        }
        void getdetails(void){
            cout<<"sir the name of the businessman is "<<name<<endl;
            cout<<"sir the age of the businessman is "<<age<<endl;
        }
        
};

int main(){
    int i;
    cout<<"sir for how many businessman you want to enter the data"<<endl;
    cin>>i;
    // creating objects using an array we generally create such type of objects using array when there are lots of member to input the data
    businessman var[i];

    // the below one is the loop which runs the object function j times for each value of index of array increamenting over loop.
    for (int j = 0; j < i; j++){
        var[j].setdetails();
    }

    cout<<endl;

    // the below one is the loop which prints the object details j times for each value of index of array increamenting over loop.
    for (int j = 0; j < i; j++){
        var[j].getdetails();
    }
    return 0;
}