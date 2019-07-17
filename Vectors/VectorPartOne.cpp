#include <iostream>
#include<vector>
using namespace std;
void printVectorFunction(vector<int>v){
    vector<int>::iterator i=v.begin();
    while(i!=v.end()){
      cout<<*i<<endl;
      i++;
    }
  }

vector<int> insertElement(vector<int> v){
  vector<int>:: iterator i=v.begin();
  i++;
  v.insert(i,60);//insert function takes iterator as the first argument and value as the second argument
  return v;
}
int main() {

  
  std::cout << "Hello World!\n";
  vector<int> v;//Declaring a Vector 
  for(int i=0;i<5;i++){
    //Populating a Vector
    v.push_back(i);
  }
  printVectorFunction(v);
  cout<<endl;
  //size of the vector
  cout<<"The size of the vector is "<<v.size()<<endl;
  v=insertElement(v);
  cout<<endl;
  cout<<"Elements after Insertion"<<endl;
  printVectorFunction(v);

  //Poping the last Element
  v.pop_back();
  cout<<endl<<"Elements after popping the last element"<<endl;
  printVectorFunction(v);

  //Erase an element
  vector<int>:: iterator i=v.begin();
  i=i+2;//just an arbitary choice to erase a value
  v.erase(i);
  cout<<endl<<"Elements after erasing a particular Value"<<endl;
  printVectorFunction(v);

  //Erase a range of Elements
  v.erase(v.begin()+1,v.end());
  cout<<endl<<"Elements after erasing a range of elements"<<endl;
  printVectorFunction(v);

  v.resize(6,10);//Resizes the vector to the current given size if the size given in less that the original vector size then trailing elements are removed if the given size is larger then by default zero's are added to the end of the vector.
  cout<<endl<<"Elements after Resizing"<<endl;
  printVectorFunction(v);

  vector<int> v2;//Creating a new array,aading a value then resizing
  v2.push_back(20);
  v2.resize(6,75);
  v.swap(v2);
  cout<<endl<<"Elements of v after Swaping"<<endl;
  printVectorFunction(v);

  //check if a vector is empty returns 0 if not and 1 if  it is
  if(v.empty()==0){
    cout<<"The vector is not Empty"<<endl;
  }else{
    cout<<"The Vector is Empty"<<endl;
  }

  //check the capacity of the vector based on amount of memory allocated to it
  cout<<"The capacity of the vector is "<<v.capacity()<<endl;

  //Get the first/Last element in the Vector
  cout<<"The first element is"<<v.front()<<endl;
  cout<<"The Last element is"<<v.back()<<endl;

  //clear - clears the whole vector but does not delete it
  v.clear();
  


}
