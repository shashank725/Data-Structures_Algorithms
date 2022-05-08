#include<iostream>
using namespace std;

int linearSearch(int n, int arr[], int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, key;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cin>>key;
    cout<<linearSearch(n, array, key);
}