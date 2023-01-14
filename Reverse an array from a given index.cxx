#include <iostream>
#include <algorithm>
using namespace std;

void displayArray(int a[],int n){
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;){
        cout<<a[i++];
    }
}

int main(){
    
    int n;
    cout << "Enter the size of the array";
    cin>>n;
    
    int a[n];
    cout<<"Enter the element of the array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int key;
    cout<<"Enter the index from where to reverse the array : ";
    cin>>key;
    
    int s=key;
    int e=n-1;
    
    while(s<e){
        swap(a[s++],a[e--]);
    }
    
    displayArray(a,n);
    
    
    return 0;
}