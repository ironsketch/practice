#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

bool linearSearch(vector<int> &vec, int num){
	if(vec.size() > 0){
		for(int i = 0; i < vec.size(); i++){
			if(vec[i] == num)
				return true;
		}
	}
	return false;
}

int main(){
	vector<int> v;
	int times;
	int n;
	bool found;
	cout << "How many numbers do you want in the vector(array)? " << endl;
	cin >> times;
	for(int i = 0; i < times; i++){
		v.push_back(i);
	}
	cout << "What number do you want to search for? " << endl;
	cin >> n;
	clock_t t;
	t = clock();
	found = linearSearch(v,n);
	t = clock() - t;
	if(found)
		cout << "We found " << n << " and it took " << (float)t / CLOCKS_PER_SEC << " sec." << endl;
	else
		cout << "We didn't find " << n << " and it took " << (float)t / CLOCKS_PER_SEC << " sec." << endl;
	return 0;
}
