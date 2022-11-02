#include<iostream>
using namespace std;

// hello gusy in this we are going to learn about single inheritance concepts using some real life examples like data scientist and data analyst

class Dataanalyst{
    int salary;
    public:
        string work;
        string whathedoes;
        void setdata();
        int getdata();
};

class DataScientist : public Dataanalyst{
    int salarys;
    public:
        string extrawhathedoes;
        void process();
        void display();

};

void Dataanalyst :: setdata(){
    work = "data";
    whathedoes = "exploratorydataanalysis";
    salary = 58470;
}

int Dataanalyst :: getdata(){
    return salary;
}

void DataScientist :: process(){
    extrawhathedoes = "modelcreation";
    salarys = 2 * getdata();
}

void DataScientist :: display(){
    cout<<"the work of the DataScientis and Dataanalyst is with "<<work<<endl;
    cout<<"the data analyst do "<<whathedoes<<endl;
    cout<<"the data scientis do "<<whathedoes<<" "<<extrawhathedoes<<endl;
    cout<<"the data analyst get salary "<<getdata()<<endl;
    cout<<"the data scientist get salary "<<salarys<<endl;
}

int main(){
    DataScientist vijay;
    vijay.setdata();
    vijay.process();
    vijay.display();
    return 0;
}