#include<iostream>
#include<list>

using namespace std;
void printListElements(list<int> l){
  list<int>:: iterator i=l.begin();
  while(i!=l.end()){
    cout<<*i<<endl;
    i++;
  }
  cout<<endl;
}
int main(){
  list<int> l;//initalising a list
  for(int i=0;i<5;i++){
    l.push_back(i);
  }
  cout<<endl<<"Elements of the list"<<endl;
  printListElements(l);

  // list<int> myList{1,2,3,4,5};//alternate way of creating and populating an array
  // cout<<endl<<"Elements of the list"<<endl;
  // printListElements(myList);

  list<int>:: iterator i=l.begin();
  l.insert(i,10);//inserts the Elements just before the position of iterator
  i++;
  l.insert(i,20);
  cout<<"Elements after inserting"<<endl;
  printListElements(l);
  i++;
  l.insert(i,5,25);//The first Parameter is the position of the iterator,second is the count ...number of times yoiu want to insert the element, third argument is the value
  cout<<"Elements after multiple insertions"<<endl;
  printListElements(l);

  l.insert(i,l.begin(),l.end());//This means that insert all the Elements from start to end before the iterator position//The start and stop(2nd and 3rd parameters can be varied).
  
  
  
  //Pushing an element
  l.push_front(1000);//Used to push an elemenmt to the front of the list
  l.push_back(2000);//used to push an element to the end of the list
  cout<<"Elements after pushing"<<endl;
  printListElements(l);

  //Popping Elements from the list
  l.pop_front();//Removes the first element from the list
  l.pop_back();//Removes the last element from the list

  cout<<"Elements after Poping"<<endl;
  printListElements(l);

  //Check if a list is empty or not
  if(l.empty()==0){
    cout<<"The list is not empty";
  }else{
    cout<<"The list is Empty";
  }

  //size of the list
  cout<<"Size of the list is"<<endl;
  cout<<l.size();
  //Getting the first/last element of the list
  cout<<"First element of the list is";
  cout<<l.front()<<endl;
  cout<<"Last element of the list is";
  cout<<l.back();

  //creating two lists
  list<int>l1;
  list<int>l2;
  for(int i=0;i<5;i++){
    l1.push_back(i);
  }
  for(int i=4;i>0;i--){
    l2.push_back(i);
  }
  cout<<endl;
  cout<<"l1 list"<<endl;
  printListElements(l1);
  cout<<"l2 list"<<endl;
  printListElements(l2);

  l1.swap(l2);//swaping the elements of the list
  cout<<"l1 list";
  printListElements(l1);
  
  //Reversing the list
  l.reverse();
  cout<<"reversed List"<<endl;
  printListElements(l);

  //sorting the list
  l.sort();
  cout<<"Sorted List"<<endl;
  printListElements(l);
  //in sort function the argument can even be a function For Example when we need to sort a list of Strings based on the length.

  //splice
  //used for transfering elements from one list to the other
  i=l1.begin();
  l1.splice(i,l2);//takes the whole list l2 and adds it at the iterator position mentioned
  cout<<"Elements after Splicing"<<endl;
  printListElements(l1);

  //There are two more ways to use splice one is to pass first argument as the iterator of the list where data has to be inserted second argument the list_name third argument an iterator position from where the list has to be added
  //splice(iterator, list_name, iterator_pos)
  //splice(iterator, list_name, itr_start, itr_end)

  //Merging two arrays
  l1.merge(l2);
  cout<<"Merged List"<<endl;
  printListElements(l1);

  
}
