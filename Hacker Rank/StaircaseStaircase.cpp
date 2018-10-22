#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i,m,s;
    for(i=0;i<n;i++){
        for(m=((n-i)-1);m>0;m--){
            cout << " ";
        }
        for(m=0;m<=i;m++){
            cout << "#";
        }
        cout << "\n";
    }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
