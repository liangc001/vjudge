#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
int n;
string s;

signed main(){
	t=read();
	while(t--){
		n=read();
		cin>>s;
		bool f=0;
		for(int i=0;i<s.size();++i){
			if(s[i]!='?'){
				f=1; break;
			}
		}
		if(f==0){
			int cnt=0;
			for(int i=0;i<n;++i){
				cnt++;
				if(cnt%2==1){
					cout<<"B";
				}
				else cout<<"R";
			}
			cout<<endl;
			continue;
		}
		else{
			f=0;
			for(int i=0;i<n;++i){
				if(s[i]!='?'&&s[i-1]=='?'){
					for(int j=i-1;j>=0;--j){
						if(s[j]!='?'){
							break;
						}
						else{
							if(s[j+1]=='B'){
								s[j]='R';
							}
							else{
								s[j]='B';
							}
						}
					}
				}
			}
			for(int i=0;i<n;++i){
				cout<<s[i];
				if(s[i]!='?'&&s[i+1]=='?'){
					for(int j=i+1;j<n;++j){
						if(s[j-1]=='B'){
							cout<<"R";
							s[j]='R';
						}
						else{
							cout<<"B";
							s[j]='B';
						}
					}
					break;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
