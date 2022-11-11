#include <iostream>
#include <cstdlib>

using namespace std;
int nr_miesiaca;

int main()
{

for(;;)
{
    cout << "Podaj numer miesiaca: ";

    if (!(cin>>nr_miesiaca))
    {
        cerr<<"To nie jest liczba!";
        exit(0);
    }

    switch(nr_miesiaca)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<"Ten miesiac ma 31 dni!"<<endl;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout<<"Ten miesiac ma 30 dni!"<<endl;
        break;

    case 2:
    {
        int rok;
        cout<<"Podaj rok: ";
        cin>>rok;

    if((rok%4==0 && rok%100!=0) || rok%400==0)
		cout<<"Rok "<<rok<<" jest przestêpny." <<endl;
	else
		cout<<"Rok "<<rok<<" nie jest przestêpny."<<endl;

	cout<<endl;
    }
break;
    }
}
    return 0;
    }
