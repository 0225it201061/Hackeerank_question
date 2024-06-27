#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<string ,int>m;
	m["nidhi"]=2345;
	m["riya"]=5687;
	m["sona"]=4567;
	m["yashi"]=6789;
		m["riya"]=8900;
	for(auto element : m)
	{
		cout<<"NAME"<<element.first<<endl;
		cout<<"phone num"<<element.second<<endl;
	}
	map<string.int>::reverse_iterator itr;
	
	// reverse hashing//
	for(itr= m.begin(); itr!= m.end(); itr++)
	{
		cout<<itr->first<<" "<<itr->second<<endl;
	}

}
