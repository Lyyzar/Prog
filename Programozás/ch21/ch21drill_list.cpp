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
for(auto& item:vc)
cout<< item<<endl;

}


int main(){
list<Item> vi(10);
ifstream ifile {"data.txt"};


for(auto& i : vi)
ifile>>i.name>>i.iid>>i.value;
	ifile.close();

cout<<"Before sort by name: "<<endl;
print_lis(vi);

vi.sort([] (Item a,Item b){return a.name<b.name;});

cout<<"After sort by name: "<<endl;
print_lis(vi);

vi.sort([] (Item a,Item b){return a.iid<b.iid;});

cout<<"After sort by iid: "<<endl;
print_lis(vi);

vi.sort([] (Item a,Item b){return a.value>b.value;});

cout<<"After sort by value: "<<endl;
print_lis(vi);

vi.insert(vi.begin(),Item{"horse shoe",99,12.34});
vi.insert(vi.begin(),Item{"Canon S400",9988,499.95});
cout<<"After insert 2 Items: "<<endl;
print_lis(vi);

vi.erase(find_if(vi.begin(),vi.end(), [] (Item i) {return i.name=="Toothbrush";}));
vi.erase(find_if(vi.begin(),vi.end(), [] (Item i) {return i.name=="Lamp";}));
cout<<"After erased 2 Items: "<<endl;
print_lis(vi);


	return 0;
}
