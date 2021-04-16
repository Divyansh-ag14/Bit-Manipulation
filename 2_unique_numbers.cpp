#include<iostream>
using namespace std;

int getBit(int n, int pos){

    return((n &(1<<pos)) !=0);

}

int main(void){

    int n; cout<<"Enter the array size: "; cin>>n;
    int arr[n];

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // find the  xorsum of all numbers, we will get the xorsum of two unique numbers as others will cancel out
    // get the pos of right most set bit and calc xorsum of numbers having setbit at that pos
    // this will give us one of the two unique numbers
    // calc another number by perofming xor on xor_sum and this num


    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
    }
    
    int temp_sum = xorsum;
    int pos = -1;
    int setbit =0;
    while(setbit != 1){
        setbit = temp_sum & 1; //last bit
        pos+=1;
        temp_sum = temp_sum >> 1; // right shoft to extract one bit 
    }

    // check which numbers in array have setbit at pos
    int new_xorsum =0;
    for(int i=0; i<n; i++){
        if(getBit(arr[i], pos))
            new_xorsum ^=arr[i];
    }
    
    // new_xor_sum contains one unique number;
    int n1 = new_xorsum;

    int n2 = new_xorsum^xorsum;

    cout<<"Unique numbers are: "<<n1<<" "<<n2;
}