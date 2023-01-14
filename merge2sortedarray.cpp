 #include <bits/stdc++.h>
using namespace std;

void inputArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
}

void displayArray(int* arr,int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void mergeSort(int arr1[],int arr2[],int n,int m){

    int i = n-m-1;
    int j = m-1;
    int k = n-1;
    cout<<" check ";
    while(i>=0 && j>=0){
        if(arr1[i]<arr2[j]){
            arr1[k--]=arr2[j--];
        }
        else {
            arr1[k--]=arr1[i--];
        }
    }
}


int main(){
    int n;
    cout<<"Enter the size of array 1: ";
    cin>>n;
    cout<<"Enter the element of array 1: ";
    int* arr1 = new int[n];
    inputArray(arr1,n);
    cout<<"display the array 1: ";
    displayArray(arr1,n);

    cout<<endl;

    int m;
    cout<<"Enter the size of array 2: ";
    cin>>m;
    cout<<"Enter the element of array 2:  ";
    int* arr2 = new int[m];
    inputArray(arr2,m);
    cout<<"display the array 2: ";
    displayArray(arr2,m);

    mergeSort(arr1,arr2,n,m);

    displayArray(arr1,n);

}