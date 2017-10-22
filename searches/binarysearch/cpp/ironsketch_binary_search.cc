#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <time.h>
using namespace std;

bool binarySearch(vector<int> &vec, int num){
	if(vec.size() == 0)
		return false;
	else{
		l =
	}
	return true;
}

int main(){
	bool q = false;
	string e;
	vector<int> v;
	 cout << "Let's build our vector (array)" << endl;
	while(!q){
		cout << "keep typing in a number, when you're done type q" << endl;
		cin >> e;
		if(e.compare("q") == 0){
			q = true;
		} else {
			stringstream meow(e);
			int x;
			meow >> x;
			v.push_back(x);
		}
	}
	int find;
	bool found;
	clock_t t;
	cout << "Now let's search for one of those numbers and time it!" << endl;
	cout << "type in one of those numbers: " << endl;
	cin >> find;
	t = clock();
	found = binarySearch(v,find);
	t = clock() - t;
	if(found){
		cout << "We did find " << find << " and it took " << (float)t / CLOCKS_PER_SEC << " sec" << endl;
	} else{
		cout << "We did not find " << find << " and it took " << (float)t / CLOCKS_PER_SEC << " sec" << endl;
	}
	return 0;
}
