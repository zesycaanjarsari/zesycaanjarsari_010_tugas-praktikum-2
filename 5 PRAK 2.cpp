
#include <iostream>
using namespace std;

int main()
{
	int matA[2][2] = {4, 2, 8, 10};
	int matB[2][2] = {-5, 8, 4, -12};
	int transpose[2][2];
	int j,k;
	
	cout << "Matriks A" << endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout << matA[i][j] << " ";
		}
	cout << endl;
	}
	cout << "Matriks B" << endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout << matB[i][j] << " ";
		}
	cout << endl;
	}
	cout << "Matriks A" << endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			transpose[j][i] = matA[i][j];
		}
	cout << endl;
	}
	cout << "Hasil transpose matriks A " << endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout << transpose[i][j] << " ";
		}
	cout << endl;
	}
	
	system("PAUSE");
	return 0;
}
