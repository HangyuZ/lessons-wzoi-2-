#include<bits/stdc++.h>
using namespace std;
int grade(char c);
int main(){
    freopen("1.in","r",stdin);
    stack<char>st;
    string s;
    int n;cin>>n;
    for(int j=1;j<=n;j++){
        getline(cin,s);int a=0;
        for(int i=0;i<=s.length()-1;i++){
            char c=s[i];
            if(st.empty()) {a=grade(c);st.push(c);}
            else if(grade(c)>a) {cout<<"NO"<<endl;break;}
            else if(c-1==st.top() or c==st.top()-1 or c-2==st.top() or c==st.top()-2) st.pop();
            else st.push(c);
        }
        if(st.empty()) cout<<"YES"<<endl;
    }
    fclose(stdin);
    return 0;
}
int grade(char c){
    if(c=='<' or c=='>') return 1;
    else if(c=='(' or c==')') return 2;
    else if(c=='[' or c==']') return 3;
    else return 4;
}