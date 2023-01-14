#include <iostream>
using namespace std;

int fibonaci(int n){
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    
    
    
    return (fibonaci((n-1))+fibonaci((n-2)));
}
int main(){
    int n;
    cout<<"Enter the no of term to find fibonacci series = ";
    cin>>n;
    cout<<endl;
    
    cout<<fibonaci(n);
    
    return 0;
}