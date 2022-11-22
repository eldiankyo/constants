#include <iostream>

// konstans változó:
const unsigned short int classroom = 31;

// konstans array:
enum daysOfTheWeek {monday, tuesday, wednesday, thursday, friday, saturday, sunday};

// ha értéket adunk az elemeknek, a következő elem egy számmal nagyobb értéket kap automatikusan
enum vegetables {potato=100, carrot, tomato=300, cabbage, cucumber};

int main()
{
    std::cout << "Carrot value: " << carrot << " Cucumber value: " << cucumber << std::endl;
    return 0;
}