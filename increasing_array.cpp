#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  long n;
  cin >> n;
  long *arr = new long[n];
  long prev = 0 , steps = 0;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
    if(arr[i] < prev) steps += prev - arr[i];
    else prev = arr[i];
  }
  cout << steps << endl;
  cout.flush();
}