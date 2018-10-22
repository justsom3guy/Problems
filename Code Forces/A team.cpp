#include <iostream>
using namespace std;
int
main ()
{
  int a[1000][1000];
  int n,i,h=0,g=0,j;
  cin >> n;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < 3; j++)
	    {
	    cin >> a[i][j];
	    }
    }
for (i = 0; i < n; i++)
    {h=0;
      for (j = 0; j < 3; j++)
	    {
	        if(a[i][j]==1)
	        h++;
	    }
	        if(h>=2)
	        g++;
	    
    }
    cout<<g;
  return 0;
}