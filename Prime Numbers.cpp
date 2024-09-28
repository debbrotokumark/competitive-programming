// https://vjudge.net/problem/Aizu-ALDS1_1_C
#include<bits/stdc++.h>
using namespace std;

bool primeNumber(int n){

if(n==2 || n==3)
return true;
  
if(n<=1 || n%2==0 || n%3==0)
return false;
  
for(int i=5;i*i<=n;i+=6)
{
    if(n%i==0 || n%(i+2)==0)
        return false;
}
return true;
}

int main()
{

int n,m,sum=0;
cin>>n;

while(n--)
{
cin>>m;
bool check=primeNumber(m);
if(check){
  sum++;
}

}
cout<<sum<<endl;
}
