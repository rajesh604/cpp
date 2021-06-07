#include<iostream>
#include<string>
using namespace std;

// the below one is hte class used to write the details of emperors of bharatha desha

class maharaja{

    // the below one is a static int variable which is not associated with object and it is not seperate for each object all objects can access it but cannot change it when once it is initiated it can only be appended or incremented. but if the member is not static then the individual objects has their individual members and the member are not shared between each other.
    static int count;

    string army_details[100];
    int counter;

    public:

    // initiating the arrays

        string name[100];
        string father[100];
        string son[100];
        string kingdom[100];

        // the below two are functions
        void initcounter(void){counter=0;}
        void setdetails(void);

        static void getcount(void){
            cout<<"the count is "<<count<<endl;
            // the below code line cannot be executed because it is not a static variable and static function can only access static variables or functions

            // cout<<counter;
        }

        // the below one is the function used to print the details of the emperors
        void details(void){
            for (int i = 0; i < counter; i++)
            {
                cout<<"the name of the ruler is "<<name[i]<<endl;
                cout<<"the name of the ruler's father is "<<father[i]<<endl;
                cout<<"the name of the ruler's son is "<<son[i]<<endl;
                cout<<"the name of the ruler's kingdom is "<<kingdom[i]<<endl;
                cout<<"the armydetatils  of the ruler is "<<army_details[i]<<endl;        
            }        
        }
};

// the below code line is necessary to make the static function work
int maharaja :: count;

// the below code block is used to input the details of the emperor
void maharaja :: setdetails(void){

    // nested methods
    initcounter();

    cout<<"ruler "<<count+1<<endl;

    cout<<"sir please enter the name of the ruler"<<counter + 1<<endl;
    getline(cin,name[counter]);

    // the below code line is used to flush the previous input it is done because when we press enter then enter is a valid input for cin
    // fflush(stdin);

    cout<<"sir please enter the name of the ruler's father"<<counter + 1<<endl;
    getline(cin,father[counter]);

    cout<<"sir please enter the name of the ruler's son"<<counter + 1<<endl;
    getline(cin,son[counter]);

    cout<<"sir please enter the name of the ruler's kingdom"<<counter + 1<<endl;
    getline(cin,kingdom[counter]);
    cout<<"sir please enter the the ruler's army_details"<<counter + 1<<endl;
    getline(cin,army_details[counter]);

    count++;
    counter++;

}

int main(){

    // using class we cannot call the functions
    // maharaja :: setdetails;

    // but by using static function we can call them by using class name
    maharaja :: getcount();

}