#include <iostream>
using namespace std;

void reverseString(string& s,int st,int e){
    if(st>e){
        return ;
    }

    swap(s[st],s[e]);

    reverseString(s,st+1,e-1);
}

int main(){
    string s ;
    cout<<"Enter the string to find its reverse"<<endl;
    getline(cin,s);
    int size=s.size();
    reverseString(s,0,size-1);
    cout<<s;
}