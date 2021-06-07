#include<iostream>
using namespace std;

class worker{
    int bank_balance;
    int income;
    friend worker bankmanger(worker client);
    public:
        string name;
        int age;
        string occupation;

        void set_details(string names,int ages,string occupations,int bank_money,int incomes){
            name = names;
            age = ages;
            occupation = occupations;
            bank_balance = bank_money;
            income = incomes;
        }

        void get_details(void){
            cout<<" the user name is "<<name<<endl;
            cout<<"the age of the client is "<<age<<endl;
            cout<<"the occupation of the client is "<<occupation<<endl;
            cout<<"the bank_money of the client is "<<bank_balance<<endl;
            cout<<"the income of the client is "<<income<<endl;

        }

};

worker bankmanger(worker client){
    if(client.bank_balance>5000){
        if (client.age>=21)
        {
            if (client.income>=15000)
            {
                cout<<"sir your are eligible to take loan"<<endl;
            }
            
        }
        
    }
    else{
        cout<<"sir you are not eligible to take loan"<<endl;
    }
}

int main(){

    worker suman;

    suman.set_details("suman",21,"labour",15000,15000);

    suman.get_details();

    bankmanger(suman);

    return 0;
}