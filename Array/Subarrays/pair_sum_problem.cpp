// Check if there exits two elements in an array such that their sum is equal to given k

#include<iostream>
using namespace std;


bool pairsum(int arr[], int num, int key){
    int low = 0;
    int high = num-1;
    while(low<high)
    {
        if(arr[low]+arr[high]==key){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>key){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    int n, key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;

    cout<<pairsum(arr, n,key)<<endl;
}



// BRUTE FORCE SOLUTION
// bool pairsum(int arr[], int num, int key){
//     for(int i=0; i<num-1; i++){
//         for(int j=i+1; j<num; j++){
//             if(arr[i]+arr[j]==key){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     int n, key;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>key;

//     cout<<pairsum(arr, n,key)<<endl;
// }