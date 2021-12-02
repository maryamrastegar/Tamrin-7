#include<iostream>
using namespace std;
int binsearch(int low, int high, int x, int s[])
{
	int mid;
	if (low>high)
		return (-1);
	else
	{
		mid = (low + high) / 2;
		if (x == s[mid])
			return mid;
		else if (x<s[mid])
			return binsearch(low, mid - 1, x, s);
		else
			return binsearch(mid + 1, high, x, s);
	}
}
int main()
{
	int i, x, z, l = 0, h = 20, s[20];
	cout << "Enter the 20 numbers in order" << endl;
	for (i = 0; i<20; i++)
	{
		cout << "number " << i + 1 << " :";
		cin >> s[i];
	}
	cout << "Enter the number Search" << endl;
	cin >> x;
	z = binsearch(l, h, x, s);
	if (z == (-1))
		cout << "Not found";
	else
		cout << "The place is : " << z + 1;
	system("pause");
	return 0;
}
