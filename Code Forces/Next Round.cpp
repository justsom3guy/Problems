#include <iostream>
#include<cctype>
#include<bits/stdc++.h>
#include<string.h>
#include<locale>
using namespace std;#include<iostream>

using namespace std;
int main(){


    long long int a,n,m,l,w;
cin>>m>>n>>a;
l=m/a;
w=n/a;

if(m%a != 0)
    l=l+1;#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a;
    for (int i = 0; i < k; ++i)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; ++i)
    {
        cin >> b;
        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}
if(n%a != 0)
    w=w+1;
cout<<l*w;

}
int main()
{
    string a;
    cin >> a;
    int i;
    
    int b=a.length();
    
    
 transform(a.begin(), a.end(), a.begin(), ::tolower);
    
    for(i=0;i<b;i++){
        if((a[i]=='a') || (a[i]=='i') || (a[i]=='u') || (a[i]=='o') || (a[i]=='e') || (a[i]=='y')){
            cout <<"";
        }
        else
        
        cout<<"."<<a[i];
    }
}
