/*
Testing inputs : 
1- ch = Ahmed , ch1 = Basam
2- ch = ahmed , ch1 = Basam (case sensitive)
3- ch = car , ch1 = cat
4- ch = cat , ch1 = caty
5- ch = Zayed Sultan , ch1 = Zayed Mohammed
*/


//strcmp() function
#include <iostream>
#include<string.h>
using namespace std ;
int main(){
	
	//string.h functions only works with char datatype
	
	char ch[20];
	char ch1[20];
	
	cout<<"enter ch : "<<endl;
	cin.get(ch,20);
	cin.ignore(1000,'\n');
	cout<<"enter ch1 : "<<endl;
	cin.get(ch1,20);
	
	//function -->> strcmp() to order names by letters (case sensitive (small , capital))
	cout<<strcmp(ch,ch1)<<endl;
	if (strcmp(ch,ch1)== 0)cout<<ch<< " = "<<ch1<<endl;
	else if(strcmp(ch,ch1)<0){
		 cout<<ch <<">"<< ch1<<endl;
		 cout<<ch<<endl;
		 cout<<ch1<<endl;
		 
		 }
	else{
		 cout<<ch <<"<" <<ch1<<endl;
		 cout<<ch1<<endl;
		 cout<<ch<<endl;
		 }
	return 0;
}

/*
//my own strcmp() function
//I have to test my function with all cases up
#include <iostream>
using namespace std ;
int mystrcmp(char name1[], char name2[]){
	
	for (int i{}; (name1[i]!='\0' or name2[i]!='\0'); i++)
		if (name1[i] != name2[i])
			return name1[i] - name2[i];
			
	return 0;//this will execute only if name1 = name2
}

int main(){
	char firstName[10] , secondName[10];
	
	cout<<"Enter first name : ";
	cin.get(firstName , 10);
	cin.ignore(1000,'\n');
	
	cout<<"Enter second name : ";
	cin.get(secondName , 10);
//my stringcompare() function that works the same as strcmp() function	
	
	if (mystrcmp(firstName, secondName) == 0 ){
		cout<<firstName<< " = "<<secondName<<endl;
		cout<<firstName<<endl;
		cout<<secondName<<endl;
	}else if (mystrcmp(firstName , secondName)<0){
		cout<<firstName<< " > "<<secondName<<endl;
		cout<<firstName<<endl;
		cout<<secondName<<endl;
		}else{
			cout<<firstName<< " < "<<secondName<<endl;
		cout<<secondName<<endl;
		cout<<firstName<<endl;
			}
	
	return 0;
}
*/

/*
//better version of my function improved by chatGPT 
#include <iostream>
using namespace std ;
int mystrcmp(const char* name1, const char* name2) {
    for(int i{}; name1[i] != '\0' || name2[i] != '\0';i++) {
        if (name1[i] != name2[i])
            return name1[i] - name2[i];
    }
    return 0;
}

int main(){
	
	char firstName[10] , secondName[10];
	
	cout<<"Enter first name : ";
	cin.get(firstName , 10);
	cin.ignore(1000,'\n');
	
	cout<<"Enter second name : ";
	cin.get(secondName , 10);
//my stringcompare() function that works the same as strcmp() function	
	
	if (mystrcmp(firstName, secondName) == 0 ){
		cout<<firstName<< " = "<<secondName<<endl;
		cout<<firstName<<endl;
		cout<<secondName<<endl;
	}else if (mystrcmp(firstName , secondName)<0){
		cout<<firstName<< " > "<<secondName<<endl;
		cout<<firstName<<endl;
		cout<<secondName<<endl;
		}else{
			cout<<firstName<< " < "<<secondName<<endl;
		cout<<secondName<<endl;
		cout<<firstName<<endl;
			}
	
	return 0;
}
*/

/*
//mystrcmwords() -->> will be uses for ordering more than two names or any other words or sentences

#include <iostream>
#include<vector>
#include<string.h>
using namespace std ;
vector <string> mystrcmpwords( vector <string> str ){
	string strCopy;
	for (int i{}; i<str.size() ; i++){
		for (int j = i; j<str.size() ;j++){
			
			for (int k{}; k<(str[i].length()>str[j].length())? str[i].length(): str[j].length();k++){
			if (str[i][k] > str[j][k]){
				strCopy = str[i];
				str[i]=str[j];
				str[j]=strCopy;
				break;
				}
				else{
						break;
						}
			}
		}
	}
	return str;
}
int main(){
	vector <string> FullStudentsnames;
	vector <string> n;
	int num;
	
	cout<<"How many students you want to add : ";
	cin>>num;
	cin.ignore();//this is so important
	FullStudentsnames.resize(num);
	
	for(int i{}; i <num; i++){
		cout<<"Enter"<<i+1<<" student full name : ";
		getline(cin,FullStudentsnames[i]);
		}
		
		n=mystrcmpwords(FullStudentsnames);


		for (int i{0}; i<num; i++){
			cout<<n[i]<<endl;
			}
	return 0;
}
*/