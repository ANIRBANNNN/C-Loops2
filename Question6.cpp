#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int orig=n;
    int rev=0;
    int number=0;
    while(n>0){
        number=n%10;
        rev=rev*10+number;
        n=n/10;
    }
    cout<<"Result is:"<<rev+orig;
}