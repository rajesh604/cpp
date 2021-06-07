#include<iostream>
#include<cstring>
using namespace std;

// so our project will we weill be goint to enroll an student in iit bombay zoom class and so for this we need his following details
// his name
// his age
// admission number
// and he will be allocated passoword to zoom class in iit bombay

class student{
    int admission_number;
    string password;
    public:
        string name;
        int age;
        void details(string names,int ages,int admission_number);
        void passoword_generator(char hello[]);
        void get_details(){
            cout<<"the student name is "<<name<<endl;
            cout<<"his age is "<<age<<endl;
            cout<<"his admission number is "<<admission_number<<endl;
            cout<<"his passoword is "<<password<<endl;
            cout<<"thank you sir for auspicious visiting";
        }

};

// the below code block is used to encrypt the array passed to it

void encrypt(char *c){
    char *pst = c;
    while (*pst!='\0'){
        // in the followin code lines you can use anything but you in the next one you need you the code line with opposite to make encryption and decryption good

        // *pst = *pst - 1;
        *pst = *pst + 1;
        pst++;
        
    }
}

// the below code block is used to decrypt the array passed to it

void decrypt(char *c){
    char *pst = c;

    while (*pst!='\0'){
        // *pst = *pst + 1;
        *pst = *pst - 1;
        pst++;
        
    }

}

// the below code block is used to input details of the student and the output of the program is a passoword

void student :: details(string names,int ages,int admission_numbesr){
    name = names;
    age = ages;
    admission_number = admission_numbesr;
    int n = names.length();
    char var[n];
    strcpy(var,names.c_str());
    cout<<var<<endl;
    passoword_generator(var);
}

// the below one is a passoword_generator

void student :: passoword_generator(char hello[]){

    encrypt(hello);
    cout<<"sir your password is "<<hello<<endl;
    password = hello;
    // decrypt(hello);
    // cout<<"sir your password meaning is "<<hello<<endl;

}

int main(){

    student hello;
    hello.details("rajesh",16,986658988);
    
}