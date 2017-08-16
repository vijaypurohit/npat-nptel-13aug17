//Q4. Maximum of 3 given integers
#include <iostream>

using namespace std;

int max3(int x, int y, int z) {
  if(x >= y) {

  // Write your code in this space
if(x>=z)
return x;
  } else if(y >= z) {
    return y;
  } 
  return z;
}
int main() {
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << max3(x, y, z) << endl;
    return 0;
}

