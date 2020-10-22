#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "letterDistance.h"
#include "setDict.h"
#include "pullDict.h"
#include "findWord.h"
#include "end.h"
using namespace std;

int main() {
  setDict();
  string string1;
  string string2=findWord(string1);

  pullDict();
  letterDistance(string1,string2);
}
