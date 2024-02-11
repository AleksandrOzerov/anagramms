#include <iostream>
#include <algorithm>
using namespace std;

bool Anograms(string s, string j) {
	sort(s.begin(), s.end());
	sort(j.begin(), j.end());
	return (s == j);
}

int main(){
	cout << boolalpha;
	cout << Anograms("abcd", "dcab") << endl;
	cout << Anograms("cat", "tad")<< endl;
	cout << Anograms("cach", "tach") << endl;

}