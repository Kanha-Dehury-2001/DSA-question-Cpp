#include <iostream>
using namespace std;

void callit(int n){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    if(n==0){
        return;
    }
    
    callit(n/10);
    
    int digit = n%10;
    
    cout<<arr[digit]<<endl;
    
    
}


int main(){
    
    int n;
    cout<<"Enter a number to call it = "<<endl;
    cin>>n;
    cout<<endl;
    
    callit(n);
    return 0;
}