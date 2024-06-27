#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	unordered_map<int ,string>record;
	
	record.insert(make_pair(3,"ria"));
	record[1]="bali";
	record[2]="animesh";
	record[3]="payal";
	
	record.insert(make_pair(3,"payal"));
	for(auto pair : record )
	{
		cout<<"ROLL NO"<<pair.first<<endl;
		cout<<"ROLL NO"<<pair.second<<endl;
	}
}
