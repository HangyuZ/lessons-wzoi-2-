#include<bits/stdc++.h>
using namespace std;
char c;stack<char>st;string s;
int main(){
    //freopen("1.in","r",stdin);
    getline(cin,s);
    for(int i=0;i<=s.length()-1;i++){
        c=s[i];
        if(st.empty()) st.push(c);
        else if(c-1==st.top() or c==st.top()-1 or c-2==st.top() or c==st.top()-2) st.pop();
        else st.push(c);
    }
    if(!st.empty()){cout<<"Wrong";return 0;}
    cout<<"OK";
    //fclose(stdin);
    return 0;
}