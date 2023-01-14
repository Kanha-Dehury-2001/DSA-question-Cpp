#include <iostream>
using namespace std;

void reverseA(int a[],int n){
    int j =(n-1);
    for(int i=0;i<j;i++){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
}


 int main() 
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"Enter the element of an array";
    int a[n];
    int sum = 0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    
    cout<<"Sum of element of an array is = "<<sum<<endl;
    cout<<"Reverse of an array";
    reverseA(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    
	return 0;	
}