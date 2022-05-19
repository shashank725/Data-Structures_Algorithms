#include <iostream>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix :"<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int key;
    cin>>key;
    bool flag = false;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]==key){
                cout<<"Found at "<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }
    if(flag){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }


}