#include<iostream>
using namespace std;
int n;
int a[100];
void doivtri() {
 int i = 0;
 while(n > 0 ) {
  a[i] = n % 10;
  n = n / 10;
  i++;
 }
 if( a[0] != 0)
  cout << a[0];
 for(int j = i-2; j >= 1; j--)
  cout << a[j];
 cout << a[i-1];
}

int main() {
 cin >> n;
 doivtri();
}
