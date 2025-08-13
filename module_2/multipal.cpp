#include<iostream>
#include<string>
using namespace std;
class father //base class
{
	public:
		string name;
}; 
class mother
{
	public:
		int age;
};
class child : public father,public mother //  2 drive class
{
	
};

int main()
{
	child c1;
	c1.name =" jeel ";
	c1.age =20;
	cout<<"name is : "<<c1.name<<"\nage is "<<c1.age<<endl;
}
