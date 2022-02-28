#include <iostream>

using namespace std;

int main() {
  int n1,n2,n3;
  cin>>n1>>n2>>n3;
  int x = n1 < n2 ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);
  cout<<x;
}