#include "std_lib_facilities.h"

template<typename Iterator,typename T,typename BinOp>
T acc(Iterator first, Iterator last, T init,BinOp op)
{
	while(first!=last)
	{
		init=op(init,*first);
		++first;
	}
	return init;
}


double sum(double a,double b)
{
return a+b;
}

template<class T>
void print_vec(vector<T>& vec)
{
	for(auto& p : vec)
	cout<<p<<endl;


}

int main(){

vector<double> vd(16);
vector<int> vi(16);
vector<double> vd2(16);

ifstream ifile("numbers.txt");
for(int i=0;i<16;++i)
ifile>>vd[i];

print_vec(vd);

copy(vd.begin(),vd.end(),vi.begin());
print_vec(vi);

//4.
for(int i=0;i<16;++i)
cout<<'('<<vd[i]<<','<<vi[i]<<')'<<endl;

//5. sum of the elemnts for vd
cout<<"Sum of the vd vector: ";
cout<<acc(vd.begin(),vd.end(),1.0,sum)<<endl;

//6. difference between the sum of the vd and the vi elements
cout<<"Difference between the 2 vectors sums: ";
cout<<acc(vd.begin(),vd.end(),1.0,sum)-acc(vi.begin(),vi.end(),1.0,sum)<<endl;



//7. Reverse vd
reverse(vd.begin(),vd.end());
print_vec(vd);

//8.
cout<<"The mean value of the elements in vd: ";
cout<<acc(vd.begin(),vd.end(),1.0,sum)/16<<endl;

//10. Sort vd
sort(vd.begin(),vd.end(),[](double& a,double& b){return a<b;});
print_vec(vd);

return 0;
}
