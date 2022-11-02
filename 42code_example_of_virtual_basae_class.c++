// hello guys in this we are going to implement virtual base class code example
// virtual base class is the class that saves us from the ambiguity

#include<iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int number){
            roll_number = number;
        }
        void get_roll_number(){cout<<"sir your roll number is "<<roll_number<<endl;}
};

class test :virtual public student{
    protected:
        int maths,physics;
    public:
        void set_marks(int m1,int m2){
            maths = m1;
            physics = m2;
        }
        void get_marks(void){
            cout<<"sir you got "<<maths<<" marks in maths"<<endl;
            cout<<"sir you got "<<physics<<" marks in physics"<<endl;
        }
};

class sports : virtual public student{
    protected:
        int src;
    public:
        void set_score(int s){
            src=s;
        }
        void get_score(void){
            cout<<"sir you got "<<src<<" score in sports "<<endl;
        }
};

class result : public test,public sports{
    protected:
        int total_score;
    public:
        void display(){
            total_score = maths+physics+src;
            cout<<"sir your total score is "<<total_score<<endl;
        }
};

int main(){
    result rajesh;
    rajesh.set_roll_number(12);
    rajesh.set_marks(99,99);
    rajesh.set_score(99);
    rajesh.display();
    return 0;
}