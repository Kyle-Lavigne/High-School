#ifndef setDict_h
#define setDict_h
using namespace std;
  ifstream src("dictionary.txt");
  vector<string> Words;
void setDict(){
  if(!src)
  {
    cout<<"Error opening the file"<<endl;
    exit(1);
  }
  string word;
  while(src>>word)
  {
    Words.push_back(word);
  }
}

#endif
