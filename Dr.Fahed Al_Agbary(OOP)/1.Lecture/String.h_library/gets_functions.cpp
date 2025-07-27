#include <iostream>
#include<string.h>
#include<cstdio>
using namespace std ;
int main(){
	/*
	Note : 
	1.cin.get(char_var,num,default = '\n')
	2.cin.get(paragraph,100); == cin.get(paragraph,100,'\n');
	*/
	

	/*
    char ch;
    char buffer[50];
    cout<<"We get only one character without storing it"<<endl;
    cin.get();
    cin.ignore(100,'\n');
    
    cout<<"We get only one character"<<endl;
    cin.get(ch);// One char
    cin.ignore(100,'\n');
    
    cout<<"We get character up to (enter) or 49 chars"<<endl;
    cin.get(buffer, 50);// Reads up to \n or 49 chars
    cin.ignore(100,'\n');
	*/
	
	

/*
//	🔴 Why cin.getchar(chr) is wrong:
//getchar() is a standalone function from the C standard library <cstdio>.
//It is not a member of cin, so you can't call it like cin.getchar().
	
	
	char chr = getchar();//#include <cstdio>
	cout<<chr<<endl;
	cin.ignore(10,'\n');
	
	chr=getchar();
	cout<<chr<<endl;
	cin.ignore(10,'\n');
	*/
	
	
	/*
	char paragraph[1000];
	cout<<"Enter (enter button =back slash n ) to get out of the string : "<<endl;
	cin.get(paragraph,100);
	cin.ignore(100,'\n');
	cout<<"Enter (enter button =back slash n ) to get out of the string : "<<endl;
	cin.get(paragraph,100,'\n');
	cout<<"Enter ( # ) then enter to get out of the string : "<<endl;
	cin.get(paragraph,100,'#');
	cout<<"Enter ( . ) then enter to get out of the string : "<<endl;
	cin.get(paragraph,100,'.');
	cin.ignore(100,'\n');
	*/
	
	
	/*by
	
	string paragraph;
	
	cout<<"Enter (enter button =back slash n ) to get out of the string : "<<endl;
	getline(cin,paragraph);
	cout<<"Enter ( ^ ) to get out of the string : "<<endl;
	getline(cin,paragraph,')');
	*/
	
	
	//The difference between cin.get and cin.getline 
	/*
	//cin.get leaves '\n' in the buffer
	char str[100];
	
	cout<<"enter your name : " ;
	cin.get(str,10);
	cout<<"enter your father's name : ";
	cin.getline(str,10);
	
	cout<<str<<endl;
	*/
	
	//cin.getline removes '\n' from the buffer
	char str1[100];
	
	cout<<"enter your name : " ;
	cin.getline(str1,10);
	cout<<"enter your father's name : ";
	cin.get(str1,10);
	
	cout<<str1<<endl;
	return 0;
	
}