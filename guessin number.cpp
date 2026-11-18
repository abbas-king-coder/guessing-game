#include<iostream>
using namespace std;
int main()

{
	char again;
	do
	{
	
	int guess,actual_number=10;
	cout<<"welcome to number guessing game the number should be in range from 1-100\n";
	cin>>guess;
	if(guess>actual_number)
	{
		cout<<"TOO HIGH!!!!\n";
	}
	else if(guess==actual_number)
	{
		cout<<actual_number<<endl;
		cout<<"GREAT JOB BUDDY\n";
		
	}
	else
	{
		cout<<"TOO LOW BETTER LUCK NEXT TIME\n";
	}
	cout<<"do you want to play again press Y/y\n";
	cin>>again;
}
	while(again=='y'||again=='Y');
	
	
}
