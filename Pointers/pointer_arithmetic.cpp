// can only do ++, --, --, ++

#include <iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr =&a;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    aptr++;
    cout<<aptr<<endl;
    aptr--;
    cout<<aptr<<endl;


    char ch = 'A';
    char *cptr = &ch;
    cout<<cptr<<endl;
    cout<<*cptr<<endl;
    cptr++;
    cout<<cptr<<endl;
    cptr--;
    cout<<cptr<<endl;
}
