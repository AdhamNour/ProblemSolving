#ifndef THREEDMAT_H
#define THREEDMAT_H
class ThreeDimentionalMatrix{
private:
	int*** x;
	int i,j,k;
public:
	ThreeDimentionalMatrix(int I = 1 , int J = 1 , int K = 1);
	int& at(int a,int b, int c);
	void add(const ThreeDimentionalMatrix& a);

};
#endif
