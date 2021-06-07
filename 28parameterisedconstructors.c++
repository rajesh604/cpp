// the below one is the program used to give the distance between points on a number line

#include<iostream>
#include<cmath>
using namespace std;

// initiating a class
class distancefinder{

    int x,y;

    friend double distancebetweenpoints(distancefinder,distancefinder);

    public:
        distancefinder(int a, int b){
            x = a;
            y = b;
        }

};

// initiating a function
double distancebetweenpoints(distancefinder r,distancefinder t){

    double sqm = (((r.x - t.x)*(r.x - t.x)) + ((r.y - t.y)*(r.y - t.y)));

    if(sqm>0){
        double sqr = sqrt(sqm);
        return sqr;
    }

    else
    {
        return 0;
    }
    
    }

int main(){

    distancefinder x(5,6);
    distancefinder y(1,1);

    double z = distancebetweenpoints(x,y);
    cout<<" the distance between points is "<<z<<endl;
    return 0;
}