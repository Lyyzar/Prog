#include "std_lib_facilities.h"


template<typename T> 

struct S {

	explicit S(T vv=0) : val{vv} { }
	S<T>& operator=(const T& s);
	T& get();
	const T& get() const;


private: 
	
	T val;
};
template<typename T>
T& S<T>::get(){

	return val;

} 

template<typename T>
const T& S<T>::get() const
{

	return val;

} 
template<typename T>
S<T>& S<T>::operator=(const T& s)
		{
			val = s;
			return *this;
		}


template<typename T>
	void read_val(T& v)
		{
			cin >> v;
		}

template<typename T>
std::ostream& operator<<(ostream& os, vector<T>& v)
{
    os << "{ ";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i];
        if(i < v.size() - 1) cout<< ", ";
        	else cout<<"";
    }
    os << "}\n";

    return os;
}

int main()
{

	S<int> si {12};
	S<char> sc {'c'};
	S<double> sd {32.5};
	S<string> ss {"Example"};
	S<vector<int>> sv { vector<int>{1, 2, 3, 4, 5, 6}};

	cout << "S<int>: " << si.get()<<endl;
	cout << "S<char>: " << sc.get()<<endl;
	cout << "S<double>: " << sd.get()<<endl;
	cout << "S<string>: " << ss.get()<<endl;
	cout << "S<vector<int>>: " << sv.get()<<endl;

	


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
