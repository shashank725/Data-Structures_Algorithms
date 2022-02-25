#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter 2 no. :";
    cin>>n1>>n2;
    char op;
    cout<<"Input Operator :";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    default:
        cout<<"Invalid Operator"<<endl;
        break;
    }
    return 0;
}