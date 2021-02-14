#include <iostream>

using namespace std;

int main(){
  int X, Y,Z ,T ,U,V,W;

cout<<"\n Digite X: "<<endl;
cin>>X;

cout<<"\n Digite Y :"<<endl;
cin>>Y;

cout<<"\n Digite Z :"<<endl;
cin>>Z;
cout<<"\n Digite V :"<<endl;
cin>>V;


  if ( (X-Y)<= (Z-V)){
      if(Z<=V){
          W = V;
      }else{
          W = (Y+Z)/2;
      }
  }else{
      if(X<=Y){
                W = (Y+Z)/2;
                if(Z<=V){
                W = V;
                }
       }else{
           W = X;
       }
  }
 
 cout<<"\nthe value of W is : "<<W;
    return 0;
}