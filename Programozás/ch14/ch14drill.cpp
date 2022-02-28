#include "std_lib_facilities.h"

struct B1{

		virtual void vf() 	{cout << "B1::vf()\n";}
		virtual void pvf()	{cout << "B1::pvf()\n";}
		void f()			{cout << "B1::f()\n";}

	};
	
struct D1:B1{

		void vf () override	{cout << "D1:vf()\n";}
		void f()			{cout << "D1::f()\n";}
};

struct D2:D1{

		void pvf() override {cout << "D2::pvf()\n";}
};

struct B2{

		virtual void pvf()	{cout<<"B2::pvf()\n";}
};

struct D21:B2{

		string e="something";
		void pvf() override	{cout <<e<<endl;}
};

struct D22:B2{

		int f=10;
		void pvf() override	{cout <<f<<endl;}
};

void f(B2& g){

		g.pvf();
}


int main(){


	B1 a;
	a.vf();
	a.f();

	D1 c;
	c.vf();
	c.f();

/*
	B1& b;
	b.f();
	b.vf();
*/
	D2 d;
	d.f();
	d.vf();
	d.pvf();

	D21	h;
	D22 i;

	f(h);
	f(i);



	return 0;
}