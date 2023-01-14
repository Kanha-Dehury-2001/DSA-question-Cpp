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

int pivotIndexInArray(int arr[],int n){
    int s= 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s<e){
    if(arr[mid]>=arr[0] ){
            s=mid+1;
        }
        else {
           e = mid;
        }
        mid = s +(e-s)/2;
    }
    return mid;
}

int findInRotatedArray(int arr[],int s ,int e,int k){
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
 int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<endl;
    
    cout<<"Enter the element of array : ";
    int* arr = new int[n];
    inputArray(arr,n);

    cout<<"display the array : ";
    displayArray(arr,n);


    cout<<"Pivot index of array is : ";
    cout<<pivotIndexInArray(arr,n)<<endl;
    int point = pivotIndexInArray(arr,n);

    int k;
    cout<<"Enter the element to find in the array : ";
    cin>>k;
    cout<<endl;
    cout<<"the element is : ";
    if(arr[n-1]>=k && arr[point]<=k){
       cout<< findInRotatedArray(arr,point,n-1,k);
    }
    else{
        cout<<findInRotatedArray(arr,point,n-1,k);
    }
}