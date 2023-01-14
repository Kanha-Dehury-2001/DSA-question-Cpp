#include <iostream>
using namespace std;

void enterArrayElement(int a[],int n){
    cout<<"Enter the element of array : ";
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

bool checkSortedRotated(int a[],int n){
    int count =0 ;
    int i=1;
    while(i<n){
        if(a[i-1]>a[i]){
            count++;
        }
        i++;
    }
    
    if(a[0]<a[n-1]){
        count++;
    }
    return count<=1;
}
        
    
    
    

int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int a[n];
    enterArrayElement(a,n);
    
    cout<<" "<<checkSortedRotated(a,n)<<" ";
    
    
    
    
    
    return 0;
}