#include<iostream>
using namespace std;

int fact(int n){
    
    if(n==0){
        return 1;
    }
     return (n*fact(n-1));
}

int main(){
    int n;
    cout<<"Enter a number to find its factorial"<<endl;
    cin>>n;

    cout<<"Factorial of the number is : "<<fact(n);
    cout<<"Completed"<<endl;
}