#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3};
    
    for(int i=0;i<arr2.size();i++){
        arr1.push_back(arr2.at(i));
    }
    
    for(auto vi=arr1.begin();  vi!=arr1.end() ;vi++){
        cout<<*vi<<" ";
    }
    cout<<endl;
    
    sort(arr1.begin(),arr1.end());
    
    for(auto vi=arr1.begin();  vi!=arr1.end() ;vi++){
        cout<<*vi<<" ";
    }
    
    return 0;
}