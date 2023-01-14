#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s = "Kanha";

    stack <int> st;

    for(int i = 0; i< s.size();i++){
        st.push(s[i]);
    }

    string ans = "";

    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout<<"The reversed string is : "<<ans;

    return 0;
}