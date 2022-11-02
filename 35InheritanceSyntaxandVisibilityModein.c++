#include<iostream>
using namespace std;

// hello sir in this we are going to learn about inheritance and in this particular program we are going to learn about single inheritance and visibilti 

class Dataanalyst
{
    public:
        string name;
        string work;
        string workingtype;
        string qualification;
        string mathskill;
        int salary;

        Dataanalyst(string names,string datas,string works,string study,string mathskills,int sal){

            name = names;
            work = datas;
            workingtype = works;
            qualification = study;
            mathskill = mathskills;
            salary = sal;

        }

        Dataanalyst(){}

};

// the below code line is used to initialize a class DataScientist and which is derived from Dataanalyst
// you can see in the below code line that we have declared something before Dataanalyst which is the visibility mode if it is set private then the inherited base class public members turn into private members in the derived class
// you can also declare public which means it keeps the public member of the base class as public members in the derived class
// but remember that private members of the base class are never derived into the derived class.

/*
the basic syntax of the derived class is

{{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/members and others
}

*/

class DataScientist :private Dataanalyst
{   
    public :

        DataScientist(string names,string datas,string works,string study,string mathskills,int sal){
            name = names;
            work = datas;
            workingtype = works;
            qualification = study;
            mathskill = mathskills;
            salary = sal;
        }

        void display(){
                cout<<"the name of the person is "<<name<<endl;
                cout<<"the person works with "<<work<<endl;
                cout<<"the work of the person is "<<workingtype<<endl;
                cout<<"the qualification of the person is "<<qualification<<endl;
                cout<<"the mathskills of the person is "<<mathskill<<endl;
                cout<<"the salary of the person is $"<<salary<<endl;      
            }
};

int main(){
    DataScientist vijay("vijay","data","manipulatingdata","masters","statistics",90870);
    vijay.display();
    return 0;
}