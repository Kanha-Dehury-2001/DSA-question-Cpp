#include <iostream>
using namespace std;

int pofstair(int n){
    
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    
    
    
    return (pofstair((n-1))+pofstair((n-2)));
}
int main(){
    int n;
    cout<<"Enter the no of stairs = ";
    cin>>n;
    cout<<endl;
    
    cout<<pofstair(n);
    
    return 0;
}