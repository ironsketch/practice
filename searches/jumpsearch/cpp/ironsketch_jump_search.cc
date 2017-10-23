#include <iostream>
#include <vector>
#include <math.h>
#include "time.h"
using namespace std;
bool jumpSearch(vector<int> &v, int n){
  int jumpSize = sqrt(v.size()) - 1;
  int jump = 0;
  while(jump < v.size()){
    jump += jumpSize;
    if(v[jump] > n){
      jump -= jumpSize;
      for(int i = jump; i <= jump + jumpSize; i++){
        if(v[i] == n){
          return true;
        }
      }
      return false;
    }
    if(jump > v.size() - 1){
      jump -= jumpSize;
      for(int i = jump; i < v.size(); i++){
        if(v[i] == n){
          return true;
        }
      }
      return false;
    }
  }
  return false;
}
int main() {
  vector<int> v;
  int numb;
  int whatNumb;
  cout << "How many numbers do you want to search through?" << endl;
  cin >> numb;
  for (size_t i = 0; i < numb; i++) {
    v.push_back(i);
  }
  cout << "What number do you want to search for?" << endl;
  cin >> whatNumb;
  time_t t = clock();
  if(jumpSearch(v,whatNumb)){
    t = clock() - t;
    cout << "We found " << whatNumb << " and it took " << (float)t / CLOCKS_PER_SEC << endl;
  } else{
    t = clock() - t;
    cout << "We did not find " << whatNumb << " and it took " << (float)t / CLOCKS_PER_SEC << endl;
  }
  return 0;
}
