
#include<iostream>
#include<string>
using namespace std;






                           //1//


int addnumbers(int first_param, int second_param) {
	int result = first_param + second_param;
	return result;
}
int main()
{
	int first_number{ 3 };
	int second_number{ 7 };
	int sum = first_number + second_number;

	cout << "first_number : " << first_number << endl;//3
	cout << "second_number : " << second_number << endl;//7

	cout << "the sum is : " << sum << endl;//10

	sum = addnumbers(5, 10);
	cout << "the sum is : " << sum << endl;//50

	sum = addnumbers(2, 10);
	cout << "the sum is : " << sum << endl;//20
}





/*
int multnumbers(int first_param, int second_param) {

	int result = first_param * second_param;
	return result;
}
int main()
{
	
	int first_number{ 3 };
	int second_number{ 7 };
	int sum = first_number + second_number;
	
	cout << "first_number : " << first_number << endl;//3
	cout << "second_number : " << second_number << endl;//7

	cout << "the summation result is : " << sum << endl;//10

	int mult;
	mult = multnumbers(5, 10);
	cout << "the multiplication result is : " << mult << endl;//50

	mult = multnumbers(2, 10);
	cout << "the  multiplication result is : " << mult<< endl;//20

	return 0;
}

*/




/*

int main()
{
	int age;
	string name;

	cout << "type your name : ";
    cin >> name;

	cout << "type your age : ";
    cin >>  age;

	cout << "Hello " << name << " you are " << age << " years old" << endl;


}

*/
