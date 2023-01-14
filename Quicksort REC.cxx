#include <iostream>
using namespace std;

int partition(int *arr,int s,int e){
    int el = arr[s];
    
    int count = 0;
    for(int i=s;i<=e;i++){
        if(arr[i]<el){
            count++;
        }
    }
    int pi = s+count;
    swap(arr[s],arr[pi]);
    
    int i=s;
    int j=e;
    
    while(i<count && j>count){
        
        while(arr[i]<el){
            i++;
        }
        while(arr[j]>el){
            j--;
        }
        if(arr[i]>arr[j]){
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pi;
}

void quickSort(int* arr,int s,int e){
    if(s>=e){
        return;
    }
    
    int p = partition(arr,s,e);
    
    quickSort(arr,s,p-1);
    
    quickSort(arr,p+1,e);
}

int main(){
    
   int n;
   cout<<"Enter the size of the array : ";
   cin>>n;
   
   int * arr = new int[n];
   
   for(int i =0;i<n;i++){
    cin>>arr[i];
   }
   
   quickSort(arr,0,n-1);
   
   for(int i =0;i<n;i++){
    cout<<arr[i]<<endl;
   }
    
    return 0;
}