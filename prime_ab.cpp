#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            cout<<"Outside IF :"<<num<<endl;
            if(num%i==0){
                break;
                cout<<"IF :"<<num<<endl;
            }
        }
        cout<<"1st loop"<<endl;
        if(i==num){
            cout<<num<<endl;
        }
    }
    return 0;
}