#include<iostream>
using namespace std;

class Person
{
	private :
		string person_name;
		int person_id;
	public :
		Person();
		void setName(int person_id, string person_name);
};

Person :: Person()
{
	person_id = 1;
	person_name = "Abc";
}

void Person :: setName(int person_id, string person_name)
{
	try
	{
		if(person_name == "")
		{
			throw person_name;
		}
		else
		{
			cout<<person_id<<"	"<<person_name<<endl;
		}
	}
	catch(string person_name)	
	{
		cout<<"Name is not valid"<<endl;
	}
}

int main()
{
	Person p;
	p.setName(6, "");
	return 0;
}
