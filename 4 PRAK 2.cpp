#include<iostream>
using namespace std;
int main ()
{
	int matA [2][2]={4, 2, 8, 10};
	int matB [2][2]={-5, 8, 4, -12};
	int hasil [2][2];
	int i,J,K, jumlah =0;
	
	cout<<"matriks A"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<matA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Matriks B"<<endl;
	for(int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<< matB [i][j] <<" ";
		}
		cout<<endl;
	}
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			for (int k=0; k<2; k++){
				jumlah=jumlah+ matA[i][k] * matB[k][j];
			}
			hasil [i][j]=jumlah;
			jumlah=0;
		}
		cout<<endl;
	}
	cout<< "Hasil perkalian matriks A dan B "<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
		cout << hasil [i][j]<<" ";
	}
	cout<< endl;
	}
	system ("PAUSE");
	return 0;
}
