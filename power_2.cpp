#include<iostream>
using namespace std;

bool check(int n){
   
    return (n && !(n & (n-1)));
}

int main(void){

    int n; cout<<"Enter number: "; cin>>n;
   cout<<check(n);
}