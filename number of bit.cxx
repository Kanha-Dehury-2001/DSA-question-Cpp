#include <iostream>
using namespace std;

 int main() 
{
    int n;
    cin>>n;
    int ans=0;
    while(n){
        if((n&1)==1){
           ans++;
        }
        n=n>>1;
    }
    cout<<ans;
    
	return 0;	
}