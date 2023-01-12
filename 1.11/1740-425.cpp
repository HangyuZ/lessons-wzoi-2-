#include<bits/stdc++.h>
using namespace std;
stack<int> s1;//stroage num
stack<char> s2;//stroage char
string s;
int level(char p){
	if (p == '+' || p == '-')	return 1;
	if (p == '*' || p == '/')	return 2;
	if (p == '^')	return 3;
	return 0;
}
void calc(){
	int n,m;
	n=s1.top();
	s1.pop();
	m=s1.top();
	s1.pop();
	char z=s2.top();
	s2.pop();
	switch (z){
		case '+':s1.push(m + n);break;
		case '-':s1.push(m - n);break;
		case '*':s1.push(m * n);break;
		case '/':s1.push(m / n);break;
		case '^':s1.push(pow(m, n));break;
		default:break;
	}
	return;
}
int main()
{
	cin >> s;
	s = '(' + s + ')';
	int i=0;
	char ch = '(';
	do{
		if(ch=='('){
			s2.push('(');
		}
		else if(ch == ')'){
			while (s2.top() != '(') calc();
			s2.pop();
		}
		else if (ch>='0' && ch<='9' || ch =='-' && s[i-1]=='('){
			int x, y;
			if (ch=='-') x=0, y=-1;
			else x=ch-'0', y=1;
			char ch0 = s[++i];
			while ('0' <= ch0 && ch0 <= '9'){
				x = x * 10 + (ch0 - '0');
				ch0 = s[++i];
			}
			x *= y;
			s1.push(x);
			i--;
		}
		else{
			while(level(ch)<=level(s2.top())){
				calc();
			}
			s2.push(ch); 
		}
	} while (ch = s[++i]);
	cout<<s1.top()<<endl;
	return 0;
}