#include <iostream>
using namespace std;
int apple(int m,int n) {
    if(m<=1||n==1)        return 1; 
    if(n>m) 
        return apple(m,m);  
    else 
        return(apple(m-n,n)+apple(m,n-1));
}
int main() {
    int n,a[20],b[20],i; 
    cin>>n;   
    for(i=0;i<n;i++) 
        cin>>a[i]>>b[i];  
    for(i=0;i<n;i++)   {
          cout<<apple(a[i],b[i])<<endl;
      } 
    return 0;
}


