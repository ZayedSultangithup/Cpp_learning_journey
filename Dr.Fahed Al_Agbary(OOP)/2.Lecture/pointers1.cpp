#include <iostream>
using namespace std ;
int main(){
	const int SIZE {10};
	
	/*
	//first way

	int *p = new int[SIZE];
	
	for (int i =0 ;i<SIZE; i++){
		cin>>*p;
		p++;
		}
		for (int i=0; i<SIZE; i++){
			p--;
			cout<<*p;
			//cout<<p<<endl;//try this line and focus on the last digit in every address to find how elements of pointer array  arrange in memory. every element takes 4 bits in memory 
			}
	*/
	
	/*
	//second improved way

	int *p = new int[SIZE];
	
	int *temp = p;
	
	for (int i =0 ;i<SIZE; i++){
		cin>>*p;
		p++;//
		}
		p=temp;
		for (int i=0; i<SIZE; i++){
			//cout<<*p;
			cout<<p<<endl;//try this line and focus on the last digit in every address to find how elements of pointer array  arrange in memory. every element takes 4 bits in memory 
			p++;//*p++;
			
			}
		*/
	
	/*
	//third and the best way

	int *p = new int[SIZE];
	
	for (int i =0 ;i<SIZE; i++){
		cin>>*(p+i);//*(p+i) == p[i]
	}
	for (int i=0; i<SIZE; i++){
		cout<<*(p+i);//*(p+i) == p[i]
	}
	*/
	
	
	/*
	//this code is to know how addresses are arranged in memory
	int x = 10;
	int *p = &x;
	
	cout<<p<<endl;//we allocate this address in memory for our use 
	cout<<++p<<endl;//this is not our address
	cout<<++p<<endl;//this is not our address
	cout<<++p<<endl;//this is not our address
	cout<<++p<<endl;//this is not our address
	cout<<++p<<endl;//this is not our address
	cout<<++p<<endl;//this is not our address
	cout<<++p<<endl;//this is not our address
	cout<<++p<<endl;//this is not our address
	*/
	
	
	/*
	int a = 7;
//p pointer point to variable (a)
	int *p =&a;
	cout<<p<<endl;
	cout<<*p<<endl;
	
//*q pointer point to another pointer (p) that point to variable (a)
	int **q=&p;
	cout<<*q<<endl;
	cout<<**q<<endl;
	
//**z pointer point to pointer (*q) that point to another pointer (p) that point to variable (a)
	int ***z=&q;
	cout<<**z<<endl;
	cout<<***z<<endl;
	*/
	
	
	int x[4]={11,2,3,4};
	cout<<x[0]<<endl;//11
	cout<<*x<<endl;//11
	cout<<x[0] + 1 <<endl;//12
	cout<<*x+1<<endl;//12
	cout<<x[1]<<endl;//2
	cout<<*(x+1)<<endl;//2
	
	char chr[7]={'a','b','c','H' ,NULL, 'h','s'};
	cout<<chr;

	return 0;
}