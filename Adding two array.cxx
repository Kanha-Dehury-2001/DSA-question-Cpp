#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void enterArrayElement(int a[],int n){
    cout<<"Enter the element of array ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

int main(){
    
    int n;
    cout<<"Enter the size of first array";
    cin>>n;
    int arr1[n];
    enterArrayElement(arr1,n);
    
    
    int m;
    cout<<"Enter the size of second array";
    cin>>m;
    int arr2[m];
    enterArrayElement(arr2,m);
    
    int i=n-1,j=m-1;
    int sum = 0;
    vector <int> v ;
    int carry = 0;
    
    
    while(i>=0 && j>=0){
        sum=arr1[i] + arr2[j] + carry;
        carry = sum / 10 ;
        sum = sum % 10 ;
        v.push_back (sum);
        i--;
        j--;
    }
    
    while(i>=0){
        sum=arr1[i] + carry;
        carry = sum / 10 ;
        sum = sum % 10 ;
        v.push_back (sum);
        i--;
        
    }
    
    while(j>=0){
        sum=arr2[j] + carry;
        carry = sum / 10 ;
        sum = sum % 10 ;
        v.push_back (sum);
        j--;
    }
    
    if(carry!=0){
        v.push_back(carry);
    }
  
  reverse(v.begin(),v.end());
  
   for (auto vi = v.begin(); vi != v.end(); ++vi) {

        cout << *vi << " ";
}    


    return 0;
}Array(anss,(n+m));
  
  reverse(v.begin(),v.end());
  
   for (auto vi = v.begin(); vi != v.end(); ++vi) {

        cout << *vi << " ";
}    


    return 0;
}
