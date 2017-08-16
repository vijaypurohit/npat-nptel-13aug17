//Q6. Additive sequence of an array
#include <iostream>

using namespace std;

int checkAddSeq(int *x, int *y, int n) {
  for(int i = 0; i < n; i++) {
  // Write your code is this space
	int sum=0;
	for(int j=0; j<=i; j++)
    {
      sum+=x[j];
    }
if(y[i]!=sum)
{
  return 0;
}

  
  }
  return 1;
}
int main() {
    int n, i;
    int x[10], y[10];
    
    cin >> n;

    for(i=0; i<n; i++)
      cin >> x[i];
    for(i=0; i<n; i++)
      cin >> y[i];
    
    cout << checkAddSeq(x, y, n) << endl;
    return 0;
}

