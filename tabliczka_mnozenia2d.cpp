//kod źródłowy przedstawiajacy program generujący dynamicznie alokowaną dwuwymiarową tabliczkę mnożenia


#include<iostream>

using namespace std;

int main()
{
int rozmiar;
cout<<"Jakie wymiary ma mieć twoja tabliczka ?"<<endl;
cin>>rozmiar;
int **w_w_tab;
while(rozmiar>0)
{

w_w_tab= new int *[rozmiar];
 	for(int i=0;i<rozmiar;i++)
	{
	w_w_tab[i]= new int[rozmiar];

	}
//pętle zapisujące kolejne wartości tabliczki mnożenia do tablicy
for(int i=0;i<rozmiar;i++)
{
	for(int j=0;j<rozmiar;j++)
	{
	w_w_tab[i][j]=i*j;
	}
}

//pętle odpowiedzialne za wyświetlenie wartosci na ekranie
for(int i=0;i<rozmiar;i++)
{
	for(int j=0;j<rozmiar;j++)
	{
	cout<<"["<<i<<"]["<<j<<"]= "<<w_w_tab[i][j]<<endl;
	}
}

for(int i=0;i<rozmiar;i++)
{
delete [] w_w_tab[i];
}
delete [] w_w_tab;
cout<<"Jakie wymiary ma mieć twoja tabliczka ?(0==wyjście z programu :))"<<endl;
cin>>rozmiar;
}
}


