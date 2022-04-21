#include "std_lib_facilities.h"
#include "Matrix.h"

using namespace std;

int main(){
	
	cout<<"Size of char: "<< sizeof(char)<<endl;
	cout<<"Size of short: "<< sizeof(short)<<endl;
	cout<<"Size of int: "<< sizeof(int)<<endl;
	cout<<"Size of long: "<< sizeof(long)<<endl;
	cout<<"Size of float: "<< sizeof(float)<<endl;
	cout<<"Size of double: "<< sizeof(double)<<endl;
	cout<<"Size of int*: "<< sizeof(int*)<<endl;
	cout<<"Size of double*: "<< sizeof(double*)<<endl;

	Numeric_lib::Matrix<int> a(10);
	Numeric_lib::Matrix<int> b(100);
	Numeric_lib::Matrix<double> c(10);
	Numeric_lib::Matrix<int,2> d(10,10);
	Numeric_lib::Matrix<int,3> e(10,10,10);


	cout<<"Size of a: "<< sizeof(a)<<endl;
	cout<<"Size of b: "<< sizeof(b)<<endl;
	cout<<"Size of c: "<< sizeof(c)<<endl;
	cout<<"Size of d: "<< sizeof(d)<<endl;
	cout<<"Size of e: "<< sizeof(e)<<endl;

	cout << a.size() << endl << b.size() << endl
	<< c.size() << endl << d.size() << endl
	<< e.size() << endl;
	return 0;
}