#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("1.in","r",stdin);
    stack<int>panzi;
    stack<int>washed;
    stack<int>done;
    int n;
    cin>>n;
    int a,b;
    for(int i=1;i<=n;i++) panzi.push(n+1-i);
    while(cin>>a>>b){
        if(a==1) for(int i=1;i<=b;i++) {washed.push(panzi.top());panzi.pop();}
        if(a==2) for(int i=1;i<=b;i++) {done.push(washed.top());washed.pop();}
    }
    for(int i=1;i<=n;i++) {cout<<done.top()<<endl;done.pop();}
    //fclose(stdin);
    return 0;
}