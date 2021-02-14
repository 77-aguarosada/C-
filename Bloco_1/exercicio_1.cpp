#include <iostream>
using namespace std;

int main(){
 int X , Y, Z;
 cout<<"\n Digite o valor de X: ";
 cin>>X;
 cout<<"\n Digite o valor de Y: ";
 cin>>Y; 

        if(X<=1){
            
            if(X<=2){
                if(X<=3){
                    if(X<=4){
                    
                        Z = 1;
                    }
                    else{
                        Z = 3;
                    }
                }else{
                    Z = 7;
                }

            }else{
                if(X<=3){
                    Z = 5 ;  
                }
            }
        }else{
            if(Y<=3){

                Z= 5;
                if(X<=2){
                if(X<=3){
                    if(X<=4){
                    
                        Z = 1;
                    }
                    else{
                        Z = 3;
                    }
                }else{
                    Z = 7;
                }
                

            }else{
                if(X<=3){
                    Z = 5 ;  
                }
            }
            
            }
                        
            
        }
 cout<<"\nvalor de Z: "<<Z;

    return 0;
}