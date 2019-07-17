#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<string> v(4,"hello World");//intialising the vector with 4 hello World's
  vector<string>::iterator i=v.begin();
  while(i!=v.end()){
    cout<<*i<<endl;
    i++;
  }

  vector<string> vec {'hello','World','Hi'};//intialising the vector
  //this works only with C++ 11 and above
  i=vec.begin();
  while(i!=vec.end()){
    cout<<*i<<endl;
    i++;
  }
  return 0;
  
}