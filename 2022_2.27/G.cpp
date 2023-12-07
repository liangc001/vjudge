#include<bits/stdc++.h>
#define err 1e-9
#define N 30
using namespace std;
double xx[10],yy[10];
int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={-1,0,1,1,1,0,-1,-1};
int n,ANS,vst[N][N];
char mp[N][N];
struct node{
	int x,y,ans;
};
double S(int a,int b,int c){
	double res;
	res=(xx[b]*yy[c]-xx[c]*yy[b])-(xx[a]*yy[c]-xx[c]*yy[a])+(xx[a]*yy[b]-xx[b]*yy[a]);
	res=0.5*fabs(res);
}
bool check(int x,int y){
	xx[0]=x;
	yy[0]=y;
	if(S(0,1,2)+S(0,1,3)+S(0,2,3)>S(1,2,3)+err) return 1;
	else return 0;
}
void bfs(){
	queue<node> q;
	node s;
	s.x=2,s.y=0;
	s.ans=0;
	q.push(s);
	vst[0][0]=1;
	int flag=0;
	memset(vst,0,sizeof(vst));
	while(!q.empty()){
		node now=q.front();
		q.pop();
//		cout<<now.x<<" "<<now.y<<endl;
		if(now.x==0&&now.y==n-1){
			flag=1;
			ANS=now.ans;
			break;
		}
		for(int k=0;k<8;k++){
			int nx=now.x+dx[k];
			int ny=now.y+dy[k];
			if(!vst[nx][ny]&&nx>=0&&ny>=0&&nx<=n-1&&ny<=n-1&&mp[nx][ny]=='.'&&check(nx,ny)){
				node ns;
				ns.x=nx;ns.y=ny;
				ns.ans=now.ans+1;
				q.push(ns);
				vst[nx][ny]=1;
			}
		}
	}
	if(flag) cout<<ANS<<endl;
	else cout<<-1<<endl;
}
int main(){
	while(cin>>n){
		cin>>xx[1]>>yy[1]>>xx[2]>>yy[2]>>xx[3]>>yy[3];
		for(int i=0;i<n;i++)
		    for(int j=0;j<n;j++) cin>>mp[i][j];
		bfs();
	}
	return 0;
}
