#include <iostream>
#include <string>
using namespace std;

void main()

{
 string  password1, username1 , password2, username2 ; 
 int a ,e1 ,e2;
	
 cout << "/////////////Menu/////////////" << endl ;
 cout << "1. Register" << endl ;
 cout << "2. Login" << endl ;
 cout << "Q. Exit Program" << endl ;
 cout << "------------------------------" << endl ;

 cout << "Enter Menu : "  ;
 cin >>  a ;
 switch (a) 
 
 {
 case 1 :
	 cout <<"********Register********"<< endl ; 
     cout << "Input Username : "  ;
	 cin >> username1;
    
	 cout << "Input Password : "  ;
	 cin >> password1;
	
 case 2 :
 cout <<"********Login********"<< endl ; 
     cout << "Input Username : "  ;
	 cin >> username2;
     cout << "Input Password : "  ;
     cin >> password2;
	
	 if (password1==password2)
	   e1 = 1 ;
	 else if (password1!=password2)
	   e1 = 3 ; 

	 if (username1==username2) 
	   e2 = 1 ; 
	 else if (username1!=username2) 
	   e2 = 2 ; 
	 if (e1==e2)
		 cout << "Uername or Password correct ^___^"<< endl ; 
	 else  cout << "Uername or Password incorrect Please try again !!!"<< endl ;
     break ; 
 
 default: 
	 cout <<"Exit Program....."<< endl ; 
}



}
