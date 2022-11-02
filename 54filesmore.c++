#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string name;

    ofstream rout("53sample.txt");
    cout<<"sir please enter your name"<<endl;
    getline(cin,name);
    rout<<name;
    rout.close(); // to close the file

    ifstream rin("53sample.txt");
    getline(rin,name);
    cout<<"the content in the file is\n"<<name;
    rin.close();

    return 0;
}