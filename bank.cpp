#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int update_balance(string,float,float);
int update_balance(string,int,float);
int main()
{
	string ch;
	float dollar=0,balance=10000;
	cout << "Exit with 0\n";
	do{
	cout << "Your balance = " << fixed << setprecision(2) << balance << endl;
	cout << "Input command (1 or withdraw , 2 deposit) : ";
	cin >> ch;
	balance=update_balance(ch,dollar,balance);
	}
	while(ch != "0");
}
int update_balance(string x,float y,float z)
{
	
	if(x == "1")
	{
		cout << "Input amount : ";
	cin >> y;
	z=z-y;
	}
	else if(x == "2")
	{
		cout << "Input amount : ";
	cin >> y;
	z=z+y;
	}
	return(z);
}