#include <iostream>

using namespace std;

int main(){

  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long n;
  cin >> n;
  if(n == 2 || n == 3) 
  {
    cout << "NO SOLUTION" << endl;
    return 0;
  }
  for(int i = 2; i <= n; i+=2) 
    cout << i << ' ';
    cout.flush();
  for(int i = 1; i <= n; i+= 2) 
    cout << i << ' ';
    cout.flush();
  cout << endl;
}