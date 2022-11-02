// create 2 classes:
    // 1.simplecalculator - Takes input of 2 numbers using an utility function and perfroms +,-,*,/,% function
    // 2.scientific calculator - Takes input of 2 numbers using an utility function and perfroms +,-,*,/,% function and any four scientific operations
    // a hybrid calculator

#include<iostream>
#include<math.h>
using namespace std;

class ScientificCalculator{
    public:
        int a,b;
        string s;
        float g;
        void set_values(int r,int t,string c){
        a=r;
        b=t;
        s=c;
        }
        void get_value(void);
};

void ScientificCalculator::get_value()
{
    if (s=="+")
    {
        g = (a+b);
    }

    else if (s=="-")
    {
        g =  (a-b);
    }

    else if (s=="*")
    {
        g =  (a*b);
    }

    else if (s=="/")
    {
        g =  (a/b);
    }

    else if (s=="sin")
    {
        g =  sin(a+b);
    }

    else if (s=="cos")
    {
        g =  cos(a+b);
    }
    
    else if (s=="tan")
    {
        g =  tan(a+b);
    }
    else
    {
        g = 0.0;
    }
    
}

class hybridCalculator : public ScientificCalculator
{
    public:
        void display(){
            cout<<"the "<<s<<" of the two number is "<<g<<endl;
        }
};

int main(){
    hybridCalculator rajesh;
    rajesh.set_values(0,90,"+");
    rajesh.get_value();
    rajesh.display();
    return 0;
}