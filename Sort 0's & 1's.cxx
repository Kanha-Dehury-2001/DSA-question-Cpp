#include <iostream>
using namespace std;

 int main() 
{
    cout<<"Enter the size of the arrray "<<endl;
    int n;
    cin>>n;
    
    int a[n];
    cout<<"Enter the 0's and 1's array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int f,l;
    f = 0;
    l = n-1;
    
    while(f<l){
        while(a[f]==0 && f<l){
            f++;
        }
        while(a[l]==1 && f<l){
            l--;
        }
        if(f < l){
            
            a[f]=0;
            a[l]=1;
            f++;
            l--;
            }
    }    
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
	return 0;	
}