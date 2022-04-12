#include "std_lib_facilities.h"

/*
print_map(map<string,int>& ma)
{





}

ostream& operator<<(ostream& os, map<string,int>)
*/
int main(){


	map<string,int> msi;
	string a;
	int b;
	
	while(cin>>a>>b && b!='q')
	{
	msi[a]=b;
	}
	for(int i=0;i<msi.size();++i)
	cout<<msi.first<<msi.second<<endl;






return 0;
}
