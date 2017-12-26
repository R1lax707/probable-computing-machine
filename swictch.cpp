#include "iostream"
using namespace std;
int main(){
	int x;
	cin >> x;
	if(x>=0 && x<=50)
	cout << "F";
	if(x>50 && x<76)
	cout << "C";
	if(x>75 && x<90)
	cout << "B";
	if(x>=90 && x<=100)
	cout << "A";
}

