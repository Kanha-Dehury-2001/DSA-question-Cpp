#include <iostream>
using namespace std;

int bSearch(int a[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        
        if(a[mid]==k){
            return 1;
        }
        else if(a[mid]<k){
            s=mid+1;
        }
        else {e=mid-1;}
        
        cout<<"mid"<<mid<<endl;
        mid = s+(e-s)/2;
    }

    
    return -1;
}
int main(){
    int n,k;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"enter the key to find"<<endl;
    cin>>k;
    
    cout<<bSearch(a,n,k)<<endl;
    
    return 0;
}