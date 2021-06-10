#include<iostream>
using namespace std;

int main()
{
  vector<int> num ={1,2,3,4,5};

  vector<int>::iteration ptr;
  cout<<"vector elements are:";
  for(ptr =num.begin(); ptr < num.end();ptr++)
  cout<< *ptr <<"";


    
    return 0;
}
