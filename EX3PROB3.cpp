#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
	char word[200];
	int size;


	cout << "Enter characters: ";

	cin.getline(word, 200);

	size = strlen(word);

	for (int i = size; i >= 0; i--)
	{
		cout << word[i];
	}
	cout << "\n\nArray size = " << size+1 << endl;

	_getch();
	return 0;
}