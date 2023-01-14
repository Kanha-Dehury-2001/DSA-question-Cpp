#include <iostream>
using namespace std;

int main(){
    
    string chars;
    cout<<"Enter the string to compress : .";
    getline(cin,chars);
    
    int i=0;
    int ansIndex=0;
    int count=0;
    
    while(i<chars.length()){
        int j=i+1;
        while(j<chars.length() && chars[i]==chars[j]){
                j++;
            }
        
        chars[ansIndex++]=chars[i];
        
        count=j-i;
        
        
        if(count>1){
        string cou = to_string(count);
        
        for(int k : cou){
           chars[ansIndex++]=k;
           }
        }
            
    i=j;   
}
    
   cout<<ansIndex<<endl<<chars;
    return 0;
}