#include <iostream>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin.rdbuf()->in_avail();

  long long n;
  cin >> n;
  long long x, y;
  long long ans;
  while(n--){
    cin >> x >> y;
    if(y > x){
      if(y%2 == 0) ans = (y-1) * (y-1) + (x-1) + 1;
      else ans = y*y - (x-1);
    } else {
      if(x%2 == 1) ans = (x-1)*(x-1) + (y-1) + 1;
      else ans = x*x - (y-1);
    }
    cout << ans << "\n";
  }
  cout.flush();
}