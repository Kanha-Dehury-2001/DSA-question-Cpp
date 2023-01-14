#include <iostream>
using namespace std;
int firstP(int a[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(a[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]>k){
            e=mid -1;
        }
        else {
            s = mid+1;
        }
    
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastP(int a[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(a[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(a[mid]>k){
            e = mid -1;
        }
        else {
            s = mid+1;
        }
    
        mid=s+(e-s)/2;
    }
    return ans;
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
    int k;
    cout<<"Enter the number to find its first and last position";
    cin>>k;
    int F=firstP(a,n,k);
    int L=lastP(a,n,k);
    int T=(L-F)+1;
    
    cout<<"First occ"<<F<<"Last Occ"<<L<<"Total occ"<<T;
    
    return 0;
}