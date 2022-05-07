#include<iostream>
using namespace std;

void fact(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        count=count*i;    //count*=i
    }
    cout<<count<<endl;
}

int main(){
    int n;
    cin>>n;
    fact(n);
    return 0;
}