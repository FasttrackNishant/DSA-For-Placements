#include <bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> vec;

  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(7);
  vec.push_back(9);

  vector<int> vec1(4, 1);
  vector<int> vec2(3, 0);

  vector<int> vect(vec1.begin(), vec2.end());


  for (auto it : vect)
  {
    cout << it << " ";
  }

  cout << vect.size();

  return 0;
}