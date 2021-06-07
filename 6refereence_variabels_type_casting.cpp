#include<iostream>

using namespace std;

int c = 45;

int main(){
    // the below one is a simple code used to take input from the user and output it

    // **********************************  built in data types *******************************************  //

    // int a,b,c;
    // cout<<"sir please enter your value"<<endl;
    // cin >> a;
    // cout<<"sir please enter your value"<<endl;
    // cin >> b;
    // c = a + b;
    // cout<<"sir the sum of your outputs is: "<<c;
    // cout<<"\nsir the global c is: "<<::c;

    // the below one are the float and long double values and by default 34.4 is a double value so to indicate it as float you can add the suffic f or F but in the below code lines you do not need it because you have iniitated the variable using float but when you pass values to functions then it may be necessary.

    // float d = 34.4f;
    // long double e = 34.4l;

    // double d = 34.4;

    // cout<<"the value of d is:   "<<d<<endl<<"the valeu of e is: "<<e;

    // cout<<"the size of 34.4  is  "<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4f is  "<<sizeof(34.4f)<<endl;
    // cout<<"the size of double 34.4 is "<<sizeof(d)<<endl;
    // cout<<"the size of 34.4  is  "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4L is  "<<sizeof(34.4L)<<endl;
    // cout<<"the size of 34.4l is  "<<sizeof(34.4l)<<endl;

    // ************************************* reference variables ***********************************//

    float varish = 466;
    // float &y = varish;
    // cout<<varish<<endl;
    // cout<<y<<endl;

    // ******************************** type casting ********************************//

    // type casting is conversion of data type to another data type

    int a = 35;
    float b = 56.6;

    cout<<"the value of a is: "<<a<<endl;
    cout<<"the value of a is: "<<(float)a<<endl;
    cout<<"the value of b is: "<<(int)b<<endl;

    // the same above code line can be written as the below one

    cout<<"the value of b is: "<<int(b)<<endl;

    // by the follwing codes you can might understand typecasting
    
    cout<<"the value of a + b is "<< a+b<<endl;
    cout<<"the value of a + (int)b is "<< a+(int)b<<endl;
    cout<<"the value of a + int(b) is "<< a+int(b)<<endl;

    return 0;

}      