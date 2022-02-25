#include<iostream>
using namespace std;

// // Star pattern
// int main(){
//     int row, col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// // Hollow Star pattern
// int main(){
//     int row, col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1; j<=col;j++){
//             if(i==1 || i==row || j==1 || j==col){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// // Inverted Half Pyramind
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         // OR
//         // for(int j=i;j>=1;j--){
//         //     cout<<"*";
//         // }
//         cout<<endl;
//     }
//     return 0;
// }



// // Inverted Half Pyramind
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// // Half Pyramid using Nummbers
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// // Floyd's triangle
// int main(){
//     int count=1, n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count<<"  ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Butterfly Pattern
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
