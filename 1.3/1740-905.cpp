#include<bits/stdc++.h>
using namespace std;
char c;stack<char>st;string s;
int main(){
    int n;
    // freopen("1.in","r",stdin);
    cin>>n;
    int sum=0;
    while(n--){
        while(!st.empty()) st.pop();//clear st
        cin>>s;
        for(int i=0;i<=s.length()-1;i++){
            c=s[i];
            if(st.empty()) st.push(c);
            else if(c==st.top()) st.pop();
            else st.push(c);
        }
        if(st.empty()) sum++;
    }
    cout<<sum;
    // fclose(stdin);
    return 0;
}