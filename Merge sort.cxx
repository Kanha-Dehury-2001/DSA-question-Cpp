#include <iostream>
using namespace std;

void enterArrayElement(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void displayArray(int a[],int n){
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;){
        cout<<a[i++];
    }
}

int main(){
    
    int n;
    int m;
    
    
    cout<<"Enter the size of array 1 : ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the elements of array 1 : ";
    enterArrayElement(arr1,n);
    
    
    cout<<"Enter the size of array 2 : ";
    cin>>m;
    int arr2[m];
    cout<<"Enter the elements of array 2 : ";
    enterArrayElement(arr2,m);
    
      
    int temp[m+n];
    int i=0,j=0,k=0;
    
    while(i<n && j<m){
           if(arr1[i]<arr2[j]){
               temp[k++]=arr1[i++];
           }
           else{
               temp[k++]=arr2[j++];
           }
    }
    
    while(i<n){
        temp[k++]=arr1[i++];
    }
    
    while(j<m){
        temp[k++]=arr2[j++];
    }
    
    displayArray(temp,m+n);
    
    
    return 0;
    
    
}