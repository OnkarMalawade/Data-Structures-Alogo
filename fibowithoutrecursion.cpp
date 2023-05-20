#include <bits/stdc++.h>
using namespace std;


int main()
 {
    int i, n, t1 = 0, t2 = 1, nT;
    cin>>n;


    for (i = 1; i <= n; ++i) {
        cout<<t1<<" ";
        nT = t1 + t2;
        t1 = t2;
        t2 = nT;
  }

  return 0;
 }