#include <iostream>
using namespace std;

bool isSorted(int* arr,int n){
    if(n==0 || n== 1){
        return true;
    }
    
    if(*arr>*(arr+1)){
        return false;
    }
    else return isSorted((arr+1),n-1);
}

bool linearS(int *arr,int n,int m){
     if(n==0){
         return 0;
     }
     if(*arr==m){
         return 1;
     }
     else{
         return linearS(arr+1,n-1,m);
     }
}

bool binaryS(int *arr,int m, int s,int e){
    
    if(s>e){
        return 0;
    }
    
    int mid=(s+e)/2;
    
    if(arr[mid] == m){
        return 1;
    }
    else if(arr[mid]<m){
        return binaryS(arr,m,s+1,e);
    }
    else {return binaryS(arr,m,s,e-1);}
}

int main(){
    
    int n,m;
    cout<<"Enter the size of array";
    cin>>n;
    
    int * arr= new int [n];
    cout<<"Enter the array element";
    for(int i = 0;i<n;i++){
         cin>>arr[i];
    }
    cout<<"ENTER THE ELEMENT TO FIND";
    cin>>m;
    
    
    if(linearS(arr,n,m)){
     cout<<"The element is found !!!  LS"<<endl;
    }
    else{ cout<<"Not found!!!  LS"<<endl;}
    
    if(isSorted(arr,n)){
    if(binaryS(arr,m,0,(n-1))){
     cout<<"The element is found !!! BS"<<endl;
    }
    else{ cout<<"Not found!!!  BS"<<endl;}
    }
    else cout<<"array is not sorted so BS is not applicable";
    
    return 0;
}