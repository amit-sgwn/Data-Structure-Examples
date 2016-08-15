#include<iomanip>
#include <iostream>
using namespace std;
void dosome(unsigned int x){
	cout << "hello" << endl;
	while(x<0){
		x--;
		cout << x<<"\n" <<endl;
	}
}
int main(){
	std::cout << std::setprecision(17);
	bool t(true),v=false;
	cout << t << v <<endl;
	double p=0.1f,zero=0.0;
	std::cout << p/zero << zero/zero <<-p/zero <<std::endl;
	double d2(0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
	std::cout << d2 << std::endl;
	cout << p*10 << endl;
	return 0;
}
