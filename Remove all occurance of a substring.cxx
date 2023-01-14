#include <iostream>
#include <string>
using namespace std;

int main(){
    
    
    string s;
    cout<<"Enter the sing : ";
    getline(cin,s);
    
    string part;
    cout<<"Enter the sing part : ";
    getline(cin,part);
    
    while(s.length()!=0 && s.find(part)<s.length())
     {
         s.erase(s.find(part),part.length());
     }
        cout<<s;
        
    
    return 0;
}