#include<iostream>
using namespace std;

int sum(int x[],int y){
    int e=0;
    for(int i=0;i<y;i++){
        e = x[i]+e;
    }   
    return e;
}

int main(){
    
    int n;
    int r;
    cin>>n;
    int a[n];
    int i;
    int s=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    r=sum(a,n);
    cout<<r;
    return 0;
}
