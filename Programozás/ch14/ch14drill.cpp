#include "std_lib_facilities.h"

struct B1{

		virtual void vf() 	{cout << "B1::vf()\n";}
		void f()			{cout << "B1::f()\n";}
	};
	
struct D1:B1{

		void vf () override	{cout << "D1:vf()\n";}
		void f()			{cout << "D1::f()\n";}
};






int main(){


	B1 a;
	D1 b;


	a.vf();
	a.f();

	b.vf();
	b.f();



	return 0;
}