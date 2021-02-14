#include <iostream>
#include<cmath>


using namespace std;

int main(){
  int X, Y,Z ,T ,U,V,W;

  cout<<"\n Digite X: "<<endl;
cin>>X;

cout<<"\n Digite Y :"<<endl;
cin>>Y;

cout<<"\n Digite Z :"<<endl;
cin>>Z;

V = (X-Y);
W =  (Y-Z);
if(V<0){
    V*(-1);
}
if(W<0){
    W*(-1);
}

if(V<=W){

    T= (V-W)/2;
    if(T<=0){
        cout<<"\n the value of T: "<<T;
    }else{
        U = T*(-1) +V;
    }
}else{
    U = (V+W)/2;
}
cout<<"\n the value of W : "<<W;

    return  0;
}