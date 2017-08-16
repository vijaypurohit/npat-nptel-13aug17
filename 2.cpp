//Q2. Triangle inequality
#include <iostream>

using namespace std;

int num[3]={
3,1,3
};

int triangleType_bad(int a, int b, int c) {
  if(a != b && b != c)
    return 1;
  else if(a == b && a == c)
    return 3;
  else
    return 2;
}

int triangleType_good(int a, int b, int c) {
  if((a == c) && (b != a) && (a <= b+c) && (b <= a+c) && (c <= a+b))
    return 0;
    
  if(a != b && b != c)
    return 1;
  else if(a == b && a == c)
    return 3;
  else
    return 2;
}


int main() {
    
    if(triangleType_bad(num[0], num[1], num[2]) != triangleType_good(num[0], num[1], num[2]))
        cout << "correct" << endl;
    else
        cout << "wrong" << endl;
   
    return 0;
}

