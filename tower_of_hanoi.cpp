#include <iostream>
#include <cmath>

using namespace std;

void tower_of_hanoi(int n, int source, int destination, int aux){
  if(n == 1){
    cout << source << ' ' << destination << endl;
    return;
  }

  tower_of_hanoi(n-1, source, aux, destination);
  cout << source << ' ' << destination << endl;
  tower_of_hanoi(n-1, aux, destination, source);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin.rdbuf() -> in_avail();
  
  int n;
  cin >> n;
  cout << (pow(2, n) -1) << endl;
  tower_of_hanoi(n, 1, 3, 2);
  cout.flush();
}