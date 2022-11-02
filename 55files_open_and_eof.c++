#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string name;
    string name1;

    ofstream output;
    output.open("53sample.txt");
    output<<"hello this is raj\n";
    output<<"hello this is raj\n";
    output<<"hello this is raj";
    output.close();

    ifstream input;
    input.open("53sample.txt");

    // input>>name>>name1;

    // eof = end of line

    // the belo while loop runs until eof is equal to 0

    while (input.eof()!=1)
    {
        // input>>name; // --------------
        // input>>name>>name1;//         => used to take input
        getline(input, name); //------
        cout<<name<<endl;
        // cout<<name<<name1<<endl;
    }

    // cout<<name<<name1<<endl;

    return 0;
}