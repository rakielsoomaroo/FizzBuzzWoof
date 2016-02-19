#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 50; i++)
	{
		if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
		{

			cout << "FizzBuzzWoof" << endl;
		}//first if
		else
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				cout << "FizzBuzz" << endl;
			}//second if

			else
			{
				if (i % 3 == 0 && i % 7 == 0)
				{
					cout << "FizzWoof" << endl;
				}//third if
				else
				{
					if (i % 5 == 0 && i % 7 == 0)
					{
						cout << "BuzzWoof" << endl;
					}//fourth if
					else if (i % 3 == 0)
					{
						cout << "Fizz" << endl;
					}//fifth if
					else if (i % 5 == 0)
					{
						cout << "Buzz" << endl;
					}//sixth if
					else if (i % 7 == 0)
					{
						cout << "Woof" << endl;
					}//seventh if
					else
					{
						cout << i << endl;
					}//seventh else
				}//third else
			}//second else
		}//first else



	}//for loop
}//int main
