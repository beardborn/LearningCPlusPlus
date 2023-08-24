#include <iostream>

int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;

    short lives, aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    double engineTemp = 6572.89;

    std::cout << "\n score: " << score << std::endl;
    std::cout << "distance: " << distance << std::endl;
    std::cout << "playAgain: " << playAgain << std::endl;

    // skipping shieldsUp as you dont normally print bool values

    std::cout << "lives: " << lives << std::endl;
    std::cout << "aliensKilled: " << aliensKilled << std::endl;
    std::cout << "engineTemp: " << engineTemp << std::endl;

    int fuel;
    std::cout << "How much fuel? ";
    std::cin >> fuel;
    std::cout << "fuel: " << fuel << std::endl;

    typedef unsigned short ushort; // shorten the name of unsigned short into programmer defined name
    ushort bonus = 10;
    std::cout << "bonus: " << bonus << std::endl;
}