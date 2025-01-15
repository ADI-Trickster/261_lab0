#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
  cout << "name to ASCII decmial!";
  string myName = "";
  cin >> myName;

  for(int i= 0; i<myName.length();i++){
    cout<< i << endl;
  }
//   cout<< myName;
  return 0;
}
