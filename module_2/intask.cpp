#include<iostream>
#include<string.h>
using namespace std;

class vehical
{
	public:
	    string name;
		string model;
		
	void display_info(string name,string model,int door)
	{
		cout<<"car name = "<<name<<" car mmodel = "<<model<<endl;
		cout<<"no of door = "<<door<<endl;
	}
	
};
class car : public vehical
{
	int door;
};
class motorcycle : public vehical
{
	
};
int main()
{
	car c1;
	c1.display_info("Maruti","Zen",25);
	
	
}
