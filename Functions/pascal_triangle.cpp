#include<iostream>
using namespace std;

int fact(int n){
    int count = 1;
    for(int i = 1; i <= n; i++){
        count *= i;
    }
    return count;
}

int main (){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}