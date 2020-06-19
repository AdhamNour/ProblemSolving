#include"ThreeDMatrix.h"
ThreeDimentionalMatrix::ThreeDimentionalMatrix(int I,int J, int K):i(I),j(J),k(K){
	x = new int**[i];
	for(int a = 0 ; a<i; a++){
		x[a] = new int*[j];
		for(int b = 0 ; b<j;b++)
			x[a][b]=new int[k];
		}
}

int& ThreeDimentionalMatrix::at(int a, int b, int c){
	return x[a][b][c];
}

void ThreeDimentionalMatrix::add(const ThreeDimentionalMatrix& A){
	if(i == A.i && j == A.j && k==A.k)
		for(int a = 0; a<i;a++)
			for(int b=0;b<j;b++)
				for(int c=0 ; c<k;c++)
					x[a][b][c]+=A.x[a][b][c];
}
