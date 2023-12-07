#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

//int mx[10]={0,0,0,1,-1,1,-1,1,-1};
//int my[10]={0,-1,1,0,0,-1,-1,1,1};//
char a[3],b[3];
int ans[10010],cnt,sum;
int ax,bx,ay,by;

//inline void dfs(int x,int y,int num){
//	cout<<x<<" "<<y<<endl;
//	if(x==bx&&y==by&&num==sum){
//		
//		return;
//	}
//	else if(num>sum){
//		return;
//	}
//	for(int i=1;i<=8;++i){
//		int nex=x+mx[i];
//		int ney=y+my[i];
//		if(nex>=1&&nex<=8&&ney>=1&&ney<=8){
//			ans[++cnt]=i;
//			dfs(nex,ney,num+1);
//			cnt--;
//		}
//	}
//}

signed main(){
	cin>>a;
	cin>>b;
	ax=a[0]-'a'+1;
	ay=a[1]-'0';
	bx=b[0]-'a'+1;
	by=b[1]-'0';
	sum=min(abs(ax-bx),abs(ay-by));
	int si=max(abs(ax-bx),abs(ay-by));
	if(sum==si){
		cout<<sum<<endl;
	}
	else{
		cout<<sum+abs(sum-si)<<endl;
	}
//	dfs(ax,ay,0);
		if(ax>bx&&ay>by){
			for(int i=1;i<=sum;++i){
				cout<<"LD"<<endl;
				ax--; ay--;
			}
		}
		else if(ax>bx&&ay<by){
			for(int i=1;i<=sum;++i){
				cout<<"LU"<<endl;
				ax--; ay++;
			}
		}
		else if(ax<bx&&ay<by){
			for(int i=1;i<=sum;++i){
				cout<<"RU"<<endl;
				ax++; ay++;
			}
		}
		else{
			for(int i=1;i<=sum;++i){
				cout<<"RD"<<endl;
				ax++; ay--;
			}
		}
	if(ax==bx){
		if(ay>by)
		for(int i=1;i<=abs(ay-by);++i){
			cout<<"D"<<endl;
		}
		else if(ay<by){
			for(int i=1;i<=abs(ay-by);++i){
			cout<<"U"<<endl;
		}
		}
	}
	else if(ay==by){
		if(ax>bx){
			for(int i=1;i<=abs(ax-bx);++i){
				cout<<"L"<<endl;
			}
		}
		else if(ax<bx){
			for(int i=1;i<=abs(ax-bx);++i){
				cout<<"R"<<endl;
			}
		}
	}
	return 0;
}
