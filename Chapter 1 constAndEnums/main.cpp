#include <iostream>

int main()
{
    const int ALIEN_POINTS = 150;
    int aliensKilled = 10;
    int score = aliensKilled * ALIEN_POINTS;
    std::cout << "Score: " << score << std::endl;

    enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
    difficulty myDifficulty = EASY;

    enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
    shipCost myShipCost = BOMBER_COST;

    std::cout << "\nTo upgrade you ship to cruiser ship will cost " << (CRUISER_COST - myShipCost) << " resource points.\n";

    return 0;

}