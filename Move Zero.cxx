#include <iostream>
using namespace std;

void enterArrayElement(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void moveZero(int a[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        
        if(a[i] != 0){
            
        swap(a[i],a[j]);
        j++;
        }
    }
}

void displayArray(int a[],int n){
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;){
        cout<<a[i++]<<" ";
    }
}

int main(){
    
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"Enter the array element";
    int a[n];
    enterArrayElement(a,n);
    
    moveZero(a,n);
    
    displayArray(a,n);    
    return 0;
}