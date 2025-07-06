#include <iostream>
using namespace std;
int main(){
    int a= 10;
    //post increment: first assigns and then updates
    int b=a++;
    cout<<"Values of a " << a << " Value of b "<<b << endl;

    //pre increment : first updates happen and then assigns
    int c = 2;
    int d = --c; // c=c-1 and then d=c
    cout<<"Values of c " << c << " Value of d "<< d << endl;



    return 0;
}