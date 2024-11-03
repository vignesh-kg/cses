#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  long n;
  scanf("%ld", &n);
  long totalSum = (n * (n+1))/2;
  long *arr = new long[n - 1];
  for(int i = 0; i < n-1; ++i){
    scanf("%ld", &arr[i]);
    totalSum -= arr[i];
  }
  printf("%ld\n", totalSum);
  fflush(stdout);
  delete arr;
}
