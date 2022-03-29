#include "std_lib_facilities.h"


template<typename T> 

struct S {

private: 
	
	T val;

public: 

	S(T vv=0) : val{vv} { }
	S& operator=(const T& s);
	T& get();
	const T& get() const;

};
template<typename T>
T& S<T>::get(){

	return val;

} 

template<typename T>
const T& S<T>::get() const{

	return val;

} 
template<typename T>
S<T>& S<T>::operator=(const T& s)
		{
			val=s;
			return *this;
		}


template<typename T>
	void read_val(T& v)
		{
			cin>>v;
		}

template<typename T>
ostream& operator<<(ostream& os, S<vector<T>>& s)
{
	cout<<"{";
	for(int i=0;i<=s.size();++i)
		{
		
			if(i<s.size()) cout<<", ";
				else cout <<"}"<<endl;
		
		}	
	
	
	return os;
	
}



int main()
{

	S<int> si {12};
	S<char> sc {'c'};
	S<double> sd {32.5};
	S<string> ss {"Example"};
	//S<vector<int>> sv {1,2,3,4,5,6};

	cout << "S<int>: " << si.get()<<endl;
	cout << "S<char>: " << sc.get()<<endl;
	cout << "S<double>: " << sd.get()<<endl;
	cout << "S<string>: " << ss.get()<<endl;
	//cout << "S<vector<int>>: " << sv.get()<<endl;

	si=14;
	sc='k';
	sd=643.2;
	ss="Example 2";

	cout << "S<int>: " << si.get()<<endl;
	cout << "S<char>: " << sc.get()<<endl;
	cout << "S<double>: " << sd.get()<<endl;
	cout << "S<string>: " << ss.get()<<endl;

	cout<<"Int: "<<endl;
	int i;
	read_val(i);
	S<int> {i};


	cout<<"Char: "<<endl;
	char c;
	read_val(c);
	S<char> {c}; 
	

	cout<<"String: "<<endl;
	string s;
	read_val(s);
	S<string> {s}; 




return 0;
}
