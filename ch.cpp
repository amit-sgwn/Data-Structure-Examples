#include <iostream>

using namespace std;
int main(){
	char ch1(51);
	char v('a');
	int i =static_cast<int>(v);
	cin >> ch1;
	int x=1,y=12;
	int p =(++x,++y);
	int q=(x,y);
	int r =x,y;
	cout "q is " << q << "and r is "<< r <<endl;
	cout << p<< endl;
	
	int j=static_cast<int>(ch1);
	std:: cout << "Now int val of ch1  is " << j << endl;
	std:: cout << "Now int val of a is" << i << endl;
	std:: cout << ch1 << "And " << v << std::endl;
	return 0;
}
