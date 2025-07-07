#include <iostream>
using namespace std;
int main(){
    int a= 10;
    //post increment: first assigns and then updates
    int b=a++;
    cout<<"Values of a " << a << " Value of b "<<b << endl;

    //pre increment : first updates happen and then assigns
    int c = 2;
    int d = ++c; // c=c+1 and then d=c
    cout<<"Values of c " << c << " Value of d "<< d << endl;

//similarly we have predecrement and post decrement


//check if the ch is upper case or lower case
char ch;
cout<<"Enter char: \n";

cin>>ch;

// if(ch >= 'a' && ch <= 'z'){
//     cout<<"lower case\n";
// }
// else if(ch >='A' && ch<='Z'){
//     cout<<"UPPER case\n";
// }

if(ch >= 65 && ch <= 90){// here when u enter a ch implicit type conversion happens
    cout<<"upper case\n";
}

else {
    c
    out << "Lower case\n";
  }

  int n= 10;
  cout<<n>=0?"positive":"negative"<<endl;
    return 0;
}