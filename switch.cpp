#include <iostream>
using namespace std;

int main(){
    char button;
    cout<<"Enter a character :";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Hola"<<endl;
        break;
    default:
        cout<<"I m still learning"<<endl;
        break;
    }

    return 0;
}