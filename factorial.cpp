#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of factorial";
    cin>>n;
    
    for (int i=1;i<=n;i++){
        int product=1;
        for(int j=i;j>0;j--){
            product=product*j;
            
        }
        cout<<"factorial"<<"for"<<i<<"is"<<product<<endl;
    }
}