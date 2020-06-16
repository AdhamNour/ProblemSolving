#ifndef BASICVECTOR_H
#define BASICVECTOR_H

template <typename T>
class BasicVector{//simple victor class
public:
	BasicVector(int Capacity = 10){
		capacity=Capacity;
		a = new T[capacity];
	}
	T& operator[](int i){return a[i];}
private:
	T* a;
	int capacity;
};

#endif
