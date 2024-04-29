#include <iostream>

int main()
{
	int userInput = 0;
	int factorial = 1;

	std::cout << "Enter a number to factoral: \n>>>>";
	std::cin >> userInput;

	

	for (int i = 1; i <= userInput; ++i)
	{
		factorial *= i;
	}
	std::cout << "The factorial of " << userInput << " is: " <<factorial << std::endl;
}