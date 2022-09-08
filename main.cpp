#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, k;
  cin>>N;
  vector <int> A(N, 0);
  for (int i = 2; i * i <= N; ++i) {
    for (int k = max(i, 2); k * i < N; ++k) A[i * k] = 1;
    }
    for (int i = 2; i < N; ++i) if (A[i] == 0) cout<<i<<" ";
  return 0;   
}
