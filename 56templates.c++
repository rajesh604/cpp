#include<iostream>

using namespace std;

// hello in this we are going to learn about c++ templates so what are templates. templates are the basic structures of classes used to make functions with different data types

// class vector{
//     public:
//         int size;
//         int * arr;
//         void set_values(int m){
//             size = m;
//             arr = new int[size];
//         }

//         int dotproduct(vector &v){
//             int d = 0;
//             for (int i = 0; i < size; i++)
//             {
//                 d += arr[i] * v.arr[i];
//             }
//             return d;
//         }
// };

// defining a template in the declaration of the template you can see class T in the < > it basically what data type you want to use in the classes elements or variables but should specify T before the variable or element for which you want to change the data type

template <class T>

class vector{

    public:
        int size;
        T * arr;
        void set_values(int m){
            size = m;
            // initializing an array of size = size
            arr = new T[size];
        }

        T dotproduct(vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                // d += arr[i] * v.arr[i];
                // use any of this
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main(){

    // vector v1;
    // v1.set_values(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 5;
    // v1.arr[2] = 6;

    // vector v2;
    // v2.set_values(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 2;
    // v2.arr[2] = 4;

    // int a = v1.dotproduct(v2);
    // cout<<a;
    // okay it's doing good for int values but what about float values let's have a look at them

    vector <float> v1;

    v1.set_values(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 5.3;
    v1.arr[2] = 6.4;

    vector <float> v2;

    v2.set_values(3);
    v2.arr[0] = 1.2;
    v2.arr[1] = 2.3;
    v2.arr[2] = 4.5;

    float a = v1.dotproduct(v2);
    cout<<a;

    // the above code gives the result 38 is that true no not so to get the dot product of the two vectors should we again initialize the vectors well absoultely not. so here comes the role of templates which is going to make the task easier

    return 0;
}