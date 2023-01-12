#include<bits/stdc++.h>
using namespace std;
char c;
stack<char>st;
string s;
int a;
int grade(char s){
    if(s=='<' or s=='>') return 1;
    else if(s=='(' or s==')') return 2;
    else if(s=='[' or s==']') return 3;
    else return 4;
}
int main(){
    freopen("1.in","r",stdin);
    int n;cin>>n;
    for(int times=1;times<=n;times++){
    getline(cin,s);
    bool successd=0;
    for(int i=0;i<=s.length()-1;i++){
        c=s[i];
        if(st.empty()){st.push(c);a=grade(c);}
        else if(grade(c)>a) break;
        else if (c-1==st.top() or c==st.top()-1 or c-2==st.top() or c==st.top()-2) st.pop();
        else st.push(c);
        if(i==s.length()-1) successd=1;
    }
    if(successd==1 and st.empty()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    }
    fclose(stdin);
    return 0;
}