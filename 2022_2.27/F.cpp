#include<bits/stdc++.h>
#define N 109
using namespace std;
struct node{
	int x,y;
};
int n,cnt,zx,ys,u,d,r,l;
char mp[N][N],dd[N][N];
int vst[N][N];
int main(){
	while(cin>>n){
		for(int i=1;i<=n;i++)
		    for(int j=1;j<=n;j++){
		    	cin>>mp[i][j];
			}
		cnt=0;
		node t;
		t.x=1,t.y=1;
		queue<char> q;
		q.push(mp[t.x][t.y]);
		zx=ys=0;
		while(1){
			if(zx==1){
				++cnt;
				t.x++;
				t.y--;
				q.push(mp[t.x][t.y]);
//				cout<<t.x<<" "<<t.y<<endl;
			}
			if(cnt==n*n) break;
			if(ys==1){
				++cnt;
				t.x--;
				t.y++;
				q.push(mp[t.x][t.y]);
//				cout<<t.x<<" "<<t.y<<endl;
			}
			if(cnt==n*n) break;
			if(t.x==1&&t.y!=n){
				++cnt;
				t.y++;
				zx=1,ys=0;
				q.push(mp[t.x][t.y]);
			}
			else if(t.y==1&&t.x!=n){
				++cnt;
				t.x++;
				ys=1,zx=0;
				q.push(mp[t.x][t.y]);
			}else if(t.x==n){
				++cnt;
				t.y++;
				zx=0,ys=1;
				q.push(mp[t.x][t.y]);
			}else if(t.y==n){
				++cnt;
				t.x++;
				ys=0,zx=1;
				q.push(mp[t.x][t.y]);
			}
//			cout<<t.x<<" "<<t.y<<endl;
			if(cnt==n*n) break;
		}
		int r=1,l=0,u=0,d=0;
		t.x=1,t.y=0;
		char ch;
		int flag;
		cnt=0;
		memset(vst,0,sizeof(vst));
		while(!q.empty()){
			flag=0;
			if(r==1){
				if(!vst[t.x][t.y+1]&&t.y+1<=n){
					ch=q.front();
					t.y++;
					dd[t.x][t.y]=ch;
					vst[t.x][t.y]=1;
					flag=1;
					cnt++;
				}else{
					d=1;
					r=0;
				}
			}else if(l==1){
					if(!vst[t.x][t.y-1]&&t.y-1>=1){
						ch=q.front();
						t.y--;
						dd[t.x][t.y]=ch;
						vst[t.x][t.y]=1;
						flag=1;
						cnt++;
					}else{
						u=1;
						l=0;
					}
				}
			else if(u==1){
					if(!vst[t.x-1][t.y]&&t.x-1>=1){
						ch=q.front();
						t.x--;
						dd[t.x][t.y]=ch;
						vst[t.x][t.y]=1;
						flag=1;
						cnt++;
					}else{
						r=1;
						u=0;
					}
				}
			else if(d==1){
					if(!vst[t.x+1][t.y]&&t.x+1<=n){
						ch=q.front();
						t.x++;
						dd[t.x][t.y]=ch;
						vst[t.x][t.y]=1;
						flag=1;
						cnt++;
					}else{
						l=1;
						d=0;
				    }
			    }
		    if(flag) q.pop();
		    if(cnt==n*n) break;
		}
		for(int i=1;i<=n;i++,cout<<endl)
		    for(int j=1;j<=n;j++) cout<<dd[i][j];
	}
	return 0;
}
