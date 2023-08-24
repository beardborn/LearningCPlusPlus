#include <iostream>
#include <cstdlib> // used for random numbers
#include <ctime> // ued for seed for randon numbers

int main()
{
    srand(static_cast<unsigned int>(time(0))); // seed random number generator
    int secretNumber = rand() % 100 + 1; // random number between 1 - 100
    int tries = 0;
    int guess = 0;

    std::cout << "___Welcome to the number guessing game!!!___" << std::endl << std::endl;

    do 
    {
        std::cout << "Enter a guess: ";
        std::cin >> guess;
        ++tries;

        if (guess > secretNumber)
        {
            std::cout << "You number is to high... try again." << std::endl;
        }
        else if (guess < secretNumber)
        {
            std::cout << "Your guess is to low... try again." << std::endl;
        }
        else
        {
            std::cout << "Well Done... you guessed correctly in " << tries << " guesses." << std::endl;
        }

    }
    while (guess != secretNumber);

    return 0;
}