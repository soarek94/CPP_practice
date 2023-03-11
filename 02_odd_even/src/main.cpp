#include <stdio.h>
#include <iostream>
#include <string>

void printOddOrEven(int number)
{
    if (number % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
}

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        printf("No program arguments found.\n");
    }

    // Get the first argument
    std::string argumentAsString = argv[1];
    int number = std::stoi(argumentAsString);

    printOddOrEven(number);

    return 0;
}
