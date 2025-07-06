#include <iostream>
using namespace std;

int main(){

    int n;
    int rev=0;


    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int sign=(n<0)? -1:1;
    n=abs(n);

    while(n>0){    
        rev= rev*10+n%10;
        n=n/10;
    }
    cout<<"reversed number is "<< rev<< endl;
    rev= rev*sign;
    cout<<"reversed number is "<< rev<< endl;
    return 0;
}