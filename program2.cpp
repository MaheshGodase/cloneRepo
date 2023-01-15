#include<iostream>

using namespace std;


int Max(int iNo)
{
	static int max = 1;

	if(iNo != 0)
	{
		int digit = iNo%10;
		if(digit > max)
		{
			max = digit;
		}
		Max(iNo/10);
	}

	return max;
}

int main()
{
	int iValue = 0;

	printf("Enter The Number : \n");
	scanf("%d",&iValue);

	printf("The Max Digit Is : %d \n",Max(iValue));

	return 0;
} 