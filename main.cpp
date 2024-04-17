/*
#include <iostream>
using namespace std;
int main()
{
	cout << "hello, world" << endl;
	cout << "with my first cmake !" << endl;
	for(int i=0;i<5;i++){
		cout << i+1 << endl;
	}
	return 0;
}
*/
#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	for(auto it=v.begin(); it!=v.end(); ++it){
		cout << *it << endl;
	}
	return 0;
}