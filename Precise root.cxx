#include <iostream>
using namespace std;

double squareRoot(int a){
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


double preciseRoot(int a,int n){
    double ans = squareRoot(a);
    double factor=1;
     
    for(int i=0;i<n;i++){
        factor=factor/10;
        
        for(double j=ans;j*j<a;j=j+factor){
                ans=j;
        }
    }
    return ans;
}


 int main() 
{
    cout<<"Enter the number to find the square root "<<endl;
    int n,m;
    cin>>n;
    cout<<"Enter to which decimal point you want to find "<<endl;
    cin>>m;
    cout<<"The square root of the number "<<preciseRoot(n,m);
	return 0;
}