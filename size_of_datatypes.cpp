#include <iostream>
using namespace std;

int main(){
    int a;
    a=10;
    cout<<"size of int: "<<sizeof(a)<<endl;
    float b;
    cout<<"size of float: "<<sizeof(b)<<endl;
    char c;
    cout<<"size of char: "<<sizeof(c)<<endl;   
    bool d;
    cout<<"size of bool: "<<sizeof(d)<<endl;

    // Type Modifers
    signed int e;
    cout<<"size of signed int: "<<sizeof(e)<<endl;
    unsigned int f;
    cout<<"size of unsigned int: "<<sizeof(f)<<endl;
    short int g;
    cout<<"size of short int: "<<sizeof(g)<<endl;
    long int h;
    cout<<"size of long int: "<<sizeof(h)<<endl;

    return 0;
}