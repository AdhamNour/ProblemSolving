#ifndef FLOWER_H
#define FLOWER_H
#include<string>
using namespace std;
class Flower{
private:
	int no_pedals;
	float price;
	string name;
public:
	Flower(const string& Name, const int& No_Pedals, const float& Price);
	void setPrice(const int& Price) {price=Price;}
	void setName(const int& Name) { name = Name;}
	void setNoOfPedals(const int& Pedals){no_pedals=Pedals;}
	string getName() const{return name;}
	int getNoOfPedals() const {return no_pedals;}
	float getPrice() const {return price;}
};
#endif
