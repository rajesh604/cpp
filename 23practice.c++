#include<iostream>
using namespace std;
class giving_loan{
    int money;
    float intrest_rate;
    public:
        void set_loan(int loana,float intrest_rates){
            money = loana;
            intrest_rate = intrest_rates;
        }

        void giving_loan_back(giving_loan r,giving_loan p){
            money = r.money + p.money;
            intrest_rate = r.intrest_rate + p.intrest_rate;
        }

        void print_loan(void){
            cout<<"the money is "<<money<<" and the intrest_rate is "<<intrest_rate<<endl;
        }
};

int main(){
    giving_loan shiva,rudra,mahaveer;
    shiva.set_loan(1000,58.4);
    shiva.print_loan();

    rudra.set_loan(1000,58.4);
    rudra.print_loan();

    mahaveer.giving_loan_back(shiva,rudra);
    mahaveer.print_loan();
    return 0;
}