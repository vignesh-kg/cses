#include <iostream>

using namespace std;

int main(){
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cin.rdbuf()->in_avail();

  long n;
  cin >> n;
  long totalSum = (n * (n+1))/2;
  long *arr = new long[n - 1];
  for(int i = 0; i < n-1; ++i){
    cin >> arr[i];
    totalSum -= arr[i];
  }
  cout << totalSum << "\n";
  cout.flush();
  delete arr;
}
