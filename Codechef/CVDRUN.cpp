#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,k,x,y;
    cin >> n >> k >> x >> y;
    map<int,int> m;
    m[x] = 1;
    if(x==y){
        cout << "YES\n";
        continue;
    }
    if(k==0){
        cout << "NO\n";
        continue;
    }
    int i = x;
    bool found = false;
    do{
      int nxt = (i + k)%(n);
      m[nxt]= 1;
      if(m[y]){
        cout << "YES\n";
        found = true;
        break;
      }
      i = nxt;
    }while(i != x);
    if(!found) cout << "NO\n";
  }
  return 0;
}
