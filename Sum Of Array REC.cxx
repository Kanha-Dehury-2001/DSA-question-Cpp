#include <iostream>
using namespace std;
int sumOf(int arr[],int n,int & sum){
    
    if(n==0){
        return 0;
    }
    
    sumOf((arr+1),n-1,sum);
    cout<<"("<<sum<<" , "<<*arr<<")"<<endl;
    return sum += (*arr);
}
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    
    cout<<"sum of the array = " <<sumOf(arr,n,sum);
    return 01;
}