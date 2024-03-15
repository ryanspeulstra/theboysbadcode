#include <iostream>
#include <string>

void randomSelector() {
    srand (time(NULL));
    int randomizer = rand() % 8;

switch (randomizer)
{
case (1):
    std::cout << "slack off" << std::endl;
    break;

case (2):
    std::cout << "play video games" << std::endl;
    break;

case(3):
    std::cout << "eat some food" << std::endl;
    break;

case(4):
    std::cout << "some youtube sounds pretty good right now" << std::endl;
    break;

case(5):
    std::cout << "you should have an online argument" << std::endl;
    break;

case(6):
    std::cout << "scroll on your phone for 5 hours" << std::endl;
    break;

case(7):
    std::cout << "sure you can do homework i guess" << std::endl;
    break;

case(8):
    std::cout << "worry about your homework but not do anything even though its easy" << std::endl;
    break;

default:
    break;
}

}

int main () {

int selection;

std::cout << "do you have anything to do?" << std::endl;
std::cout << "1 for yes, 2 for no." << std::endl;

std::cin >> selection;

if (selection == 1) {
    randomSelector();
} else if (selection == 2) {
    std::cout << "why are you here at all?" << std::endl;
}  else if (selection != 1 || selection !=2 ) {
    std::cout << "nice try dummy" << std::endl;
}

return 0;
}
