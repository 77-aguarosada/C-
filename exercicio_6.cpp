#include <iostream>

using namespace std;
int main(){

 const int num = 20;

 int arr[num] ,X,Y, max_value =0, min_value=100000;

 cout<<"\n Digite o value :"<<endl;

 for(int i = 1 ; i<= 5; i++){

    cin>>arr[i];     
 }

 for(int i = 1 ; i<= 5; i++){
   if(arr[i]>max_value){
       max_value = arr[i];
   } 
    if(arr[i]<min_value){
       min_value = arr[i];
   }       
 }
 
 do{

     max_value = max_value -1;
     min_value = min_value+1;
     X = max_value;
     Y = min_value;

    

 }while(X<=Y);

  if(X = Y){
   if(X%2==0){
       cout<<"this value is pair "<<endl;
   }

  }else{
       cout<<"this value is odd "<<endl;
  }
  cout<<"\n";
 cout<<"this value max "<<max_value<<endl;
    cout<<"this value min "<<min_value<<endl;

    return 0;
}