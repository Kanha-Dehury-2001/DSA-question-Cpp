#include <iostream>
using namespace std;

 int main() 
{
    int n;
    cin>>n;
    
    int product=1,sum=0;
    
    while(n){
        int ans = n%10;
        
        product = product * ans;
        
        sum = sum + ans;
        
        n=n/10;
    }
    
    cout<<product<<"-"<<sum<<"="<<(product-sum);
    
	return 0;	
}