#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string"<<endl;
   // cin>>str this takes only single character, instead do the below way
   getline(cin, str);
   cout<< "string entered is "<< str<<endl;
   string rev;
   for(int i=str.length()-1; i>=0;i--){
    rev= rev+str[i];
   }
cout<<"Reversed string is "<<rev<< endl;
   if (str == rev) {
    cout << "The given string is a palindrome" << endl;
} else {
    cout << "Not a palindrome" << endl;
}
//    cout << "reversed string is "<<rev<<endl;
   return 0;
}