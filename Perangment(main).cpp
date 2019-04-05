/*
Project name: Perangment
Description: This program can find the Atlaynsh(Perish) of the number which you enter it to the program.
Course name: Combanations introductory
Master: Adel Kazemi
Producer: Navid Ebapour
*/
#include <algorithm>
#include <conio.h>
#include <windows.h>
#include <iostream>
using namespace std;
char ch1;
int counter = 0;
int arr[100];
bool bo1;
int number;
int source = 0;
void find_Atlaynsh(int);
int main()
{
	
	system("color E5");
	cout<<"                      ((  W";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"l";
	Sleep(100);
	cout<<"c";
	Sleep(100);
	cout<<"o";
	Sleep(100);
	cout<<"m";
	Sleep(100);
	cout<<"e";
	system("color A4");
	
	Sleep(100);
	cout<<" t";
	Sleep(100);
	cout<<"o";
	
	system("color E5");
	Sleep(100);
	cout<<" t";
	Sleep(100);
	cout<<"h";
	Sleep(100);
	cout<<"e";
	
	
	Sleep(100);
	cout<<" P";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"r";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"n";
	Sleep(100);
	cout<<"g";
	Sleep(100);
	cout<<"m";
	system("color A4");
	
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"n";
	Sleep(100);
	cout<<"t";
	Sleep(100);
	cout<<"  ))"<<endl;
	
	
	cout<<"               ::   T";
	Sleep(100);
	cout<<"h";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"s";
	system("color E5");
	
	Sleep(100);
	cout<<" P";
	Sleep(100);
	cout<<"r";
	Sleep(100);
	cout<<"o";
	Sleep(100);
	cout<<"j";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"c";
	Sleep(100);
	cout<<"t";
	
	
	cout<<" i";
	Sleep(100);
	cout<<"s";
	system("color A4");
	
	Sleep(100);
	cout<<" m";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"d";
	Sleep(100);
	cout<<"e";
	
	
	Sleep(100);
	cout<<" b";
	Sleep(100);
	cout<<"y";
	system("color E5");
	
	Sleep(100);
	cout<<" N";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"v";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"d";
	
	system("color A4");
	Sleep(100);
	cout<<" E";
	Sleep(100);
	cout<<"b";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"p";
	Sleep(100);
	cout<<"o";
	Sleep(100);
	cout<<"u";
	Sleep(100);
	cout<<"r  ::"<<endl;
	system("color E5");
	
		cout<<"               ::   S";
	Sleep(100);
	cout<<"p";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"c";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"l";
	system("color A4");
	
	Sleep(100);
	cout<<" T";
	Sleep(100);
	cout<<"h";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"n";
	Sleep(100);
	cout<<"k";
	Sleep(100);
	cout<<"s";
	
	Sleep(100);
	cout<<" f";
	Sleep(100);
	cout<<"r";
	Sleep(100);
	cout<<"o";
	Sleep(100);
	cout<<"m";
	system("color E5");
	
	Sleep(100);
	cout<<" d";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"r";
	
	system("color A4");
	Sleep(100);
	cout<<" Mr.";
	Sleep(100);
	cout<<"A";
	Sleep(100);
	cout<<"d";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"l";
	Sleep(100);
	cout<<" k";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"z";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"m";
	Sleep(100);
	cout<<"i::"<<endl<<endl;
	system("color 0F");
	
	cout<<"Please enter (s) for starting the program and (e) to exit from the program :";
	while(bo1=true)
	{	
	cin>>ch1;
	if(ch1=='s') {bo1=true; break;}
	else if(ch1=='e')
	{	
	cout<<endl<<endl<<"            :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"            Thank you for using this program; have a good time !"<<endl;
	cout<<"            :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl<<endl;
	return 0;
	}
	else cout<<"Sorry sir; you can only enter (s) or (e) to continue: ";
	}
	cout<<endl<<endl;
	cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<endl<<endl;
    cout << "First of all, enter the number which you want to find it's Atlaynsh.";
    cout << endl<< "Your number is: ";
    cin >> number;
    cout<<endl;
    int i = 1;
    while(i <= number){arr[i - 1] = i;i++;}    
	find_Atlaynsh(0);
    cout << endl<< "The number of perangments that are available for "<< "'" << number << "'"<< ": " << counter<<endl<<endl;
    cout<<"                        Press any key to end the program. ";
    getch();
    return 0;
}
void find_Atlaynsh(int q)
{	
	int i = 0;
    while (i < number){if (arr[i] == i + 1)source = 1;i++;}
	if(q == number - 1 && source == 0){i = 0;while (i < number){cout << arr[i] << "  ";i++;} cout << endl; counter++; return;}	source = 0;
    i = q;
    while (i < number)
    {int flag = arr[q];arr[q] = arr[i];arr[i] = flag;find_Atlaynsh(q + 1);arr[i] = arr[q];arr[q] = flag;i++;} 
}

