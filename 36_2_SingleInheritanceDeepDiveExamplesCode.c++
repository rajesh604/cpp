#include<iostream>
using namespace std;

// hello gusy in this we are going to learn about single inheritance concepts using some real life examples like data scientist and data analyst

class Dataanalyst{
    int salary;
    public:
        string work;
        string whathedoes;
        void setdata();
        int getdata();
};

// the below code line is used to derive class using visibility mode private

class DataScientist : private Dataanalyst{
    int salarys;
    public:
        string extrawhathedoes;
        void process();
        void display();

};

// when you derive a class using visibility mode private then all the public members in base class become private members of derived class and however the private members in the base class are set as private members int the derived class so now you cannot access the private functino or members directly to access them you need to use the functions of the derived class which are in public using public function you can access the elements in private class which are set as public in base class but what about elements in the base class which are private so these elements which are derived in the derived class can be accessed using the public members of base class
// it might be confusing you can understand it by the following example

// visual representation

/*
                                                         +++++++++++++
                                                        |             |                       
                                                        |  BASE CLASS |--IN  THIS THERE ARE --> PRIVATE --> THIS MAY CONTAIN METHODS/VARIABLES
                                                        |             |                     |    
                                                         +++++++++++++                      --> PUBLIC --> THIS MAY CONTAIN METHODS/VARIABLES
                                                               |                               private members can only be accessed by public
                                                               |                               members
                                                               |
                                                         ++++++++++++++++
                                                        |                | 
                                                        |  DERIVED CLASS |-->IN THIS THERE ARE -->DERIVED PRIVATE AND PUBLIC MEMBERS AND ELEMENTS
                                                        |                |                     |
                                                         ++++++++++++++++                      -->AND IT'S OWN MEMBERS AND ELEMENTS

SUPPOSE BASE CLASS BE

class Dataanalyst{
    int salary;-->PRIVATE ELEMENT OF BASE CLASS
    public:
        string work;
        string whathedoes;
        void setdata();
        int getdata();
};

YOU CAN SEE IN THE BELOW CODE LINE THAT WE DERIVE THE CLASS USING PRIVATE IT MEANS THAT THE PUBLIC MEMBERS OF DATAANALYST CLASS ARE PRIVATE MEMBERS OF DATASCIENTIS CLASS YOU CAN UNDERSTAND IT BY THE FOLLOWING CODES BLOCKS

class DataScientist : private Dataanalyst{
    int salarys;-->PRIVATE ELEMENT OF DERIVED CLASS
    public:
        string extrawhathedoes;
        void process();
        void display();

};
                |
                |
                *
class DataScientist : private Dataanalyst{ +++++++++++++++++++++++++++++++++++++++++++++++
    int salary;-->the beside element is a private member of base class                  |
    string whathedoes;---------                                                         |
    void setdata();            |--> the beside elements are public members of base class |      
    void getdata();------------                                                          |
    int salarys;-->PRIVATE ELEMENT OF DERIVED CLASS                                      |       
    public:                                                                              |--> THE BELOW ONE IS A WAY IN WHICH YOU CAN UNDERSTAND
        string extrawhathedoes;                                                          |    THE ABOVE CODE BLOCK BUT I DON'T KNOW WHETHER IT IS
        void process();                                                                  |    ACTUAL OR FAKE REPRESENTATION
        void display();                                                                  |
                                                                                         |
};++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// NOW IN THE BELOW CODE WE WILL SEE HOW TO ACCESS ELEMENTS USING FUNCTIONS AND MANY OTHER THINGS

class DataScientist : private Dataanalyst{
    int salary;--->the beside element is a private member of base class <----+            
    string extrawhathedoes;<---------------+                                 +
    void setdata();<-----------------------+-------------------------------- +
    void getdata(); <----------------------+-------------------------------- +                                                       
    int salarys; <------------------------ +                       
    public:                                +                                                         
        string extrawhathedoes;<--+        +
        void process();-----------|--------|
        void display();-----------|--------|

the above arrow diagrams indicate which elements indicate other

IF THE DERIVED CLASS IS DERIVED USING THE VISIBILITY MODE PUBLIC THEN YOU CAN ACCESS THE ELEMENTS IN THE FOLLOWING WAY WHEN WE DERIVE USING PUBLIC ALL THE PUBLIC FUNCTIONS AND MEMBERS OF THE BASE CLASS REMAIN PUBLIC IN THE PRIVATE CLASS AND PRIVATE MEMBERS REMAIN PRIVATE

// NOW IN THE BELOW CODE WE WILL SEE HOW TO ACCESS ELEMENTS USING FUNCTIONS AND MANY OTHER THINGS

class DataScientist : private Dataanalyst{
    int salarys;-->the beside element is a private member of base class<------+
    public:                                                                   +
        string extrawhathedoes;<-+                                            +
        void process();----------|--------------------------------------------|
        void display();----------|--------------------------------------------|
        string work;<---------+
        string whathedoes;<---+      
        void setdata();-------|
        int getdata();--------|

};

*/

void Dataanalyst :: setdata(){
    work = "data";
    whathedoes = "exploratorydataanalysis";
    salary = 58470;
}

int Dataanalyst :: getdata(){
    return salary;
}

void DataScientist :: process(){
    // the below code line is used to call setdata function
    setdata();
    extrawhathedoes = "modelcreation";
    salarys = 2 * getdata();
}

void DataScientist :: display(){
    cout<<"the work of the DataScientis and Dataanalyst is with "<<work<<endl;
    cout<<"the data analyst do "<<whathedoes<<endl;
    cout<<"the data scientis do "<<whathedoes<<" "<<extrawhathedoes<<endl;
    // the below code line is used to access the private member of the derived class which is the private member of base class we are using getdata function which is a private function in derived class display funciton which is a function in public
    cout<<"the data analyst get salary "<<getdata()<<endl;
    // the below code line is used to access the private member of the derived class using the display function which is in public
    cout<<"the data scientist get salary "<<salarys<<endl;
}

int main(){
    DataScientist vijay;
    vijay.process();
    vijay.display();
    return 0;
}