#include <iostream>
using namespace std;

void delelemet(char arr[], int indx) 
{
	for (size_t i = indx-1; arr[i]!= '\0'; i++)
	{
		arr[i] = arr[i + 1];
	}
}

void deleteallel(char arr[], char symbol)
{
	for (size_t i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i]==symbol)
		{
			for (size_t j = i; arr[j] != '\0'; j++)
			{
				arr[j] = arr[j + 1];
			}
			i--;
		}
	}
}

void addintoarr(char arr[], char symbol, int indx) 
{
	for (int i = strlen(arr) + 1; i >= indx; i--) {
		arr[i] = arr[i - 1];
	}
	arr[indx - 1] = symbol;
}

void swappoint(char arr[])
{
	for (size_t i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == '.')
		{
			arr[i] = '!';
		}
	}
}

void countofsymbol(char arr[], char symbol)
{
	int res = 0;
	for (size_t i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i]==symbol)
		{
			res++;
		}
	}
	cout << res;
}

int main()
{
	char myStr[]{ "Hello .World!" };
	///*task 1.1*/
	//delelemet(myStr, 1);
	//cout << myStr;
	///*task 1.2*/
	//deleteallel(myStr,'l');
	//cout << myStr;
	///*task 1.3*/
	//addintoarr(myStr,'Q', 3);
	//cout << myStr;
	///*task 1.4*/
	//swappoint(myStr);
	//cout << myStr;
	///*task 1.5*/
	//countofsymbol(myStr, 'l');
}