### <div align="center">C</div>

题目：C.01 Game

原题链接：[Problem - B - Codeforces](https://codeforces.com/contest/1373/problem/B)

题意：Alice和Bob比赛，轮流操作，Alice先手。给定一个01串，每次操作可以取相邻的两个不同数字（eg：01或10）并将他们删除，当某一轮某人不能进行任何合法操作时他就输掉了比赛。问Alice是否能赢？

解题思路：反向思考，不难发现输掉时一定是连续的0或连续的1，从初始的01串变到这一步必定是删除了0，1中出现次数较少的一个的所有能与另一个且必定能与另一个结合的全部组合（数量相同恰好全部删掉），从而知道了操作次数，将次数对2取模结果就出来了。

参考代码：

```cpp
#include <bits/stdc++.h>
using namespace std;
//Alice先手
int t;
string s;

signed main(){
	cin>>t; 
	while(t--){
		cin>>s;
		int sum1=0,sum0=0;
		for(int i=0;i<s.size();++i){
			if(s[i]=='1') sum1++;
			else if(s[i]=='0') sum0++;
		}
		//统计一和零的个数 
		int ans=min(sum1,sum0);
		//找到个数的最小值 
		if(ans%2==0){
			cout<<"NET"<<endl;
		}
		else{
			cout<<"DA"<<endl;
		}
	}
	return 0;
} 
```

