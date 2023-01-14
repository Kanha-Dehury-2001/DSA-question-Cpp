#include <iostream>
#include <string>
using namespace std;

int main(){
    
    cout<<"Enter the string"<<endl;
    string s;
    getline(cin,s);
    
    string temp = "", ans="";
    
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            continue;
        }
        else if(s[i+1]==' '){
            temp.push_back(s[i]);
            ans= temp+" "+ans;
            temp="";
            
            
        }
        else {
            temp.push_back(s[i]);
        }   
    }
     if(s[s.size()-1]!=' '){
            ans=temp+" "+ans;
        }
        ans.pop_back();   
        cout<<ans<<"||";
    
    return 0;
}