//kod żródlowy przedstawiający dynamiczną alokację pamięci dostępnej na podstawie tablicy dostosowującej swój rozmiar do ilości wprowadonych danych.


#include<iostream>

using namespace std;
// zmienna zwiekszTablice jest funkcją z dwama parametrami wskaźnikowymi typu int zwracająca wskaźnik do zmiennej typu int (w skrócie jest to po prostu deklaracja funkcji)
int *zwiekszTablice(int *w_wartosci, int *rozmiar);
void drukujTablice(int *w_wartosci, int rozmiar, int zajete_pola);



int main()

{
int nastepny_element=0;
int rozmiar=10;
int *w_wartosci= new int[rozmiar];
int wart;
 cout<<"Podaj liczbę \n:";
 cin>>wart;

	while(wart>0)
	{
		if(rozmiar==nastepny_element+1)
		{
		w_wartosci=zwiekszTablice(w_wartosci, &rozmiar);
		}
	w_wartosci[nastepny_element]=wart;
	nastepny_element++;
	cout<<"Oto bieżace parametry tablicy: "<<endl;
	drukujTablice(w_wartosci, rozmiar, nastepny_element);
	cout<<"Podaj liczbę (0 -wyjście z programu) :";
	cin>>wart;
	
	}
	delete [] w_wartosci;

}

//definicja funkcji drukujTablice


void drukujTablice( int *w_wartosci, int rozmiar, int zajete_pola)
{
cout<<"Całkowity rozmiar tablicy: "<<rozmiar<<endl;
cout<<" Liczba zajętych pol tablicy: "<<zajete_pola<<endl;
cout<<"Wartości w tablicy: "<<endl;

	for(int i=0;i<zajete_pola;i++)
	{
	cout<<"Wartości ["<<i<<"] = "<<w_wartosci[i]<<endl;
	}
}



int *zwiekszTablice( int *w_wartosci, int *rozmiar)
{
*rozmiar *= 2;

int *w_nowe_wartosci= new int[*rozmiar];
for(int i=0; i<*rozmiar; i++)
{

w_nowe_wartosci[i]=w_wartosci[i];


}
delete [] w_wartosci;

//funkca zwraca wartość zmiennej w_nowe_wartosci. Zmienna ta jest wskaźnikiem odnoszacym się do nowo zaalokowanej pamieci dostępnej, tak więc zwracana zmienna przechowuje adres wskazujący na pierwszą komórkę nowo zaalokowanej pamieci.
return w_nowe_wartosci;
}
