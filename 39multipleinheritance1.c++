// hello this program is about multiple inheritance

#include<iostream>
using namespace std;

// syntax of inheriting in multiple inheritance
// class Derivedc:visibility-mode base1 ,visibility-mode base2{
//     body
// }

class student {
        protected:
            int roll_number;
        public:
            void set_roll_number(int number){ roll_number = number;}
            void get_roll_number(void){cout<<" sir your roll number "<<roll_number<<endl;}
};

class marks{
    protected:
        int maths,physics;
    public:
        void set_marks(int m1,int m2){maths=m1;physics=m2;}
        void get_marks(void){cout<<"sir you marks in maths is "<<maths<<endl<<" sir your marks in physics is "<<physics<<endl;}
};
// inheriting from base classes using multiple inheritance
// in the below code block roll_number,maths,physics are protected varibles and all the other member functions remain public
class result:public marks,public student{
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"sir your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }
};

int main(){
    result rajesh;
    rajesh.set_roll_number(34);
    rajesh.set_marks(99,99);
    rajesh.display();
    return 0;
}