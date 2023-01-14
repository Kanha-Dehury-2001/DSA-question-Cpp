#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int m;
    cin>>m;
    
    int a[n];
    int b[m];
    
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<m;i++){
        cin>>b[i];
    }
    int i=0,j=0;    
    while((i<n)&&(j<m)){
        
        if(a[i]==b[j]){
            cout<<a[i]<<endl;
            i++;
            j++;
          //continue;
        }
        else if(a[i]<b[j]){
            i++;
          //continue;
            
        }
        else if(a[i]>b[j]){
             j++;
     //   continue;
        }
    }
        
        
        
    return 0;
}