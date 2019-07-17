#include<iostream>

using namespace std;
constexpr auto MAX_STR_SIZE = 1024 , SHIFT_VAL = 3 ; int X , KEYLEN = 0;

int STRLENGTH(char STR_IN[])
{
	for (X = 0; STR_IN[X] != '\0'; ++X)
	{
		KEYLEN++;
	}
	return KEYLEN;
}

void ENCRYPT(char STR_IN[],int KEYLEN)
{
	char ENC[MAX_STR_SIZE];
	for (X = 0; X < KEYLEN; X++)
	{
		ENC[X] = (char)(((int)STR_IN[X] + SHIFT_VAL - 65) % 26 + 65);
		cout << ENC[X];
	}
}

void DECRYPT(char STR_IN[], int KEYLEN)
{
	char ENC[MAX_STR_SIZE];
	for (X = 0; X < KEYLEN; X++)
	{
		ENC[X] = (char)(((int)STR_IN[X] - 65) % 26 + 65 - SHIFT_VAL);
		cout << ENC[X];
	}
}

int main()
{
	int input; char INPUT_STR[MAX_STR_SIZE];
	while (true)
	{
		cout << "SELCECT YOUR OPTiON:\n[1]-ENCRYPT\n[2]-DECRYPT\n[3]-EXIT\n\n>>> "; cin >> input;
		switch (input)
		{
		case(1):
		{
			cout << "\nENTER THE STRING TO ENCRYPT USING SHIFT-3 : "; cin >> INPUT_STR;
			ENCRYPT(INPUT_STR, STRLENGTH(INPUT_STR)); cout << "\n";
			break;
		}
		case(2):
		{
			cout << "\nENTER THE STRING TO ENCRYPT USING SHIFT-3 : "; cin >> INPUT_STR;
			DECRYPT(INPUT_STR, STRLENGTH(INPUT_STR)); cout << "\n";
			break;
		}
		case(3):
		{
			return false;
		}
		default:
		{
			cout << "\nINVALiD INPUT || SELECT CORRECT OPTION\n\n"; break;
		}	
		}
	}
}
