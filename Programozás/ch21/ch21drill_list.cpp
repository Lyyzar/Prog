#include "std_lib_facilities.h"



struct Item{

	string name;
	int iid;
	double value;
};

ostream& operator<<(ostream& os, Item& i)
{
	os<<i.name<<" "<<i.iid<<" "<<i.value<<endl;
	return os;
}

istream& operator>>(istream& is, Item& i)
{
	is>>i.name>>i.iid>>i.value;
	return is;
}

struct Compare_by_name{

	bool operator()(Item& a,Item& b) {return a.name<b.name;}
};

struct Compare_by_iid{
	
	bool operator()(Item& a,Item& b) {return a.iid<b.iid;}
};

struct Compare_by_value{
	
	bool operator()(Item& a,Item& b) {return a.value>b.value;}
};

void print_lis(list<Item>& vc)
{
for(int i=0;i<10;++i)
	cout<<vc[i];

}


int main(){
vector<Item> vi(10);
ifstream ifile {"data.txt"};


for(int i=0;i<10;++i)
	{
		ifile>>vi[i];
	}
	ifile.close();

cout<<"Before sort by name: "<<endl;
print_vec(vi);

sort(vi.begin(),vi.end(),Compare_by_name());

cout<<"After sort by name: "<<endl;
print_vec(vi);

sort(vi.begin(),vi.end(),Compare_by_iid());

cout<<"After sort by iid: "<<endl;
print_vec(vi);

sort(vi.begin(),vi.end(),Compare_by_value());

cout<<"After sort by value: "<<endl;
print_vec(vi);

vi.insert(vi.begin(),Item{"horse shoe",99,12.34});
vi.insert(vi.begin(),Item{"Canon S400",9988,499.95});
cout<<"After insert 2 Items: "<<endl;
print_vec(vi);

vi.erase(find_if(vi.begin(),vi.end(), [] (Item i) {return i.name=="Toothbrush";}));
vi.erase(find_if(vi.begin(),vi.end(), [] (Item i) {return i.name=="Lamp";}));
cout<<"After erased 2 Items: "<<endl;
print_vec(vi);


	return 0;
}