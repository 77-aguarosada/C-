#include <iostream>
#include <cmath>
using namespace std;

int main(){
 int X1, X2,X3, Xcp;
 double Z;
 double sin(double x);
double cos(double x);

cout<<"\n Digite X1: "<<endl;
cin>>X1;

cout<<"\n Digite X2 :"<<endl;
cin>>X2;

cout<<"\n Digite X3 :"<<endl;
cin>>X3;

Xcp = X1+ X2+X3;

if(X1<= Xcp){

    if(X2<=Xcp){
        if(X3<=Xcp){
          Z = 0;  
        }else{
            Z = (sin(X3)/cos(X3));
        }
    }
    else{
        Z = cos(X2);
    }
}else{
    Z = sin(X1);
}
cout<<"the value Z : "<<Z;

    return 0;
}