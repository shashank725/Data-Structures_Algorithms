#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<*arr<<endl<<"\n";

    int *ptr = arr;

    for(int i=0;i<5;i++){
        cout<<ptr<<" = "<<*ptr<<endl;
        ptr++;
    }

    cout<<"\n";

    // Can also be writtren as
    for(int i=0;i<5;i++){
        cout<<arr+i<<" = "<<*(arr+i)<<endl;
        // arr++;   //This will not work as it is a pointer
    }
}