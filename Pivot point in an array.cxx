#include <iostream>
using namespace std;

int pivotPoint(int a[],int n){
    int s=0,e=(n-1);
    int mid=s+(e-s)/2;
    
    while(s<e){
        
        if(a[0]<a[mid]){
            s=mid+1;
        }
        else if(a[0]>a[mid]){
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
            


 int main() 
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    
    cout<<"Enter the element if the array"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int m=pivotPoint(a,n);
    cout<<"The pivot point index is "<<m;
    
	return 0;	
}