#include <iostream>

using namespace std;

int main(){
  long n;
  cin >> n;
  long totalSum = (n * (n+1))/2;
  long cur;
  for(int i = 0; i < n-1; ++i){
    cin >> cur;
    totalSum -= cur;
  }
  cout << totalSum << endl;
}
