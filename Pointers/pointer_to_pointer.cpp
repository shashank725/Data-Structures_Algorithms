// pointer to pointer dereferencing

#include <iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr = &a;
    cout<<ptr<<" "<<*ptr<<endl;

    int **ptrptr = &ptr;
    cout<<ptrptr<<" "<<*ptrptr<<" "<<**ptrptr<<endl;
}