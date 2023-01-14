#include<iostream>
using namespace std;

void callItOut(string arr[],int &n){
    if(n==0){
        return;
    }

    int digit = n%10;
    n=n/10;
    

    callItOut(arr,n);
    cout<<arr[digit]<<" ";
}

int main(){
    int n;
    cout<<"Enter the number to call out"<<endl;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    callItOut(arr,n);
}