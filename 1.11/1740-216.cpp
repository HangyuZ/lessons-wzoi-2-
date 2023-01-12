#include<bits/stdc++.h>
using namespace std;
int a;string s;stack<double>st;
void convert(){
    a=0;bool p=false;
    if(s[0]=='-') {s.erase(0,1);p=true;}
    for(int i=0;i<=s.length()-1;i++) a=a*10+s[i]-'0';
    if(p) a=-a;
}
int main(){
    //freopen("1.in","r",stdin);
    int x,y;
    while(1){
        cin>>s;
        if(s=="+"){x=st.top();st.pop();y=st.top();st.pop();st.push(x+y);}
        else if(s=="-"){x=st.top();st.pop();y=st.top();st.pop();st.push(y-x);}
        else if(s=="*"){x=st.top();st.pop();y=st.top();st.pop();st.push(x*y);}
        else if(s=="/"){x=st.top();st.pop();y=st.top();st.pop();st.push(y/x);}
        else if(s=="@") break;
        else {convert();st.push(a);}
    }
    cout<<st.top();
    //fclose(stdin);
    return 0;
}