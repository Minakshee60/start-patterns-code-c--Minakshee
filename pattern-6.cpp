
// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3
// 1 2
// 1


#include<iostream>
using namespace std;

int main(){
    int outer_var;
    cin>>outer_var;
    for(int i=outer_var;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

}