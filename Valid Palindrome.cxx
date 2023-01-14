#include <iostream>
#include <vector>
using namespace std;

bool checkPalindrome(vector<char> a,int n){
    int j = n-1;
    for(int i= 0;i<n;i++){
        if(a[i]!=a[j--]){
            return 0;
        }
    }
    return 1;
}

int main(){
    
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    cout<<"The string is : "<<str<<endl;
    int n = str.length();
    
    vector<char> ch;
    
    for(int i = 0 ; i<n;i++){
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='0' && str[i]<='9')||(str[i]>='a' && str[i]<='z')){
            if(str[i]>='A' && str[i]<='Z'){
                ch.push_back(str[i]-'A'+'a');
            }
            else{
                ch.push_back(str[i]);
            }
        }
    }
    cout<<"The final string is : ";
    for(auto i = ch.begin();i!=ch.end();i++){
        cout<<*i<<" ";
    }
    
    if(checkPalindrome(ch,ch.size())){
        cout<<"It's a palindrome "<<endl;
    }
    else{
        cout<<"It's not a palindrome";
        }
            
    
    return 0;
}