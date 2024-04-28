#include <iostream>

int main()
{
	// ceate a variable to hold user input
	int userInput = 0;

	// ask user for input
	std::cout << "Enter a random number to check if is Odd or Even: \n>>>";

	// take input from user
	std::cin >> userInput;

	// check user input is valid
	while (!std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Error, enter a valid number: \n>>>";
		std::cin >> userInput;
	}

	// if is valid check condition if odd or even
	std::string oddEven = (userInput % 2 == 0) ? "Even" : "Odd"; // use a ternary operator to check if odd or even

	// output to user if number is odd or even
	std::cout << oddEven;
}