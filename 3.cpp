//Q3. Does an integer appear k times in first n positions of an array
#include <iostream>

using namespace std;

int has(int *a, int n, int x, int k) {
  // Write your code is this space


if(k==0  )
  return 1;
else if(n==0 && k!=0)
  return 0;
  if(a[n-1] == x) {
    return has(a, n-1, x, k-1);
  } else {
    return has(a, n-1, x, k);
  }
}
int main() {
  int x, k, n;
  int a[10];
  int i;
  
  cin >> n;
  cin >> x;
  cin >> k;
  for(i=0; i<n; i++) 
    cin >> a[i];
  cout << has(a, n, x, k) << endl;

  return 0;
}

