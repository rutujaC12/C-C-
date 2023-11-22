#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
string movieName;
int no_ticket_sold;
double percentDonation;
double grossAmount;
double amountDonated;
double netSaleAmount;
cout<<fixed << showpoint << setprecision(2);
cout<<"Enter the movie name: ";
getline(cin, movieName);
cout<<endl;
cout<<"Enter the number of tickets sold: ";
cin>>no_ticket_sold;
cout<<endl;
cout<<"Enter the percentage donated: ";
cin>>percentDonation;
cout<<endl;
cout<<"Enter the amount donated: ";
cin>>amountDonated;
cout<<endl;
cout<<"Enter the gross amount: ";
cin>>grossAmount;
cout<<endl;
cout<<"Enter the net sale amount: ";
cin>>netSaleAmount;
cout<<endl;
cout << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl<<endl;
cout<<setfill('.')<< left<<setw(35)<<"Movie Name: "<<setfill(' ')<<right<<setw(7)<<movieName<<endl;
cout<<left<<setw(35)<<"Number of Tickets Sold: "<<setfill(' ')<<right<<setw(6)<<no_ticket_sold<<endl;
cout<<setfill('.')<<left<<setw(35)<<"Gross Amount: "<<setfill(' ')<< right<<"$"<<setw(8)<<grossAmount<<endl;
cout<<setfill('.')<<left<<setw(35)<<"Precentage of Gross Amount Donated: "<<setfill(' ')<<right<<setw(8)<<percentDonation<<'%'<<endl;
cout<<setfill('.')<<left<<setw(35)<<"Amount Donated: "<<setfill(' ')<<right<<"$"<<setw(8)<<amountDonated<<endl;
cout<<setfill('.')<<left<<setw(35)<<"Net Sale: "<<setfill(' ')<<right<<"$"<<setw(8)<<netSaleAmount<<endl;
return 0;
}
