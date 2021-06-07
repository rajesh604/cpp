
// nesting of member functions

#include<iostream>
#include<string>
using namespace std;

// the below one is the program used to find whether a given input is a binary inpur or not

class Binary{
        //  private:-->the beside one is a choice
            string s;

        public:
            void read(void);
            void chk_binary(void);
            void char_compliment(void);
            void display(void);

};

// the below one is the function used to takes input from the user
void Binary :: read(void){

    cout<<"sir please enter the number"<<endl;
    cin>>s;
    chk_binary();

}

// the below one is used to check whether the given input is binary or not
void Binary :: chk_binary(void){
    // the below code line is used to iterate over the values of the string
    for (int i = 0; i < s.length(); i++)
    {
        // if the values of string at a particular index is neither equal to 0 nor 1 then the below code block is executed
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"the input is not a binary format"<<endl;
            // the below code line is used to exit from the program
            exit(0);
        }
    }
}
    
// the below one is used to display the binary number
void Binary :: display(void){
    cout<<"displaying your binary number"<<endl;
    for (int i = 0; i < s.length() ;i++)
    {
        cout << s.at(i);   
    }

    cout<<endl;
}

// the below one is used to replace values of 0 to 1 and 1 to 0
void Binary :: char_compliment(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' )
        {
            s.at(i) = '0';
        }
        else{
            s.at(i) = '1';
        }
    }
}

int main(){
    Binary rajesh;

    // the below one is invalid even if we remove variable from the private because by default the variables are set private in classes
    // rajesh.s
    
    rajesh.read();
    rajesh.display();
    rajesh.char_compliment();
    rajesh.display();

    // so what is nesting of method functions

    // in the above code block we have to execute all the function but in our daily lives there may some programs that does not need user to interfere so we make them compulsory to get executed we do this by using nesting methods in nesting methods we call some function in a function so when ever we execute that function then all the functions in it are called automatically
    // like in this program we are nesting chk_binary to read function
    // and after runnig the program you can see it is woring properly and it is useful
   return 0;
}