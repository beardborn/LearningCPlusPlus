#include <iostream>
#include <string>

int main()
{
    const int GOLD = 900;
    int adventurers, killed, survivors;
    std::string leader;

    // get the information
    std::cout <<"_____Welcome to Lost Fortune_____" << std::endl;
    std::cout << "Enter the following for your personal adventure." << std::endl;
    std::cout << "Enter a number: ";
    std::cin >> adventurers;
    std::cout << "\nEnter another number smaller than the previous: ";
    std::cin >> killed;

    survivors = adventurers - killed;

    std::cout << "\nEnter your last name: ";
    std::cin >> leader;

    // tell the story

    std::cout << "\nA brave group of " << adventurers << " set out on a quest.";
    std::cout << "-- In search of lost treasure of the Ancient Dwarves. ";
    std::cout << "The group was lead by that LEDGENDARY rogue " << leader << std::endl;
    std::cout << "Along the way a band of MARAUDING OGRES ambushed the party. ";
    std::cout << "All fought bravley under the command of " << leader << " but at a cost..." << std::endl;
    std::cout << "Of the adventurers, " << killed << " were vanquished.";
    std::cout << "Leaving just " << survivors << " in the group." << std::endl;
    
    std::cout << "The party was about to give up...";
    std::cout << "While laying the dead to rest in the ground...";
    std::cout << "They stummbled upon the ancient treasure." << std::endl;

    std::cout << "The adventurers decided to split " << GOLD << " between themselves...";
    std::cout << "The leader kept the spare " << (GOLD % survivors) << " pieces to keep things fair ofcourse." << std::endl;

    return 0;

}