
// so guys in this we are going to create a compounded intrest teller and we are also going to learn about dynamic initialization in which the objects are created after giving inputs the object should have

#include<iostream>
using namespace std;

class bankmoney{

    // initiating the required variables

    int principal;
    float intrestrate;
    int years;
    float returnvalue;

    public:

        // initiating the blank constructor and it is necessary to run the code below

        bankmoney(){};
        
        // the below one is the code block used to calculate the amount the depositor receives according to his acts and the below code block is only executed when the user gives the input in the form of decimal

        bankmoney(int p,int y,float r){

            principal = p;
            years = y;
            intrestrate = r;
            returnvalue = principal;

            // the below for loop runs the number of times = years because the money is compounded the number of years the user keeps in the bank

            for (int i = 0; i < years; i++)
            {
                // the below code line is used to calculate the compounded amount
                returnvalue = returnvalue * (1 + intrestrate);
            }
        }

        // the below code block is executed when the user gives the intrestrate in percentage form

        bankmoney(int p,int y,int r){

            principal = p;
            years = y;
            // in the below code line we are converting the intrestrate in int form to decimal form
            intrestrate = (float) r/100;
            returnvalue = principal;

            for (int i = 0; i < years; i++)
            {
                returnvalue = returnvalue * (1 + intrestrate);
            }
        }
        
        // the below code block is used to print the details of the user finance

        void display(){

            if(years>1){
                cout<<"sir your money "<<principal<<" in "<<years<<"years"<<" compounded to "<<returnvalue<<endl;;
            }
            
            else
            {
                cout<<"sir your money "<<principal<<" in "<<years<<"yearr"<<" compounded to "<<returnvalue<<endl;
            }
            
        }

};

int main(){

    int p,y,R;
    float r;
    char i;
        
    cout<<"sir in what way you want to input intrestrate in precent(p) or in decimal (d)"<<endl;
    cin>>i; 
    cout<<"sir please enter your principal amount"<<endl;
    cin>>p;

    if(i=='d'){
        cout<<"sir please enter the intrest rate of the bank in which you have invested"<<endl;
        cin>>r; 
        cout<<"sir please enter the number of years you have invested"<<endl;
        cin>>y; 
        bankmoney b1;   
        b1 = bankmoney(p,y,r);
        b1.display();
    }

    else
    
    {
        cout<<"sir please enter the intrest rate of the bank in which you have invested"<<endl;
        cin>>R; 
        cout<<"sir please enter the number of years you have invested"<<endl;
        cin>>y; 
        bankmoney b1;   
        b1 = bankmoney(p,y,R);
        b1.display();
    }

    return 0;
}