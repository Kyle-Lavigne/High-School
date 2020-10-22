#ifndef letterDistance_h
#define letterDistance_h
using namespace std;
int letterDistance(string string1,string string2){
    int x=0;
if(string1.length()==string2.length())
{
  int n=string1.length();
  int p=string2.length();
  char char_array1[n+1];
  char char_array2[p+1];
  string1.copy(char_array1, string1.size());
  string2.copy(char_array2, string2.size());
  for(long unsigned int i=0;i<string1.size();i++){
    x+=abs(int(char_array1[i])-int(char_array2[i]));
  }
   cout<<x<<endl;
  return x;
}
else{
  cout<<"The strings are not equal. Try again.\n";
  return 0;
}
}

#endif
