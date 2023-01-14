#include <iostream>
using namespace std;

 int main() 
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    
    int a[n];
    cout<<"Enter the element of the array"<<endl;
	
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	for(int i=0;i<n;i+=2){
        
        if(i<(n-1)){
        int temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
    	    
	cout<<"Swaped Array is : "<<endl;
	for(int i=0;i<n;i++){
	    cout<<a[i]<<"  ";
	}
	
	return 0;	
}