// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 



#include<iostream>
using namespace std;

int main(){
    int outer_var;
    cin>>outer_var;
    for(int i=0;i<outer_var;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
       for(int i=outer_var-1;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    
   return 0; 

}