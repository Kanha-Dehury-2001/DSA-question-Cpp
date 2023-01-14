#include <iostream>
using namespace std;

 int main() 
{
    cout<<"Enter the size of the arrray "<<endl;
    int n,k;
    cin>>n;
    cout<<"Enter the key to find"<<endl;
    cin>>k;
    int a[n];
    cout<<"Enter the element of the array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])==k){
                cout<<i<<"    "<<j<<endl;
            }
        }
    }
    
	return 0;	
}