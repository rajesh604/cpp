// hello this program is a introduction about multilevel inheritance
#include<iostream>
using namespace std;

class student {
        protected:
            int roll_number;
        public:
            void set_roll_number(int number){ roll_number = number;}
            void get_roll_number(void){cout<<" sir your roll number "<<roll_number<<endl;}
};

class marks:public student{
    protected:
        int maths,physics;
    public:
        void set_marks(int m1,int m2){maths=m1;physics=m2;}
        void get_marks(void){cout<<"sir you marks in maths is "<<maths<<endl<<" sir your marks in physics is "<<physics<<endl;}
};

class result:public marks{
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"sir your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }
};

// in the above code blocks result is inherited from marks which inturn is inherited from student class and this type of inheritance is called is multilevel inheritance

int main(){
    result rajesh;
    rajesh.set_roll_number(34);
    rajesh.set_marks(99,99);
    rajesh.display();
    return 0;
}