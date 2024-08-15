#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto which we can print fibonacci series";
    cin>>n;
    int first_num=1,second_num=1,next=0;
    for(int i=0;i<n;i++){
        cout<<first_num<<" ";
        next=first_num+second_num;
        first_num=second_num;
        second_num=next;
    }
}