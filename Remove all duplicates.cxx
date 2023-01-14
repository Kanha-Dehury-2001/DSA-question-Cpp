#include <iostream>
using namespace std;

int main(){
    
    string s;
    cout<<"Enter the sing : ";
    getline(cin,s);
    
    int st = 0;
    int e = st+1;
    
    while(st<s.length() && e<s.length()){
        if(s[st]==s[e]){
            s.erase(st,2);
            st=0;
            e=st+1;
        }
        else{
            st++;
            e++;
            
        }
        
    }
    cout<<s;
    return 0;
}