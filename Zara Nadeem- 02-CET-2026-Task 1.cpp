#include<iostream>
using namespace std;
int main()
{

	int age;
	char grade;
	float marks;
	double salary;
	bool pass;
	
	cout << "Enter Age: ";
	cin >> age;
	
	cout << "Enter Grade: ";
    cin >> grade; 
    
    cout << "Enter Marks: ";
    cin >> marks;
    
    cout << "Enter Salary: ";
    cin >> salary;
    
    cout << "Enter Pass(1,0): ";
    cin >> pass;
    
    cout.precision(10);
    cout<<"Age = "<< age <<endl;
    cout<<"Grade = "<< grade <<endl;
    cout<<"Marks = "<< marks <<endl;
    cout<<"Salary = "<< salary <<endl;
    cout<<"Pass = "<< pass <<endl;
    return 0;
}
