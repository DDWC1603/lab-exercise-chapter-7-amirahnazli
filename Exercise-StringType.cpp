//nur amirah afiqah binti mohd.nazli
//a17dw2172
//compare two strings
//complete the program below. 

#include <iostream>
#include <string>
using namespace std;

int main()
{

	string myName="mira";//write your name there.
	//make a while loop until user input 'quit' to exit/end the program
	string userName;
	
	while(true)
	{
		cout<<"Enter your name (or 'quit' to exit): ";
		cin>>userName;
		//get the user input for string.
		
		if(userName == "tira")
	    {
			cout<<"Hey TIRA! Welcome back!"<<endl;
		}
		
		else if(userName == "quit")
		{
			cout<<endl;
			break;
		}
		
		else if (userName != myName)
		{
			cout<<"Hello, " <<userName <<"!" <<endl;
		}
		
		else
		{
			cout<<"Aha! its "<<myName<<endl;
		}
	}
	return 0;
}

