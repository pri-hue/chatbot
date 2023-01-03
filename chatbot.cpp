// chatbot using c++
#include<windows.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
	
	char input;
	char y,n,Y,N;
	string name;
	string getkey;
	int age;
	
	cout<<"\t\t_WELCOME TO CHATBOX_\n\n";
	cout<<" To continue program type 'Y' and to end type 'N'-\n";
	cout<<"-->";
	cin>>input;
	
	// Condition whether its y or n
	if(input=='y' || input=='Y'){
		cout<<"\nWelcome....!";
	}
	else{
		cout<<"\nThanks for coming";
		return 0;
	}
	
	// Clean out the terminal
	system("cls");   
	
	if(getkey!="bye"){
		cout<<"\t HELLO USER \n";
		cin>>getkey;
		cout<<"\n What is your name? \n";
		cin>>name;
		cout<<name<<" "<<"what is your age? \n";
		cin>>age;
		
		  switch(age){
		  	case 15:
		  		cout<<"You are a teenage!";
		  		break;
		  	case 18:
			    cout<<"You are a young!";
			    break;
			case 30:
				 cout<<"You are a man!";
				 break;
			default:
			     cout<<"Nothing to say about your age!";
		  }
		  cout<<"\n bye bye!";
		  cin>>getkey;
	}
	cout<<endl;
	cout<<"\t\t\tPROGRAM END HERE.";
	return 0;
}