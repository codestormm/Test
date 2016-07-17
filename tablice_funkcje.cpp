#include<iostream>

using namespace std;

//int sumuj(int wart[], int rozmiar)
//{
//int suma=0;

//	 for(int i=0; i<rozmiar;i++)
//	{
//		suma=suma+wart[i];	
//	}
//return suma;
//}

int wczytaj(int wart[],int rozmiar)
{
int suma=0;
	for(int i=0;i<rozmiar;i++)
	{
		wart[i]=i+1;
		cout<<"["<<i<<"]="<<wart[i]<<"\n";
		
	}	
		 for(int i=0; i<rozmiar;i++)
	{
		suma=suma+wart[i];	
	}
return suma;





}

int main()
{

int rozmiar;
cout<<"Ile kolejnych liczb ma wygenerować program?\n";
cin>>rozmiar;
int tab[rozmiar];
//wywołanie funkcji

//wczytaj(tab, rozmiar);
int wynik=wczytaj(tab, rozmiar);
cout<<"Suma "<<rozmiar<<" kolejnych liczb wynosi : "<<wynik<<"\n";









}
