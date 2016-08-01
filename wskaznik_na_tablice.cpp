#include<iostream>

using namespace std;


int main()
{
int ile;
int liczba;
cout<<"Ile elementów ma miec tablica\n";
cin>>ile;
int tab[ile];
	for(int i=0;i<ile;i++)
	{
	cout<<"Podaj liczbę\n";
	cin>>liczba;
	tab[i]=liczba;
	}
//chcemy poruszać się po zdefiniowanej tablicy elementów typu int za pomocą wskaźnika, wiec przypisujemy mu adres pierwszej komórki tablicy
cout<<"Elementy tablicy:\n";
	for(int i=0;i<ile;i++)
	{
	cout<<*(tab+i)<<"\n";
	}







}
