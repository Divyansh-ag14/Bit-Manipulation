#include<iostream>
using namespace std;

int count_1(int n){
    int count =0;
    while(n){
        n = (n & n-1);
        count++;
    }

    return count;

}

int main(void){

    int n; cout<<"Enter number "; cin>>n;

    // n & n-1 till you get 0
    // n & n-1 have the same bits except the right most bit set 
    cout<<"Total 1s: "<< count_1(n);
}