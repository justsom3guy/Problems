#include <iostream>

using namespace std;
int main()
{
    int i,b,a;
    float c=0,d=0,e=0;    
    cin >> i ;
    for(b=0;b<i;++b){
        cin >> a;
        if(a > 0){
            c=c+1;
        }
        if(a==0){
            d=d+1;
        }
        if(a < 0){
            e=e+1;
        }
    }
    c=c/i;
    d/=i;
    e/=i;
    cout << c << endl << e << endl << d << endl ;
    
    
}

