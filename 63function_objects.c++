#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {1,56,98,54,32,12};
    sort(arr,arr+5,greater<int>());
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}