#include <iostream>

int main()
{
	float miles = 0.0f;
	const float CONVERSION = 1.609344f;

	std::cout << "Please type in the distance in miles: \n>>>"; // ask for miles

	std::cin >> miles; // recieve input in miles

	// input error handling
	while (!std::cin.good()) // checks input is valid as a number
	{
		std::cin.clear(); // clear the input buffer
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore the stream input till get to a new line character
		std::cout << "ERROR, please input a number: \n>>>"; // ask for input again
		std::cin >> miles;
	}

	float output = miles * CONVERSION; // store conversion

	std::cout << "The distance in kilometers is: " << output << "." << std::endl; // output to user
}