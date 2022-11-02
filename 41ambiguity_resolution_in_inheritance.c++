// hello this program is about ambiguity resolution
#include<iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<<"who are you?"<<endl;
        }
};

class base2{
    public:
        void greet(){
            cout<<"i don't know about you."<<endl;
        }
};

// the below code block is used to solve the problem of ambiguity by declaring which function to call

// class greeting:public base1,public base2{
//     public:
//         void greet(){
//             base1::greet();
//         }
// };

// the below code block is used to solve the problem of ambiguity by overiding the function with the same

class greeting:public base1,public base2{
    public:
        void greet(){
            cout<<"i am a"<<endl;
        }
};

int main(){
    greeting s;
    s.greet();
    return 0;
}