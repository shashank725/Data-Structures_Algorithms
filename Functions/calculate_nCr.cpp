// nCr = n!/((n-r)! * r!)

#include<iostream>
using namespace std;

int fact(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        count=count*i;    //count*=i
    }
    return count;
}

int main(){
    int n, r;
    cin>>n>>r;
    int ans = fact(n)/(fact(n-r)*fact(r));
    cout<<ans<<endl;
    return 0;
}