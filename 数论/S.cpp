#include <bits/stdc++.h>
#define int long long
using namespace std;
#define mod 1000000007
int n,m;

struct Matrix{
	int M[150][150];
	
	Matrix(){}
	
	friend Matrix operator*(Matrix a,Matrix b){
		Matrix ans;
		memset(ans.M,0,sizeof(ans.M));
		for(int i=0;i<m;i++)
			for(int j=0;j<m;j++){
				for(int k=0;k<m;k++)
					ans.M[i][j]=(ans.M[i][j]+a.M[i][k]*b.M[k][j]%mod)%mod;
			}
		return ans;
	}
	
	friend Matrix operator^(Matrix base,int k){
		Matrix ans;
		memset(ans.M,0,sizeof(ans.M));
		for(int i=0;i<m;i++)
			ans.M[i][i]=1;
		while(k){
			if(k&1) ans=ans*base;
			base=base*base;
			k>>=1;
		}
		return ans;
	}
	
};

Matrix base,f,tes;

signed main(){
	cin>>n>>m;
	if(n<m){
		cout<<1;
		return 0;
	}
	for(int i=0;i<m;++i){
		base.M[i][0]=1;
	}
	f.M[0][0]=1; f.M[0][m-1]=1;
	for(int i=1;i<m;++i){
		f.M[i][i-1]=1;
	}
	tes=f^(n-m+1);
	tes=tes*base;
	cout<<tes.M[0][0]%mod<<endl;
	return 0;
}
