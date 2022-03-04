#include "std_lib_facilities.h"

struct Person{

	private:
		string first;
		string last;
		int agee;
	public:
		Person () { };
		Person(string firstname,string lastname,int age);
		int age() const {return agee;}
		string first_name() const {return first;}
		string last_name() const {return last;}
};


Person::Person(string fn,string ln,int aa) : first{fn}, last{ln}, agee{aa}
{

	if(aa<1 || aa>150)
		error("Invalid age!");

	string fulname=fn + ln;
	for(char c : fulname){

switch(c){
	case ';':
	case ':':
	case '"':
	//case ''':
	case '[':
	case ']':
	case '*':
	case '&':
	case '^':
	case '%':
	case '$':
	case '#':
	case '@':
	case '!':
	case '.':
		error("Bad character in name!");
			break;
	default:
			break;
		}
}
}



ostream& operator<<(ostream& os,Person& p){

	return os<< p.first_name() << " "<<p.last_name()<<" "<<p.age()<<endl;
}

istream& operator>>(istream& is, Person& p){

	string f,l;
	int a;

	
	is>>f>>l>>a;
	p=Person(f,l,a);
	if(f==" " || l==" ") error("First or Last name is missing!");
	return is;
	}
	



int main ()
try{

	vector<Person> vp;
	Person p;
	while(cin>>p)
	{
		if(p.first_name()=="end") break;
			else vp.push_back(p);
	}

	for (Person p : vp)
		cout << p <<endl;




return 0;
}catch(exception& e){
	cerr<<e.what()<<endl;
	return 1;
}
