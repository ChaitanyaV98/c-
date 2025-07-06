#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string"<<endl;
   // cin>>str this takes only single character, instead do the below way
   getline(cin, str);
   cout<< "string entered is "<< str<<endl;
   return 0;
}