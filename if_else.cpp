#include <iostream>
using namespace std;

int main(){
    int saving;
    cin>>saving;

    if(saving>5000){
        if(saving>10000){
            cout<<"Roadtrip with Neha\n";
        } else {
            cout<<"Shopping with Neha\n";
        }
    }else if(saving>2000){
        cout<<"Rashmi\n";
    }else {
        cout<<"Friends\n";
    }
    return 0;
}

