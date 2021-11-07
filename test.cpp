#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	n=0;
	while (n != 0)
	{
		switch (n)
		{
		case 1:
			cout << "under 1";
			/* code */
			break;
		case 2:
			cout << "under 2";
		default:
			break;
		}
	}
	return 0;
}