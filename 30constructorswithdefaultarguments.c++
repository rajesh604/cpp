
// the below program is the example of constructorsdefaultarguments in the below code if the user does not pass any value to the program the program uses the default values

#include<iostream>
using namespace std;
class wages{
    int wagesofbusinessman,wageofmiddleclassman,wageofpoorpersone;
    public:
        wages(int x = 1726992,int y=40000,int z = 22947){
            wagesofbusinessman = x;
            wageofmiddleclassman = y;
            wageofpoorpersone = z;
        }

        void printdetails();
};

void wages :: printdetails(){
    cout<<"the salary of an businessman is "<<wagesofbusinessman<<endl;
    cout<<"the salary of an middleclassperson is "<<wageofmiddleclassman<<endl;
    cout<<"the salary of an poorperson is "<<wageofpoorpersone<<endl;
}

int main(){

    wages salary(500000,30000);
    salary.printdetails();
    return 0;

}