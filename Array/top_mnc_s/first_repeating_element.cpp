// amazon, oracle  

#include<iostream>
using namespace std;
#include<climits>

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    const int N=1e6+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i]=-1;
    }
    
    int min_idx=INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]] != -1){
            min_idx=min(min_idx, idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(min_idx==INT_MIN){
        cout<<"-1"<<endl;
    }
    else{
        cout<<min_idx<<endl;
    }

    return 0;
}