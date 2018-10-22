#include <iostream>
#include<cctype>
#include<bits/stdc++.h>
#include<string.h>
#include<locale>
using namespace std;
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