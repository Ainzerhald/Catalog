#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <conio.h>
#include <cstdlib>

using namespace std;

char Baza (char *txt)
{
	string line;
	ifstream file(txt);
	cout<<file.rdbuf()<<endl;
}

int Case(int id)
	{
		string name;
		char *txt;
		int money,k;
		k=0;
		switch (id)
		{
			case 100:
				txt="100.txt";
			    break;
		    case 150:
		    	txt="150.txt";
		    	break;
		    case 200:
		    	txt="200.txt";			
		    	break;	
		    case 250:
		    	txt="250.txt";
		    	break;	
		    case 300:
		    	txt="300.txt";
		    	break;	
		    case 350:
			    txt="350.txt";
			    break;	
			case 400:
				txt="400.txt";
				break;	
			case 450:
				txt="450.txt";;
				break;	
			case 500:
				txt="500.txt";
				break;	
			case 550:
				txt="550.txt";
				break;	
			default:
				txt="baza.txt";
				cout<<"\nТовара с указанным Id не найдено\nПопробуйте найти нужный товар в базе данных\n"<<endl;
				k=1;
		}
		Baza(txt);
		cout<<endl;
	    return k;
	}

int Id(int id)
{   
    int k;
	cout<<"Введите id интересующего товара: ";
	cin>>id;
	Case(id);
	return k;	
}
	
int main()
{
	int id,k;
	setlocale(0,"");
	k=0;
	Id(id);
	while(k==0)
	{
		Id(id);
	}
	getch();
	return 0;
}
