// this program introduces the protected variable and its inheritance

#include<iostream>
using namespace std;

/*
For a protected member:
                            Public derivation       Private derivation      Protected derivation
    1.private members       Not inherited           Not inherited           Note inherited
    2.protected members     Protected               Private                 Protected
    3.public members        Public                  Private                 Protected
*/

class color{
    protected:
        int blue;
    private:
        int red;
    public:
        int green;
};

// int the below class the protected variable is derived but acts as private

class derived:protected color{

};

int main(){
    derived d;

    // cout<<d.blue<<endl;
    // cout<<d.green<<endl;
    // cout<<d.blue<<endl;
    
    return 0;
}