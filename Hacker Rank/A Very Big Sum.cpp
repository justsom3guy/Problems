
#include <iostream>
using namespace std;

int main()
{
    int a[3];
    int b[3];
    int i;
    int c=0,g=0;
    int d=0;
    for(i=0;i<=2;i++){
        cin >> a[i];
    }
      for(i=0;i<=2;i++){
      
        cin >> b[i];
    }
    for(i=0;i<=2;i++){
        if(a[i]>b[i]){
           c+=1; 
        }
        if(a[i]<b[i]){
           d+=1;
        }
        if(a[i]==b[i]){
            g++;
        }   
    }
    cout << c <<" "<< d;
    return 0;
}   
    