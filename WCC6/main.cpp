#include <iostream>
#include <string>
#include "letterDistance.h"
using namespace std;
int main() {
  string string1, string2;
  cout<<"Enter String One\n";
  cin>>string1;
  cout<<"Enter String Two\n";
  cin>>string2;
  letterDistance(string1, string2);
  return 0;
}
