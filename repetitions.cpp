#include <iostream>

using namespace std;

int main(){
  string s;
  cin >> s;
  long maxLength = 0;
  long curLength = 1;
  long size = s.size();
  for(int i = 0; i < size-1; ++i){
    if(s[i] == s[i+1]) ++curLength;
    else {
      if(maxLength < curLength) maxLength = curLength;
      curLength = 1;  
    }	  
  }
  if(maxLength < curLength) maxLength = curLength;
  cout << maxLength << endl;
}
