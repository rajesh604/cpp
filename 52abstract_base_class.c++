#include<iostream>
using namespace std;

// this program is about abstract base class so what is abstract base class it is like a skeleton which is built to be inherited and it has abstract functions or pure virtual functions that compulsory need to overridden so with no delay let's take an example 

class signup{
    protected:
        string name;
        string gmail;
        int phonenumber;
    public:
        // the below one is a pure virtual function which needs to be compulsory executed and override the below function else the compiler raises an exception
        virtual void setdetails(string name,string gmail,int phonenumber)=0;
        };

class name:public signup{
    protected:
        string name;
        string gmail;
        int phonenumber;
    public:

        void setdetails(string name,string gmail,int phonenumber){
            // this function is used to indicate the class variables
            this->name = name;
            this->gmail = gmail;
            this->phonenumber = phonenumber;
        }

        void display(){
            cout<<"the name of the person is "<<name<<endl;
            cout<<"the gmail address is "<<gmail<<endl;
            cout<<"the phonenumber of the person is "<<phonenumber<<endl;
            cout<<"you are succesfully signed"<<endl;
        }
};

int main(){
    name rajesh;
    rajesh.setdetails("rajesh","kanuguraj@gmail.com",58375775);
    rajesh.display();
    return 0;
}