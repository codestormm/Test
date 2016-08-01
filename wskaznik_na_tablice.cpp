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
//chcemy poruszać się po zdefiniowanej tablicy elementów typu int za pomocą wskaźnika, możemy zauważyć pewna analogie pomiedzy wskażnikami, a tablicami (po tablicy poruszamy sie po jej komórkach za pomoca numerów wskaźniki poruszają sie podobnie tyle,że mają dostęp do większego zasobu pamięci i operują na adresach poszczegolnych komórek pamieci.
//wykorzystujac tę analogie możemy skorzystać z uproszczonego zapsu przypisania pierwszego adresu zadeklarowanej tablicy do wskaźnika; otóż w języku c nazwa sama nazwa tablicy będzie odnosić sie jako wskaźnik do pierwszergo jej elementu

cout<<"Elementy tablicy:\n";
	for(int i=0;i<ile;i++)
	{
	cout<<*(tab+i)<<"\n";
	}



