#include<iostream>
#include<map>
using namespace std;

// this program introduces to map 
// the below function is used to display the map passed to it
void display(map<string,int> &di){
    map<string,int>::iterator iter;
    for (iter = di.begin(); iter != di.end();iter++)
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }
    cout<<"'"<<endl;
}

int main(){
    // initializing a map
    map<string,int> dict;
    string name;
    int number;

    // assigning values to the map
    for (int i = 0; i < 4; i++)
    {
        cout<<"sir please enter the string"<<endl;
        cin>>name;
        cout<<"sir enter the number"<<endl;
        cin>>number;
        dict.insert({name,number});
    }


    display(dict);

    // some other ways to add values to the map function
    
    // dict["vijays"] = 100;
    // display(dict);
    // dict.insert({{"vik",65},{"vij",99}});
    // display(dict);
    return 0;
}