#include <iostream>
#include <ctime>			// Calender Time used as a seed for Random Number Generation
#include <cstdlib>	   

using namespace std;

int main()
{
	cout << " \t\t\t\t\t ##### CODSOFT INTERNSHIP ##### \n" ;
	
	cout << " \n ??? || Guess The Number || ??? \n";
	cout << "             - Can u guess it right ? I bet it won't be Easy ! \n";
	
	int mynum,usernum;
	
	srand(time(NULL));		// Generates Random Number 
	mynum = rand() % 100;	// Range includes from 0 - 100
	
	while(true)
	{
		cout << " \n Enter your Guess \t ";
		cin >> usernum;
		
		if (usernum == mynum)
		{
			cout << "\n Hurray !! \n | You got it Right \t | Congratulation's";
			break;
		}
		
		else if (usernum > mynum)
		{
			cout << "\n Guess Lower than  " << usernum;
		}
		
		else
		{
			cout << "\n Guess Higher than  " << usernum; 
		}
	}
	
	cout << "\n\n Thank You for your Partcipation ! ||  Stay Tuned for Upcoming Events ";
}
