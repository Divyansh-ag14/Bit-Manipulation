#include<iostream>
using namespace std;

int main(void){

    int n; cout<<"Enter the array size: "; cin>>n;
    int arr[n];
    
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // array of size n has (2^n) subsets and (n*(n+1)/2) subarrays
    //2^n = 1<<n;


    //check if bit is set in the position
    for(int i=0; i<(1<<n); i++){
        cout<<i<<".) ";
        for(int j=0; j<n; j++){
            if(i & (1<<j))
                cout<<arr[j]<<" ";
        }
        cout<<endl;

    } 

}