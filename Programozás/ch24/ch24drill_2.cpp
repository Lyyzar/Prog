#include "std_lib_facilities.h"
#include "Matrix.h"

using namespace Numeric_lib;

int main(){
	
	for(int i;cin>>i;)
	{
		if(i<0) cout<< "No square root!" << endl;
			else cout << sqrt(i)<<endl;
	}
	cin.clear();
	cin.ignore();

	cout<< "Please enter 10 elements for a matrix: " << endl;

	Matrix<double> ma(10);
	for(int i=0;i<10;++i)
	{
		cin>>ma[i];
	}
	cout<<"Our matrixs elements: "<<endl;
	for(int i=0;i<10;++i)
		cout<<ma[i]<<endl;

	cout <<"Enter how big Matrix you want to create: "<<endl;
	int n,m;
	cin>>n>>m;
	Matrix<int,2> table(n,m);

	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
			{
				table(i,j)=i+j*10;
				cout<<table(i,j)<<" ";
			}
			cout<<endl;
	}

	

	Matrix<int,2> mat(2,3);
	for(int i=0;i<2;++i)
	{
		for(int k=0;k<3;++k)
		{
			cin>>mat(i,k);
		}
	}

	for(int i=0;i<2;++i)
	{
		for(int k=0;k<3;++k)
		{
			cout<<mat(i,k)<<" ";
		}
		cout << endl;
	}
	return 0;
}