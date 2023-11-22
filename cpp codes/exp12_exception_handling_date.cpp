#include<iostream>
using namespace std;

class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		Date();
		void setDate(int day, int month, int year);
};

Date :: Date()
{
	day = 31;
	month = 5;
	year = 2022;
}

void Date :: setDate(int day, int month, int year)
{
	try
	{
		if(day > 31 || day < 0 || month > 12 || month < 0)
		{
			throw day;
		}
		else
		{
			cout<<day<<"-"<<month<<"-"<<year<<endl;
		}
	}
	catch(int day)
	{
		cout<<"Date is not valid"<<endl;
	}
}

int main()
{
	Date d;
	d.setDate(1,10,2022);
	return 0;
}
