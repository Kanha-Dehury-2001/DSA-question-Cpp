#include <iostream>
#include <string>
using namespace std;

void reverseS(string & a,int s,int e){
    if(s>e){
        return;
    }
    swap(a[s],a[e]);
    s++;
    e--;
    reverseS(a,s,e);
}

bool isPalindrome(string& a,int s, int e){
    if(s>e){
        return 1;
    }
    if(a[s]!=a[e]){
        return 0;
    }
    s++;
    e--;
    return isPalindrome(a,s,e);
}
int main(){
    string a;
    getline(cin,a);
    
    
    reverseS(a,0,a.length()-1);
    cout<<a<<endl;
    
    cout<<isPalindrome(a,0,a.length()-1)<<endl;
    return 0;
    
    
}