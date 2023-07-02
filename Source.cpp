#include<iostream>
using namespace std;
template<class t,class t2>
t2 add(t num1, t2 num2) {
	return num1 + num2;
}
template<class t3,class t4>
class number {
	t3 n;
public:
	number(t3 n) {
		this->n = n;
	}
	t4 add1(t3 n1, t4 n2) {
		return n1 + n2;
	}
};

int main() {
	//cout << add<int,double>(10, 20.2) << endl;  //template in function
	number<int, double> num(10);      //template in class
	cout << num.add1(10, 10.2) << endl;
	return 0;
}