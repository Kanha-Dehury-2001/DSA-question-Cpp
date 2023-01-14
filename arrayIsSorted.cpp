#include <iostream>
using namespace std;

bool isSorted(int *arr,int n){
    if(n==0 || n==1){
        return true;
    }
    
   if(arr[0] > arr[1]){
    return false;
   }
   else{
    bool r = isSorted(arr+1,n-1);
    return r;

   }
    

   
}

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    cout<<"Enter the element of the array "<<endl;
    int* arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    bool ans = isSorted(arr,n);

    if(ans){
        cout<<"The Array is Sorted "<<endl;

    }
    else {
        cout<<"The Array is not sorted "<<endl;
    }

}