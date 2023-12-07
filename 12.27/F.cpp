#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
char s[100010];

signed main(){
    t=read();
    while(t--){
        gets(s);
        bool flag=0;
        int n=strlen(s);
        s[n]=' ';
        for(int i=0;i<n;++i){
            if(s[i]==' '){
                int len=i;
                if((n+1)%(len+1)!=0){
                    continue;
                }
                else{
                    int j=0;
                    for(j=len;j<=n;j+=(len+1)){
                        if(s[j]!=' '){
                            break;
                        }
                        if(j==n){
                            flag=1; break;
                        }
                    }
                }
            }
        }
        if(flag==1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        if(t!=0){
        	cout<<endl;
		} 
    }
    return 0;
}
