#include <iostream>

int main()
{
	//convert miles to kilometers
	//take input from the user, ask a distance in miles
	//convert that distance to kilometers and cout the value

	float userKilo = 0.0f; //user input variable with default decleration
	const float KILO = 1.60934f; //constant for the conversion

	std::cout << "Enter the distance in miles: "; //ask user for the value of distance in miles
	std::cin >> userKilo; //recieve the users input
	std::cout << std::endl; //create a blank line for formating

	float output = userKilo * KILO; //convert the miles to kilometers

	std::cout << userKilo << " miles is equal to " << output << " kilometers." << std::endl;
}