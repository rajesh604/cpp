#include<iostream>
#include<list>
using namespace std;
// this program introduces to list and it's methods.

void display(list<int> l){
    // initializing an iterator
    list<int>::iterator iter;
    for (iter = l.begin();iter!=l.end(); iter++)
    {
        cout<<*iter<<endl;
    }
    cout<<"'"<<endl;
}

int main(){
    list<int> ls;
    list<int>::iterator iter;
    int i;
    for (int j = 0;j<5; j++)
    {
        cout<<"sir please enter the element you want to add to the linked list "<<endl;
        cin>>i;
        ls.push_back(i);
    }
    
    // display(ls);
    // ls.sort(); --> used to sort values of a list
    // display(ls);

    // list<int> l;
    // l.push_back(99);
    // l.push_back(100);
    // l.push_back(55);
    // l.push_back(105);
    // l.push_back(200);
    // l.sort();
    // the below code line is used to merge two list
    // ls.merge(l);
    // display(ls);

    // the below code lines is used to remove values from the list

    // ls.pop_back();
    // cout<<"'"<<endl;
    // display(ls);
    // ls.pop_front();
    // cout<<"'"<<endl;
    // display(ls);
    // ls.remove(2);
    // cout<<"'"<<endl;
    // display(ls);

    return 0;
}