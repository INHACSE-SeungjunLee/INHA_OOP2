#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char x[70] = "Happy birthday to you";
	char y[25];
	char z[15];

	strcpy_s(y, x);
	cout << "The string in array x is: " << x << '\n';
	cout << "The string in array y is: " << y << '\n';

	strncpy_s(z, x, 14);
	z[14] = '\0';
	cout << "The string in array z is: " << z << '\n';

	strcat_s(x, y);
	cout << x << '\n';
	strncat_s(x, z, 5);
	cout << x <<'\n';

	const char* s1 = "Happy new year";
	const char* s2 = "Happy new year";
	const char* s3 = "Happy holidays";

	cout << strcmp(s1, s2) << '\n' << strncmp(s1, s3, 7) << '\n' << strncmp(s3, s1, 7);

	char sentence[] = "This is a sentence with seven tokens.";
	char *tokenPtr;
	char* context;
	cout << "The string to be tokenized is: " << sentence << '\n';
	cout << "The tokens are: " << '\n';
	tokenPtr = strtok_s(sentence, " ", &context);
	
	while (tokenPtr != NULL)
	{
		cout << tokenPtr << '\n';
		tokenPtr = strtok_s(NULL, " ", &context);
	}

	cout << "After strtok, sentence = " << sentence << '\n';

	const char* howLong = "abcdef";
	cout << strlen(howLong);
	return 0;
}