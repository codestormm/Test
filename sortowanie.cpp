#include<iostream>

using namespace std;


void zamien (int tablica[], int pierwszy_indeks, int drugi_indeks)
{
int tymczas = tablica [ pierwszy_indeks ];
tablica[ pierwszy_indeks ] = tablica[ drugi_indeks ];
tablica[ drugi_indeks ] = tymczas;
}



int wczytaj(int wartosci[], int rozmiar)
{
int liczba;
cout<<"Podaj liczbe:\n";
	for(int i=0;i<rozmiar;i++)
	{
	
	cout<<"["<<i<<"]= ";
	cin>>liczba;
	wartosci[i]=liczba;
	

	}
}
void sortuj(int wartosci[], int rozmiar)

{

	for(int i=0;i<(rozmiar-1);i++)
	{
	int ind1=i;
	int ind2=i+1;
		if (wartosci[ind2]<wartosci[ind1])
		{
		int tymczasowa=wartosci[ind1];
		wartosci[ind1]=wartosci[ind2];
		wartosci[ind2]=tymczasowa;
		}	
	
	}
	

}

int main()
{
char znak;
int rozmiar;
cout<<"ile elementów ma mieć tablica?:\n";
cin>>rozmiar;
int tab[rozmiar];
wczytaj(tab, rozmiar);


for(int i=0;i<rozmiar-1;i++){
do{
sortuj(tab,rozmiar);

}
while(tab[i]>tab[i+1] && tab[i]!=tab[i+1]);

}
cout<<"Posortowana tablica { ";
for(int i=0;i<rozmiar;i++)
{
cout<<tab[i]<<"  ";
}
cout<<" }\n";
}

