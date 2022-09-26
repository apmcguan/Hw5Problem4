#include <iostream>
#include <cmath>


using namespace std;

int main() {
  int a;
  int m = 42;
  int count = 1;

  cin >> a;
    int moda = a % m;
  cin >> a;
    int modb = a % m;
  cin >> a;
    int modc = a % m;
  cin >> a;
    int modd = a % m;
  cin >> a;
    int mode = a % m;
  cin >> a;
    int modf = a % m;
  cin >> a;
    int modg = a % m;
  cin >> a;
    int modh = a % m;
  cin >> a;
    int modi = a % m;
  cin >> a;
    int modj = a % m;
  if (modb!= moda)
  {
    count ++;
  }
  if ((modc != moda) && (modc != modb))
  {
    count ++;
  }
  if ((modd != moda) && (modd != modb) && (modd != modc))
  {
    count ++;
    }
  if ((mode != moda) && (mode != modb) && (mode != modc) && (mode != modd))
  {
    count ++;
  }
  if ((modf != moda) && (modf != modb) && (modf != modc) && (modf != modd)&&(modf != mode))
  {
    count ++;
  }
  if ((modg != moda) && (modg != modb) && (modg != modc) && (modg != modd)&&(modg != mode) && (modg != modf))
  {
    count ++;
  }
  if ((modh != moda) && (modh != modb) && (modh != modc) && (modh != modd)&&(modh != mode) && (modh != modf) &&(modh != modg))
  {
    count ++;
  }
   if ((modi != moda) && (modi!= modb) && (modi != modc) && (modi != modd)&&(modi != mode) && (modi != modf) &&(modi != modg) &&(modi != modh))
  {
    count ++;
  }
  if ((modj != moda) && (modj != modb) && (modj != modc) && (modj != modd)&&(modj != mode) && (modj != modf) &&(modj != modg) &&(modj != modh)&& (modj != modh))
  {
    count ++;
  }
  cout << count <<endl;
  
  
  
  
  
  
  
}