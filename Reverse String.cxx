#include <iostream>
#include <array>
using namespace std;

string reverseString(string arr3, int n){ 
    int s=0;
    int e=n-1;
    
    while(s<e){
        swap(arr3[s++],arr3[e--]);
    }
    
    return arr3;
}

int main(){
    
    string str1= "Kanha";
    string str2 = " Dehury";
    
    string str3 = str1 + str2;
    
    cout<<reverseString(str3,str3.length());
    
    //cout<<str3;
    
    return 0;
}