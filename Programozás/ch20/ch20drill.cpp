#include "std_lib_facilities.h"


template<typename T>
void increase(T& t,int n){
for(auto& a : t)
	a+=n;
}



template<typename Iter1, typename Iter2>
Iter2 my_copy(Iter1 f1,Iter1 e1,Iter2 f2)
{
	for(Iter1 p=f1;p!=e1;++p)
		{
			*f2=*p;
			++f2;
			return f2;

		}
}


int main(){

	int array[] {0,1,2,3,4,5,6,7,8,9};
	vector<int> vec {0,1,2,3,4,5,6,7,8,9};
	list<int> lis {0,1,2,3,4,5,6,7,8,9};

	int array2[10];
	vector<int> vec2(10);
	list<int> lis2(10);

	copy(array,array+10,array2);
	vec2=vec;
	lis2=lis;

		
	increase(array2,2);
	increase(vec2,3);
	increase(lis2,5);


	//Array to the vector copy
		copy(array2, array2+10, vec2.begin());
	//List in to the array
		copy(lis2.begin(), lis2.end(), array2);

		if(find(vec2,3)!=vec2.end())
			cout<<"Position of the value 3 in the 2nd vector: " << find(vec2,3)-vec2.begin()<<endl;

		int pos=0;
		if(find(lis2,27)!=lis2.end())
		{
			
			for(auto i=lis2.begin();find(lis2,27)!=i;++i)
				{

					pos++;
		
				}
				
		}
		if(pos==0) cout<<"No match for 27"<<endl;
			else cout<<"Position of the value 27 in the 2nd list: "<<pos<<endl;
return  0;
}
