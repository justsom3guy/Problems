#include<iostream>
#include<algorithm>
using namespace std;
int main(){
long a[1000000],i,n,l=0;
cin>>n;
for(i=0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
for(i=0;i<n;i++)
{
if(a[i]==a[n-1])
l++;
}
cout<<l;

}
