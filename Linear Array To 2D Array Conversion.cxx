#include <iostream>
using namespace std;

int main(){
    
    int arr[4];
    cout<<"Enter the element in the array ";
    
    for(int i = 0;i<4;i++){
        cin>>arr[i];
    }
    int col = 2, row = 2;
    int arr2[row][col];
    
    for(int i=0;i<4;i++){
        
        arr2[i/col][i%col]=arr[i];
    }
    for(int i =0;i<row;i++){
        for(int j =0 ;j<col;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}