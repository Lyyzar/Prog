#include "std_lib_facilities.h"

template<typename T, typename F>
void print_map(map<T,F>& ma)
{
	for(const auto p : ma)
		cout <<p.first<< " " <<p.second<<endl;
}

template<typename T, typename F>
void read_cin(map<T,F>& l)
{
	pair<T,F> par;
	int a=-1;

	while(cin>>par.first>>par.second)
		{
			++a;
			if(a<10) l[par.first]=par.second;
				else break;
		}
}


int main(){


	map<string,int> msi;
	
	ifstream ifile("data.txt");
	for(int i=0;i<10;++i)
		{
			string key;
			int k;
			double value;
			ifile>>key>>k>>value;
			msi[key]=k;
		} 
	ifile.close();

	print_map(msi);
	msi.erase(msi.begin(),msi.end());

	read_cin(msi);
	cout<<"New map: "<<endl;
	print_map(msi);
	cout<<endl;
	cout<<"Accumulate: ";
	cout<< accumulate(msi.begin(),msi.end(), 0, [] (int i, auto p) {return i+p.second;})<<endl;

map<int,string> mis;
for(const auto& i : msi)
mis[i.second]=i.first;
print_map(mis);


return 0;
}
