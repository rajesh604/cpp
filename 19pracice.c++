#include<iostream>
using namespace std;

// the below code line is used to initiate a class

class businessman{
    // the below code line is used to initiate a private modifier
    private:
        long double net_worth;
        int no_of_houses;
    // the below code line is used to initiate a public modifier
    public:
        // initiating a string which is used to store strings
        string name;
        string profession;
        string village;
        int no_of_companies;
        void setdata(long double a1,int a2);
        void getdata(){
            cout<<"the name of the businessman is "<<name<<endl;
            cout<<"the profession of the businessman is "<<profession<<endl;
            cout<<"the village of the businessman is "<<village<<endl;
            cout<<"the no_of_companies of the businessman is "<<no_of_companies<<endl;
            cout<<"the net_worth of the businessman is "<<net_worth<<endl;
            cout<<"the no_of_houses of the businessman is "<<no_of_houses<<endl;
        }
};
// initiating a function which is related to class businessman
void businessman :: setdata(long double a1,int a2){
    net_worth = a1;
    no_of_houses = a2;
}

int main(){
    businessman rajesh;

    // rajesh.net_worth = 35; -- > the beside code line does not work because the variable is initiated in a private modifier

    rajesh.name = {"vijay"};
    rajesh.profession = {"profession"};
    rajesh.village = {"wangapally"};
    rajesh.no_of_companies = 35;
    rajesh.setdata(1.189e+49,500);
    rajesh.getdata();
    
    return 0;
}