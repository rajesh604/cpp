#include<iostream>
#include<fstream>

using namespace std;

// this tutorial introduces you to files

/*
so let's what we need in c++ to interact with the files you basically need three tools
1.fstream
2.ofstream --> derived from fstream
3.ifstream --> derived from fstream
*/

// ways of opening files
// using constructors
// using member functions open()

int main(){
    string st2;

    // the below class is used to create objects that edits files in the below classes we are using constructors to open the files and write to it
    ofstream out("53sample.txt");
    out<<"hello this is a file"; // just like cin
    // the below code line is used to close the file
    out.close(); // if you do not close the file then the content in the file cannot be printed using the following code block
    // the below class is used to create objects that read files

    ifstream in("53sample.txt");
    // in>>st2;
    getline(in, st2); // just like ccout
    cout<<st2<<endl; 

    return 0;
}