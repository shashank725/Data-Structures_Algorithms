#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int currLen = 0, maxLen = 0;
    int start = 0, maxSt = 0;
    
    while(1){
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(currLen>maxLen){
                maxLen = currLen;
                maxSt = start;
            }
            currLen = 0;
            start = i+1;
        }
        else{
            currLen++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<< maxLen <<endl;

    // for(int i=0; i<maxLen; i++){
    //     cout<<arr[i+maxSt];
    // } // Both for does the same thing
    for(int i=maxSt; i<maxSt+maxLen; i++){
        cout<<arr[i];
    }
    cout<<endl;
}