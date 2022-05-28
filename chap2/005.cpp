#include <iostream>
using namespace std;
int main(){
  int N;
  cin >> N;
  int A[N];
  int ans = 0;
  for(int i = 0; i < N; i++){
    cin >>  A[i];
  }

    for(int i = 0; i < N; i++)
  {
    ans += A[i];
  }

  cout << ans%100 << endl;
  return 0;

}