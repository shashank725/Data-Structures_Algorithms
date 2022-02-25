#include<iostream>
using namespace std;

#include<cmath>
// // Prime no.
// int main(){
//     int n;
//     cin>>n;
//     int flag=0;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             cout<<"Non-Prime"<<endl;
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         cout<<"Prime"<<endl;
//     }
//     return 0;
// }



// // Reverse a No.
// int main(){
//     int n;
//     cin>>n;
//     int reverse=0;
//     while(n>0){
//         int lastdigit=n%10;
//         reverse=reverse*10 + lastdigit;
//         n=n/10;
//     }
//     cout<<reverse<<endl;
//     return 0;
// }



// Armstrong no.
#include<math.h>
int main(){
    int n;
    cin>>n;
    float sum=0;
    int original=n;
    while(n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    cout<<sum<<endl;
    if(sum==original){
        cout<<"Armstrong no."<<endl;
    }
    else{
        cout<<"Not an Armstrong no."<<endl;
    }
    
    return 0;
}