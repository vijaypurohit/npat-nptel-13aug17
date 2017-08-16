//Q5. Largest sum of m consecutive elements
#include <iostream>

using namespace std;

int maxConsecutive(int *a, int n, int m) {
  int sum = 0;
  for(int i = 0; i < m; i++) {
    sum += a[i];
  }
  int max = sum;
  for(int i = m; i < n; i++) {
  // Write your code is this space
	
//sum=a[i]+a[i-1];

//if ( max <= sum ) max=sum;

sum= sum + a[i]-a[i-m];

if ( max <= sum ) max=sum;

  }
  return max;
}
int main() {
    int n, m;
    int a[10];
    int i;
    
    cin >> n;
    cin >> m;
    for(i=0; i<n; i++)
      cin >> a[i];
    cout << maxConsecutive(a, n, m) << endl;
    
    return 0;
}

