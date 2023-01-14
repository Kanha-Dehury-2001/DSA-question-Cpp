#include <iostream>
using namespace std;

double findPow(long int a,long int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    double ans = findPow(a,b/2);
    if((b%2)==0){
        return  (ans * ans);
    }
    else return (a * ans * ans);
}
int main(){
    long int a,b;
    cout<<"Enter a number to find its Power = "<<endl;
    cin>>a;
    cout<<"Enter the power of the number = "<<endl;
    cin>>b;
    
    cout<<"Power of "<<a<<"^"<<b<<" = "<<findPow(a,b)<<endl;
    return 0;
}