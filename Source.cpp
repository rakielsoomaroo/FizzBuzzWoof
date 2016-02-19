#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 20; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				cout << "FizzBuzzWoof" << endl;
			}//second if
			else
			{
				cout << "Fizz" << endl;
			}//second else
		}//first if
		else
		{
			if (i % 5 == 0)
			{
				cout << "Buzz" << endl;
			}//third if
			else
			{
				cout << i << endl;
			}//third else
		}//first else

	}//for loop

	
}//int main
