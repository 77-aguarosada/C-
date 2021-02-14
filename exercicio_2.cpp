#include <iostream>
#include <cmath>
using namespace std;

int main(){
  
  int X, Y,Z,V,T,U;
  double W;
  double sin(double x);
   double cos(double x);

  cout<<"\n Digite o valor de X : ";
  cin>>X;
   cout<<"\n Digite o valor de Y : ";
  cin>>Y;
     cout<<"\n Digite o valor de Z : ";
  cin>>Z;


      V = X-Y;
      W = Y-Z;
      if(W<0){
        W*-1;
     }


    if(V<=W){
     
     T =  W/2;

   }else{
       U = V*2;
   }
   if(U<=T){
    W = sin(U);
   }
   else{
       W = cos(T);
   }


   cout<<" o valor de W :"<<W;



    return 0;
}