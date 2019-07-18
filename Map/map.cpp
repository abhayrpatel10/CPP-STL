#include<iostream>
#include<map>//Map is like a dictionary which holds data in key,value pairs
using namespace std;

int main(){
  map<string,int> m;//A map which stores the name and age of a person
  //Inserting data into the map
  m["Alan"]=21;
  m["Clint"]=27;
  
  //Get the value at the given key
  cout<<m.at("Alan");

  m["Alan"]=34;//Change the value at any key
  if(m.empty()==0){
    cout<<endl<<"The map is not Empty"<<endl;
  }else{
    cout<<endl<<"The map is Empty"<<endl;
  }

  cout<<"Size of the map"<<m.size();

  //Other ways of inserting data in to the map
  m.insert(make_pair("John",27));
  //Another way of inserting
  m.insert(pair<string,int>("kate",29));
  map<string,int>:: iterator i=m.begin();
  while(i!=m.end()){
    cout<<endl<<i->first<<"\t"<<i->second;
    i++;
  }
  i=m.begin();
  i++;
  m.erase(i);//Erases the data at the iterator position
  //m.erase(start_iterator,end_iterator);//Erases the range of data specified

  //Finding the first last or a specific element

  i=m.begin();//returns iterator to the first value in the map
  //cout<<i->first;
  //cout<<i->second;

  i=m.end();//returns the iterator to the last value in the map
  i=m.find("Alan");//returns the iterator to the specified key in the map
  return 0;
}