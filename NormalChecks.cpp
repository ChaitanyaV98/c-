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
    cout << "Lower case\n";
  }
//ternary operator
  int n= 9;
  cout<< (n >= 0?"positive":"negative")<<endl;

  // while loop
  int count= 0;
  while(count<=n){
    cout<<count<<" ";
    count++;
  }
  cout<<endl;
//printing i
  for(int i=0; i<=n;i++){
    cout<<i<<" ";
  }
  cout<<endl;


  //sum of n numbers
  int sum=0;
  for(int i=0;i<=n;i++){
sum+=i;
  }

  cout<<sum<<endl;
int oddSum=0;
for(int i=0;i<n;i++){
    if(i%2!=0){
        oddSum+=i;
    }
}

cout<< oddSum<<endl;
bool isPrime=true;
for(int i=2;i*i<n;i++){
    if(n%i==0){
        isPrime=false;
    }
}

cout<<(isPrime?"prime number": "non prime")<<endl;

int j=1;
do{
    cout<<j<<" ";
    j++;
}while(j<=n);
cout<<endl;


int x=10;
int y=5;
//printing 10 stars in single line
for(int i=1; i<=y; i++){ //decides how many lines
    for(int i=1;i<=x;i++){// no.of starts in each row
        cout<<"*";
    }

    cout<<endl;
    
}
cout<<endl;

    return 0;
}


