#include <iostream>
using namespace std;

 int main() 
{
    int n;
    cin>>n;
    
    int ans=0;
    
    while(n){
        int ld = n % 10;
        if(ans<(INT_MAX*10)){
        ans = (ans*10) + ld ;
        }
        n = n/10;
    }
    cout<<ans;
    
	return 0;	
}