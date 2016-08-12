//kod źródłowy przedstawiajacy program generujący dynamicznie alokowaną trójwymiarową tabliczkę mnożenia


#include<iostream>

using namespace std;

int main()
{
int rozmiar;
cout<<"Jakie wymiary ma mieć twoja tabliczka ?"<<endl;
cin>>rozmiar;
int ***w_w_tab;
while(rozmiar>0)
{

w_w_tab= new int **[rozmiar];
 	for(int i=0;i<rozmiar;i++)
	{
	w_w_tab[i]= new int*[rozmiar];
		for(int j=0; j<rozmiar;j++)
		{
		w_w_tab[i][j]=new int[rozmiar];
		}

	}
//Pętle odpowiedzialne za wypełnianie komórek tablicy wartościami
for(int i=0;i<rozmiar;i++)
{
	for(int j=0;j<rozmiar;j++)
	{
		for(int k=0;k<rozmiar;k++)
		{
		w_w_tab[i][j][k]=i*j*k;
		}
	}
}



////////////////////////////////////////////////////////////
//Pętle odpowiedzialne za wyświetlenie wartości na ekranie
for(int i=0;i<rozmiar;i++)
{
	for(int j=0;j<rozmiar;j++)
	{
		for(int k=0;k<rozmiar;k++)
		{
		cout<<"["<<i<<"]*["<<j<<"]*["<<k<<"]= "<<w_w_tab[i][j][k]<<endl;
		}
	}
}
/////////////////////////////////////////////////////////


//Pętle zwalniające zalokowaną pamięć dostępną
for(int i=0;i<rozmiar;i++)
{
	for(int j=0;j<rozmiar;j++)
	{
	delete [] w_w_tab[i][j];
	}
}

for(int i=0;i<rozmiar;i++)
{
	
delete [] w_w_tab[i];

}

delete [] w_w_tab;
/////////////////////////////////////////////////////////////
cout<<"Jakie wymiary ma mieć twoja tabliczka ?(0==wyjście z programu :))"<<endl;
cin>>rozmiar;
}

}

