#ifndef findWord_h
#define findWord_h
using namespace std;

string findWord(string string3){
  cout<<"Check to see if you spelt a word right"<<endl;
  string string1;
  cin>>string1;
  if(find(Words.begin(),Words.end(),string1)!=Words.end()){
    cout<<"Does exist"<<endl;
  }
  else{
    cout<<"Word does not exist"<<endl;
  }
  return string3;
}

#endif
