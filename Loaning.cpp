#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <limits>
#include <unordered_set>
#include <set>
using namespace std;

// void fastio(){
// 	#ifndef ONLINE_JUDGE

// 	freopen("input.txt", "r", stdin);

// 	freopen("output.txt", "w", stdout);

// 	#endif // ONLINE_JUDGE
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);
// }
struct Lender
{
	string name;
	string age;
	string amount;
	double intrest;
};
struct Borrower
{
	string name;
	string age;
	string amount;
	double intrest;
};





int main(){
	// fastio();
	// int choice;
	
	double intrews_borrow = 12.0;
	double intrest_lend = 6.0;
	vector<Borrower> borrower_list;
	vector<Lender> lender_list;
	while(true){
		string choice="";
		cout<<"Would you like to borrow or lend (1/2)?\n";
		getline(cin,choice);
		

		if(choice == "1"){
			Borrower borrower ;
			cout<<"\nPlease Enter the name\n";
			getline(cin,borrower.name);
			cout<<"\nEnter the age?\n";
			getline(cin,borrower.age);
			cout<<"\nEnter the amount you want to borrow?\n";
			getline(cin,borrower.amount);
			borrower.intrest = intrews_borrow;
			cout<<"\nYou will we charged "<<intrews_borrow<<" intrest\n" ;
			borrower_list.push_back(borrower);
		}
		// cout<<borrower_list.size();
		// for (int i = 0; i < borrower_list.size(); ++i)
		// {
		// 	cout<<borrower_list[i].name<<endl;
		// 	cout<<borrower_list[i].age<<endl;
		// 	cout<<borrower_list[i].amount<<endl;
		// 	cout<<borrower_list[i].intrest<<endl;

		// }
		else if(choice =="2"){
			Lender lender ;
			cout<<"\nPlease Enter the name\n";
			getline(cin,lender.name);
			cout<<"\nEnter the age?\n";
			getline(cin,lender.age);
			cout<<"\nEnter the amount you want to lend?\n";
			getline(cin,lender.amount);
			lender.intrest = intrest_lend;
			cout<<"\nYou will we charged "<<intrest_lend<<" intrest\n" ;
			lender_list.push_back(lender);
		}
		else 
			cout<<"\nWrong Output\n";
		string continue_ = "";
		cout<<"\nDo you want continue? (1/-1)\n";
		getline(cin,continue_);
		if(continue_=="1") continue;
		else break;
	}
	cout<<"\nAll the borrowers\n";
	for (int i = 0; i < borrower_list.size(); ++i)
		{
			cout<<"Name : "<<borrower_list[i].name<<endl;
			cout<<"Age : "<<borrower_list[i].age<<endl;
			cout<<"Amount : "<<borrower_list[i].amount<<endl;
			cout<<"Intrest Rate : "<<borrower_list[i].intrest<<endl;
			cout<<endl;
		}
	cout<<"\nAll the Lenders\n";
	for (int i = 0; i < lender_list.size(); ++i)
		{
			cout<<"Name : "<<lender_list[i].name<<endl;
			cout<<"Age : "<<lender_list[i].age<<endl;
			cout<<"Amount : "<<lender_list[i].amount<<endl;
			cout<<"Intrest Rate : "<<lender_list[i].intrest<<endl;

		}
}
