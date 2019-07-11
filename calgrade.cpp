#include<iostream>
using namespace std ;

void main ()
{
	

	int a  ;
	cout << "Enter Score : ";
	cin >> a;
	
	cout << "\n";
	
	if (a>100)
	{
		cout <<" Text error  please enter score again " << endl ; 
	}
	else if (a>=90)
	{
		cout <<" GRADE A" <<  endl ;
	}
	else if (a>=80)
	{
		cout <<" GRADE B" <<  endl ;
	}
	else if (a>=70)
	{
		cout <<" GRADE C" <<  endl ;
	}
	else if (a>=60)
	{
		cout <<" GRADE D" <<  endl ;
	}
	else if (a>=0)
	{
		cout <<" GRADE F" <<  endl ;
	}
	else 
	{
		cout <<" Text error  please enter score again " << endl ; 
	}

	cout << "\n";
}