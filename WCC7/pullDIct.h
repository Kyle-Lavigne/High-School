#ifndef pullDict_h
#define pullDict_h
using namespace std;

string pullDict(){
  int x;
  cout<<"Enter a number to find what that word is in the dictionary"<<endl;
  cin>>x;
  cout<<Words.at(x-1)<<endl;
  return Words.at(x-1);
}

#endif
