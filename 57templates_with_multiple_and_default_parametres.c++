#include<iostream>
#include<typeinfo>  // --> used to find the type of variables

using namespace std;

// the below one is a template with mulitple parameters and default values default values are the values which are already set to some data type

template <class T,class T1,class T2 = int>

class vector{

    public:

        // initiating size to default T2 which is int because according to my acquaintance is measured in integer data type

        T2 size;
        T * arr;
        T1 elem;

        void set_values(T2 m){

            size = m;

            // initializing an array of size = size

            arr = new T[size];

        }

        T dotproduct(vector &v,T1 num){
            T d = 0;
            elem = num;
            for (int i = 0; i < size; i++)
            {
                // d += arr[i] * v.arr[i];
                // use any of this
                d += this->arr[i] * v.arr[i];
            }

            d+=elem;

            return d;
        }
};

int main(){

    // int x;
    // float y;

    // you can use the following syntax to find the type of variables
    // typeid(variable).name()
    // the examples of above syntaxes are given below

    // cout<<typeid(x).name()<<endl;
    // cout<<typeid(y).name()<<endl;

    vector <float,float> v1;

    v1.set_values(3);

    v1.arr[0] = 4.2;
    v1.arr[1] = 5.3;
    v1.arr[2] = 6.4;

    vector <float,float> v2;

    v2.set_values(3);

    v2.arr[0] = 1.2;
    v2.arr[1] = 2.3;
    v2.arr[2] = 4.5;

    float a = v1.dotproduct(v2,2.2);

    cout<<a;

    return 0;
}