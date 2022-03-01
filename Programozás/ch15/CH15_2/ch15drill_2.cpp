#include "std_lib_facilities.h"

struct Person{

	private:
		string first_name;
		string last_name;
		int age;
	public:
		Person(first_name,last_name,age);
		int get_age() const {return age;}
		string get_first_name() const {return first_name;}
		string get_last_name() const {return last_name;}
};

ostream& operator<<(ostream& os,Person& p){

	return os<< p.first_name << " "<<p.last_name<<" "<<p.age<<endl;
}

istream& operator>>(istream& is, Person& p){

	is>>p.get_first_name()>>p.get_last_name()>>p.get_age();
	if(p.get_age()<0 || p.get_age()>150) error("Invalid age!");
	
	/*switch(...)
	case ';':
	case ':':
	case '"':
	case ''':
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
	*/
	return is;

}

int main ()
try{

	
	Person c;
	cin>>c;
	cout <<c;





return 0;
}catch(exception& e){
	cerr<<e.what()<<endl;
	return 1;
}
