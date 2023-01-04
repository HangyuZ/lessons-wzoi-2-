#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>v;
    stack<double>c;
    int a,b;
    cin>>a>>b;v.push(a);c.push(b);
    int n;cin>>n;char act;
    while(n--){
        cin>>act;
        if(act=='P'){
            cin>>a>>b;
            c.push(((c.top()*v.top())+a*b)/(v.top()+a));
            v.push(v.top()+a);
        }
        else if(v.size()!=1){
            v.pop();
            c.pop();
        }
        cout<<v.top();
        printf(" %.5lf\n",c.top());
    }
    return 0;
}