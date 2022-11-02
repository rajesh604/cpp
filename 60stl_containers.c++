#include<iostream>
#include<vector>
using namespace std;

// what is a stl?
// stl -->standard template library is a library which containers pretested and fully functioning classes and other functions which helps to reuse the code and saves a lot of time and it promotes code reusability and helps us avoiding reinveinting the wheel.
// stl mainly contains threee parts they are 1.containers,2.algorithms,3.iterators
// 1.containers --> used to store data
// 2.algorithms --> used to implement our work in a procedural way --> examples --> sorting binary algorithms
// 3.iterators --> used to point to the element we want to work upon
// this program introduces to  vectors.

void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
}
int main(){

    vector<int> vec1;
    int size;
    int element;
    cout<<"sir please enter the size of the vector you want"<<endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"sir please enter your element";
        cin>>element;
        vec1.push_back(element);
    }

    // display(vec1);
    // the below code lines is used to insert an element at the pointer given to it
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 2,2,522);
    display(vec1);

    // the below code lines is used to pop an element from the vector
    // cout<<"'"<<endl;
    // vec1.pop_back();
    // display(vec1);

    // the below code lines is used to createa a vector containing 6 10 elements
    // vector<int> vec2(6,10);
    // display(vec2);

    return 0;
}