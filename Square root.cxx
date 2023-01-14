#include <iostream>
using namespace std;

int squareRoot(int a){
    int s=1,e=a;
    int ans;
    int mid=s+(s+e)/2;
    while(s<=e){
        if((mid*mid)==a){
            return mid;
        }
        else if((mid*mid)>a){
            e=mid-1;
        }
        else{
            ans = mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
            

 int main() 
{
    cout<<"Enter the number to find the square root "<<endl;
    int n;
    cin>>n;
    
    cout<<"The root of the number is "<<squareRoot(n)<<endl;
    
	return 0;	
}