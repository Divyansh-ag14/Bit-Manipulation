// every num except unique num occurs twice

#include<iostream>
using namespace std;

int main(void){

    int n; cout<<"Enter the array size: "; cin>>n;
    int arr[n];

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // xor returns 1 only if both bits are diff
    // for every number except the unique number xorsum will be equal to 0 and at last will only contain the unique number
    // 0000 ^ unique_number = unique_number
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
    }
    cout<<"Unique element: "<<xorsum;
}