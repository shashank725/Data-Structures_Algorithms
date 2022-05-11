#include<iostream>
#include<climits>
using namespace std;


// KADANE's ALGORITHM
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i=0; i<n; i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout<<maxSum<<endl;

}



// CUMULATIVE SUM APPROACH  
// int main(){
//     int n;
//     cin>>n;
//     int aar[n];
//     for(int i=0;i<n;i++){
//         cin>>aar[i];
//     }

//     int currsum[n+1];
//     currsum[0]=0;
//     for(int i=1; i<=n; i++){
//         currsum[i]=currsum[i-1]+aar[i-1];
//     }

//     int maxsum=INT_MIN;
//     for(int i=1; i<=n; i++){
//         int sum;
//         for(int j=0; j<i; j++){
//             sum=currsum[i]-currsum[j];
//             maxsum = max(maxsum, sum);
//         }
//     }
//     cout<<maxsum<<endl;
// }




// BRUTE FORCE
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int maxSum = INT_MIN;

//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             int sum=0;
//             for(int k=i; k<=j; k++){
//                 // cout<<arr[k]<<" ";
//                 sum+=arr[k];
//             }
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout<<maxSum<<endl;
// }