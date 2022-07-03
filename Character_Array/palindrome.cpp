#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char arr[n+1];
    cin >> arr;

    bool check = 1;  // 1=true and 0=false
    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-(i+1)])
        {
            check = 0;
            break;
        }
    }
    if(check == true)
        cout <<"YES";
    else
        cout << "NO";


}