#include <iostream>
using namespace std;

int arraySum(int* arr,int n){
    if(n-1 == 0 ){
        return arr[0];
    }


    return arr[0]+arraySum(arr+1,n-1);
}

int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;

    int * arr= new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    int sum = arraySum(arr,n);
    cout<<"Sum Of Array : "<<sum;
}