#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int sum=0;
    int number=0;
    while(n>0){
        number=n%10;
        if(number%2==0) {
            sum+=number;
            }
        n=n/10;
    }
    cout<<sum;
}