#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the range to see Armstrong number";
    cin>>m;
    for(int i=1;i<=m;i++){
        int num=i;
        int new_number=0;
        int sum=0;
        while(num>0){
            new_number=num%10;
            sum+=(new_number*new_number*new_number);
            num=num/10;

        }
        if(sum==i) cout<<"Armstrong number is"<<sum<<endl;
    }
}