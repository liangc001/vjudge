#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,cnt,n;
	string a;
	cin>>t;
	while(t--)
	{
		cnt=19;
		cin>>a;
		n=a.size();
		for(int i=0;i<a.size();i++)//С��a�ĳ���
			{
				for(int j=i+1;j<a.size();j++)
					{
						if(((a[i]-'0')*10+(a[j]-'0'))%25==0)
							{
								cnt=min(cnt,n-i-2);//Ҳ����j-i-1+n-j-1=n-i-2
							}
					}
			}
			cout<<cnt<<endl;
	}
	return 0;
}
