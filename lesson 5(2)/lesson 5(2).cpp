#include <iostream>
enum Animals
{
    ANIMAL_PIG,
    ANIMAL_CHIKEN,
    ANIMAL_GOAT,
    ANIMAL_CAT,
    ANIMAL_DOG,
    ANIMAL_OSTRICH,
}; 
void getAnimalName(Animals animal)
{
    switch (animal)
    {
    case ANIMAL_PIG:
        break;
    case ANIMAL_CHIKEN:
        break;
    case ANIMAL_GOAT:
        break;
    case ANIMAL_CAT:
        break;
    case ANIMAL_DOG:
        break;
    case ANIMAL_OSTRICH:
        break;
    default:
        break;
    }
}
void PrintNumberOfLegs(Animals animal)
{
    switch (animal)
    {
    case ANIMAL_PIG:
        std::cout << "A pig has a 4 legs. \n";
        break;
    case ANIMAL_CHIKEN:
        std::cout << "A chiken has a 2 legs. \n";
        break;
    case ANIMAL_GOAT:
        std::cout << "A goat has a 4 legs. \n";
        break;
    case ANIMAL_CAT:
        std::cout << "A cat has a 4 legs. \n";
        break;
    case ANIMAL_DOG:
        std::cout << "A dog has a 4 legs. \n";
        break;
    case ANIMAL_OSTRICH:
        std::cout << "A ostrich has a 2 legs. \n";
        break;
    default:
        std::cout << "Erorr";
        break;
    }

}
int main()
{
    PrintNumberOfLegs(ANIMAL_CAT);
    PrintNumberOfLegs(ANIMAL_CHIKEN);
    return 0;
}
