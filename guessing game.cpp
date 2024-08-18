#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
#include<windows.h>

using namespace std;


int getuserchoice();
void playGame(int range, int maxAttempts);
bool playAgain();

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	
	do
	{
		int userchoice = getuserchoice();
		
		switch(userchoice)
		{
			case 1:
				playGame(10, 3);
				break;
			case 2:
				playGame(100, 4);
				break;
			case 3:
				playGame(1000, 5);
				break;
			default:
				cout<<"<<<<***###       You Entered Invalid Choice.        ###***>>>>      Exiting Program.      "<<endl<<endl;
				return 0;
		}
	}
	while (playAgain());
	
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t\t";
	for(int i=0; i<25; i++)
	{
		cout<<".";
		Sleep(30);
	}
	cout<<"   Thanks for Playing Game!    GoodBye.  ";
	for(int i=0; i<25; i++)
	{
	cout<<".";
	Sleep(30);
	}
	cout<<"\n\n";
	cout<<"\t\t\t\t \t\t*****************************************"<<endl;
	
	return 0;
	
}

int getuserchoice()
{
	int choice;

	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t\t";
	for(int i=0; i<25; i++)
	{
		cout<<".";
		Sleep(30);
	}
	cout<<"  Welcome to the Guessing Number Game!  ";
	for(int i=0; i<25; i++)
	{
		cout<<".";
		Sleep(30);
	}
	cout<<"\n\n";
	cout<<"....................This game is made by  M Shoaib ,Rameez Akhter , Ubaid ul Rehman and waqas Ahamad....................";
	cout<<"\n\n";
	cout<<"\t\t\t\t \t\t*****************************************"<<endl;
	for(int i=0; i<120; i++)
	{
		cout<<".";
		Sleep(25);
	}
	cout<<"\n\n\n";
	cout<<"\t\t\t\t";
		for(int i=0; i<15; i++)
	{
		cout<<".";
		Sleep(30);
	}
	
	cout<<" Choose the Difficulty Level .";
		for(int i=0; i<15; i++)
	{
		cout<<".";
		Sleep(30);
	}
	cout<<"\n\n";
	cout<<"   *****  1. Easy  (1 - 10,   3 attempts )      *****  "<<endl;
	cout<<"   *****  2. Normal  (1 - 100,   4 attempts )  ***** "<<endl;
	cout<<"   *****  3. Hard  (1 - 1000,   5 attempts )   *****  "<<endl<<endl;
	cout<<" Enter Your Choice ( 1, 2  or  3):        ";
	
	while (true)
	{
		cin>>choice;
		
		if(cin.fail() || (choice < 1 || choice > 3))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<" *********    Invalid input Please Enter  1, 2  or  3.      **********"<<endl<<endl;
		}
		else
		{
			break;
		}
	}
	
	return choice;
}

void playGame(int range, int maxAttempts)
{
	int secretNumber= rand() % range + 1;
	int guess;
	int attempts=0;
	
	cout<<"\nGuess the Number Between 1 and "<<range<<" . You have "<<maxAttempts<<" attempts ."<<endl;
	
	while(attempts < maxAttempts)
	{
		cout<<"Attempt "<<attempts + 1 <<" : Enter you Guess: ";
		while(true)
		{
			cin>>guess;
			
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"**************          Invalid input . Please Enter a  Number:         **************"<<endl<<endl;
			}
			else
			{
				break;
			}
		}
		
		attempts++;
		
		if(guess==secretNumber)
		{
			cout<<"\t\t\t";
			for(int i=0; i<25; i++)
	        {
		        cout<<".";
	        	Sleep(20);
	        }
			cout<<"***   Congratulation!!!!!   ***";
			for(int i=0; i<25; i++)
	        {
		        cout<<".";
	        	Sleep(20);
        	}
        	cout<<"\n\n";
			cout<<" \t\t\t\t\t***** You Guessed the Correct Number in "<< attempts<<" attempts. *****"<<endl<<endl;
			for(int i=0; i<120; i++)
	        {
		        cout<<".";
	        	Sleep(20);
        	}
        	cout<<"\n\n\n";
			return;
		}
		else
		{
			system("CLS");
			
			
			
			int remainingAttempts= maxAttempts - attempts;
			cout<<"\n\n\n\n";
			cout<<"\t\t\t\t";
			for(int i=0; i<10; i++)
	        {
		        cout<<"*";
	        	Sleep(20);
        	}
			cout<<"  Incorrect  Guess. Remaining attempts: "<<remainingAttempts<<"  ";
			for(int i=0; i<10; i++)
	        {
		        cout<<"*";
	        	Sleep(20);
        	}
        	cout<<"\n\n";
			if(guess < secretNumber)
			{
				cout<<"\t\t\t\t\t    ******   Try a Higher Number.  ****** "<<endl<<endl;
			}
			else
			{
				cout<<"\t\t\t\t\t    ******   Try a Lower Number.   ****** "<<endl<<endl;
			}
		}
	
	}
	cout<<"\n\n\n\n\n\n";
	cout<<"\t";
	for(int i=0; i<17; i++)
	{
		cout<<"*";
		Sleep(30);
	}
	
	cout<<"   Sorry!!!,    You run out of attempts. The correct Number was: "<<secretNumber<<"  ";
	for(int i=0; i<17; i++)
	{
		cout<<"*";
		Sleep(30);
	}
	cout<<"\n\n";
	cout<<"\t\t\t\t \t*****************************************"<<endl<<endl;
	
}

bool playAgain()
{
	char choice;
	cout<<"\t\t\t";
	for(int i=0; i<20; i++)
	{
		cout<<".";
		Sleep(20);
	}
	
	cout<<"    Do you want to Play Again? (y/n) :    ";
	for(int i=0; i<20; i++)
	{
		cout<<".";
		Sleep(20);
	}
	cout<<"\n";
	while(true)
	{
		cin>>choice;
		system("CLS");
		
		if(cin.fail() || (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N'))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\n\n\n\n";
			cout<<"\t\t";
			cout<<"**********       Invalid input. Please Enter 'y' or 'n' :      **********"<<endl<<endl;
		}
		else
		{
			break;
		}
	}
	
	return (choice == 'y' || choice == 'Y');
}
