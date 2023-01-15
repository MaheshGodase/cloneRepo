#include<iostream>

using namespace std;


int WhiteSpace(char *str)
{
	static int Cnt = 0;

	if(*str != '\0')
	{
		if(*str == ' ')
		{
			Cnt++;
		}
		WhiteSpace(++str);
	}

	return Cnt;
}

int main()
{
	char Arr[20];

	printf("Enter The String : \n");
	cin.getline(Arr,20);

	printf("The No Of WhiteSpaces Is : %d \n",WhiteSpace(Arr));

	return 0;
} 