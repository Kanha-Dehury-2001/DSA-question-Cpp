#include <bits/stdc++.h> 
#include <string>
using namespace std;


bool valid(char s){
    if(s>= 'a' && s<='z' || s>='A' && s<='Z' || s<=57 && s>=48){
        return 1;
    }
    else return 0;
}

char toLow(char s){
    if(s>='A' && s<='Z'){
       char temp = (s - 'A' + 'a');
	   return temp;
    }
     else if(s>=0 && s<=9 && s>= 'a' && s<= 'z' ){
         return s;
     }
} 

bool checkP(string s){
    int i =0;
    int j = s.length()-1;
    
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main(){
	
    string s("A1b22@Ba");
   
   
    string temp= "";

    for(int i = 0;i<s.length();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    cout<<temp<<endl;
    for(int i = 0; i<temp.length();i++){
        temp[i]=toLow(temp[i]);
    }
	cout<<temp;
	cout<<checkP(temp);


}