#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  int A[10];
  int ans = 0;
  for(int i = 1; i <= N; i++){
        cin >> A[i];
        ans += A[i];
  }

  cout << ans << endl;
  return 0;

}