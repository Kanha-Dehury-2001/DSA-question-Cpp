#include <iostream>
using namespace std;

bool checkPalindrome(string a,int n){
    int j = n-1;
    for(int i= 0;i<n;i++){
        if(a[i]!=a[j--]){
            return 0;
        }
    }
    return 1;
}

int main(){
    cout<<"Enter the string"<<endl;
    string str1;
    cin>>str1;
    
   /* cout<<"Enter the string"<<endl;
    string str2;
    cin>>str2;
    
    cout<<"Enter the string"<<endl;
    string str3;
    cin>>str3;*/
    
    string str4 = str1;// + str2 + str3;
    
    int n = str4.length();
    for(int i = 0 ;i<=n;i++){
        if(str4[i]>='A' && str4[i]<='Z'){
            str4[i]=str4[i]-'A'+'a';
        }
    }
    
    
    cout<<str4;
    if(checkPalindrome(str4,str4.length())){
        cout<<"It's a palindrome "<<endl;
    }
    else{
        cout<<"It's not a palindrome";
        }
    
    return 0;
}