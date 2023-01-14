#include <iostream>
using namespace std;

bool reverseString(string& s,int st,int e){
    if(st>e){
        return true;
    }

    if(s[st]!=s[e]){
        return false;
    }

    reverseString(s,st+1,e-1);
}

int main(){
    string s ;
    cout<<"Enter the string to find its reverse"<<endl;
    getline(cin,s);
    int size=s.size();
   bool ans= reverseString(s,0,size-1);
    if(ans){
        cout<<"The String is a Palindrome";
    }
    else{
        cout<<" The String is not a palindrome";
    }
}