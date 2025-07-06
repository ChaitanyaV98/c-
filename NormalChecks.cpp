#include <iostream>
using namespace std;
int main(){
    int a= 10;
    //first assigns and then updates
    int b=a++;
    cout<<"Values of a " << a << " Value of b "<<b << endl;
    return 0;
}