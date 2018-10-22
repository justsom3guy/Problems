#include <bits/stdc++.h>

using namespace std;
int main()
{
    long int i,c=0,d=0,e=0;
    long int ar[5];
    
    for(i=0;i<5;i++){
        cin >> ar[i];
        e=ar[i]+e;
    
    }
    sort(ar, ar+5);
    c=e-ar[0];
    d=e-ar[4];
    cout<<d<<" "<<c;
    
    return 0;
}
