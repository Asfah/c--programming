/* 
Prints all perfect numbers between 1 and 1000
By Ahmed Asfah
-------------------

You are free to reuse the code and modify it, use it for your assignments

*/


#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int perfect(int);


int main()
{
  int i;
  cout << endl << "Perfect numbers between 1 and 1000\n" << endl;

  for (i=1; i<=1000; i++)
  perfect(i);

  cout << endl;
  return 0;


}



int perfect(int n)
{
  vector<int> v;

  int i=1, sum=0;
  while(i<n)
  {
    if( n%i == 0 )
    {
      sum += i;
      v.push_back(i);
    }

    i++;
  }

 if ( sum == n)
 {
   cout << "-> " << n << '\t' << "Factors: ";

   for(int i=0; i<v.size(); i++)
   cout << v.at(i) << ' ';
   cout << endl;
   return 1;
 }

 else           return 0;


}
