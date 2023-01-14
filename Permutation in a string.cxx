#include <iostream>
using namespace std;

bool check(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    
    string s1;
    cout<<"Enter the string s1 : ";
    getline(cin,s1);
    
    string s2;
    cout<<"Enter the string s2 : ";
    getline(cin,s2);
    
    int count1[26]={0};
    
    if(s1.length()>s2.length()){
        cout<<"Not Present";
        return 0;
    }
    for(int i = 0; i<s1.length();i++){
        count1[s1[i]-'a']++;
    }
    
    int i = 0 ;
    int count2[26]={0};
    int windowsize = s1.length();
    while(i<windowsize){
        count2[s2[i]-'a']++;
        i++;
    }
    if(check(count1,count2)){
        cout<<"It's there";
        return 0;
    }
    while(i<s2.length()){
        count2[s2[i]-'a']++;
        count2[s2[i-windowsize]-'a']--;
        
        if(check(count1,count2)){
        cout<<"It's there";
        return 0;
        }
    }
        
    return 0;
}