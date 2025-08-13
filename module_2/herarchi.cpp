#include<iostream>
#include<string>
using namespace std;
class person //base class
{
	public:
		int age;
}; 
class student : public person // drive class
{
	public:
		int stud_id;
};
class emp : public person //  2 drive class
{
	public:
		int emp_id;
};

int main()
{
	student s1;
	s1.age=20;
	s1.stud_id=1;
	
	emp e1;
	e1.age=26;
	e1.emp_id=1;
	
	cout<<"age is : "<<s1.age<<"\n student id is "<<s1.stud_id<<endl;
	cout<<"age is : "<<e1.age<<"\n student id is "<<e1.stud_id<<endl;

}
