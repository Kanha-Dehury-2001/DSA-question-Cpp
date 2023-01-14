#include <iostream>
#include <vector>
using namespace std;

int main(){
    int row,col;
    cout<<"enter the size of row and col";
    cin>>row;
    cout<<endl;
    cin>>col;
    
    int arr2[row][col];
    for(int i =0;i<row;i++){
        for(int j =0 ;j<col;j++){
            cin>>arr2[i][j];
        }
        cout<<endl;
    }
    //for displaying the 2D array
    for(int i =0;i<row;i++){
        for(int j =0 ;j<col;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //For the row sum
    int sum=0;
    int maxr=-1;
    int ri = -1;
    for(int i =0;i<row;i++){
        sum=0;
        for(int j =0 ;j<col;j++){
            sum+=arr2[i][j];
            if(maxr<sum){
                maxr=sum;
                ri=i;
            }
        }
        cout<<"Row sum of row : "<<(i+1)<<" "<<sum; 
        cout<<endl;
    }
    cout<<"Maximum sum of the row is "<<maxr<<" of "<<(ri+1)<<" row "<<endl;
    
    //For the col sum
    int sumr=0;
    int maxi=-1;
    int ci = -1;
    for(int i =0;i<col;i++){
        sumr=0;
        for(int j =0 ;j<row;j++){
            sumr+=arr2[j][i];
            if(maxi<sumr){
                maxi=sumr;
                ci=i;
            }
        }
        cout<<"Col sum of col : "<<(i+1)<<" "<<sumr; 
        cout<<endl;
    }
    cout<<"Maximum sumr of the col is "<<maxi<<" of "<<(ci+1)<<" col "<<endl;
    vector<int>arr3;
    //For prnting wave of 2D array
    for(int i =0 ;i<col;i++){
        if(i%2==0){
            for(int j =0 ;j<row;j++){
                arr3.push_back(arr2[j][i]);
            }
        }
        else{
             for(int j = col-1;j>=0;j--){
                 arr3.push_back(arr2[j][i]);
             }
        
        }
        cout<<endl;
    }
                
    for(auto i = arr3.begin();i<arr3.end();i++){
         cout<<*i<<" ";
        }
    
    
    return 0;
}