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
string s;

signed main(){
	t=read();
	while(t--){
		cin>>s;
		bool flag=0;
		bool vis[30];
		int te=0;
		memset(vis,0,sizeof(vis));
		for(int i=0;i<s.size();++i){
			if(s[i]=='a') te=i;
			if(vis[s[i]-'a']==0){
				vis[s[i]-'a']++;
			}
			else{
				flag=1; break;
			}
		}
		if(vis[0]==0){
			cout<<"NO"<<endl;
			continue;
		}
		int cnt=1;
		int r=s.size()-1;
		int l=0;
		if(r==0){
			if(s[0]=='a'){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
			continue;
		}
		while(l<=r){
			if((s[l]-'a')==r-l){
				l++;
			}
			else if((s[r]-'a')==r-l){
				r--;
			}
			else break;
		}
		
////			if(s[i]>s[i+1]&&te==0){
////				
////			}
//if(s[0]>s[1]){
//			if(s[i]<s[i+1]&&te==0){
//				te=1; continue;
//			}
//			if(s[i]>s[i+1]&&te==1){
//				flag=1; break;
//			}
//			else if(s[i]<s[i+1]&&te==0){
//				flag=1; break;
//			}
//		}
//	else{
//		if(s[i]>s[i+1]&&te==0){
//				te=1; continue;
//			}
//			if(s[i]<s[i+1]&&te==1){
//				flag=1; break;
//			}
//			else if(s[i]<s[i+1]&&te==0){
//				flag=1; break;
//			}
//	}
//}
		if(l<=r){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
} 
