#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input;
	cout<<"Enter the string "<<endl;
	getline(cin,input);
	
	int length = input.length();
	for(int i=0; i<=length; i++)
	{
	
	cout<<input[length-i];
}
	
}



