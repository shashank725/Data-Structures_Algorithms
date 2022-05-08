// Insert an element from unsorted array to its correct position in sorted array

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current=arr[i];
        int prev=i-1;
        while(arr[prev]>current && prev>=0){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}