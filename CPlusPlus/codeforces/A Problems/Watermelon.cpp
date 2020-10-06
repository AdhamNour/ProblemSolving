#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	if (n % 2 != 0 || n == 2)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}
	//system("pause");
	return 0;
}
