#include <iostream>
using namespace std;

 int main() 
{
    int n, ans ,m;
    cout<<"enter a number to find its complement"<<endl;
    cin>>n;
    m = n;
    int mask = 0;
    while(m!=0){
        mask = ((mask<<1)|1);
        m = m>>1;
        
    }
    
    ans = (~n) & mask;
    cout<<ans;
     
	return 0;	
}