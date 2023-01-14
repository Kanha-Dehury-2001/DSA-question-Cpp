#include <iostream>
using namespace std;

int findMountainarr(int a[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
         if(a[mid]< a[mid+1]){
            s=mid+1;
        }
        else {e=mid;}
        
        mid =s+(e-s)/2; 
        
    }
    return mid;
}

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int a[n];
    cout<<"enter the element of the array";
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"the peak element of mountain array is  "<<findMountainarr(a,n)<<endl;
    return 0;
}