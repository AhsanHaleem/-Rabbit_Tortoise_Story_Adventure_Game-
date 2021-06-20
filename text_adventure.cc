// Author: Ahsan Haleem
// Purpose of Program: A text adventure game based on rabbit and tortoise race story.
// C++ Topics: Conditions, Logic and Loops

#include <iostream>
using namespace std;

int main()
{

    char choice1, choice2, choice3;
    int i, j;

    std::cout << "\n      *** Welcome to Text Adventure Game *** \n";
    std::cout << "  A game in which your choices will determine if the tortoise wins or rabbit wins the race.\n";
    std::cout << "  One day a rabbit and tortoise met each other in the forest and started arguing that one was faster than the other one. \n";
    std::cout << "Eventually they decided to end argument and race each other from one end of the forest to the another end. \n";
    std::cout << "\n  ***********************   FOREST   *******************************\n";
    std::cout << "  Start | R |_______________________________________________| Finish\n";
    std::cout << "  Start | T |_______________________________________________| Finish\n";
    std::cout << "  ***********************   FOREST   *******************************\n\n";

    for (i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++)
    {
        std::cout << "Enter A: Take rabbit under the tree truck to take a shortcut.\n";
        std::cout << "Enter B: Take tortoise under the tree truck to take a shortcut.\n";
        std::cout << "Enter C: Take tortoise and rabbit under the tree truck to take a shortcut.\n\n";
        std::cin >> choice1;
    }

    if (choice1 == 'A')
    {
        std::cout << "  \nThe rabbit finds a snake hiding beneath the tree truck.\n";
        std::cout << "  Snake attacks the rabbit and kills it. \n";
        std::cout << "  The rabbit dies and the race ends. \n";
        std::cout << "\n  ***********************   FOREST   ***************************\n";
        std::cout << "  Start |________________________________________________| Finish\n";
        std::cout << "  Start |_______T________________________________________| Finish\n";
        std::cout << "  ***********************   FOREST   **************************\n\n";
        return 0;
    }

    else if (choice1 == 'B')
    {
        std::cout << "  \nThe tortoise is finds a snake hiding beneath the tree truck.\n";
        std::cout << "  Snake attacks the tortoise but the tortoise hides itself inside it's shell. \n";
        std::cout << "  Then makes a run to save it's life and passes under the tree truck. \n";
        std::cout << "  However the rabbit quickly hopes over the tree log. \n";
        std::cout << "\n  ***********************   FOREST   ***************************\n";
        std::cout << "  Start |__________R_____________________________________| Finish\n";
        std::cout << "  Start |_______T________________________________________| Finish\n";
        std::cout << "  ***********************   FOREST   **************************\n\n";
    }

    else if (choice1 == 'C')
    {
        std::cout << "  \nThe rabbit finds a snake hidding beneath the tree truck.\n";
        std::cout << "  Snake attacks the rabbit and kills it. \n";
        std::cout << "  The rabbit dies and the race ends. \n";
        std::cout << "  Snake attacks the tortoise but the tortoise hides itself inside it's shell. \n";
        std::cout << "  Then makes a run to save it's life and passes under the tree truck. \n";
        std::cout << "\n  ***********************   FOREST   ***************************\n";
        std::cout << "  Start |________________________________________________| Finish\n";
        std::cout << "  Start |_______T________________________________________| Finish\n";
        std::cout << "  ***********************   FOREST   **************************\n\n";
        return 0;
    }

    else
    {
        std::cout << "  \nInvalid response.\n";
        std::cout << "  The game ends! \n\n";
        return 0;
    }

    for (j = 0; j < 3 && choice2 != 'A' && choice2 != 'B' && choice2 != 'C'; j++)
    {
        std::cout << "Enter A: let rabbit take a break to eat some carrot, since tortoise is behind him.\n";
        std::cout << "Enter B: let tortoise take a break to eat a some leaves.\n";
        std::cout << "Enter C: let rabbit and tortoise take a break to eat some carrot and leaves.\n\n";
        std::cin >> choice2;
    }

    switch (choice2)
    {
    case 'A':
        std::cout << "  \nThe rabbit takes a break to eat some carrots to energize.\n";
        std::cout << "  But tortoise doesn't take a break and gets closer in race. \n";
        std::cout << "\n  ***********************   FOREST   ************************\n";
        std::cout << "  Start |___________________R________________________| Finish\n";
        std::cout << "  Start |________________T___________________________| Finish\n";
        std::cout << "  ***********************   FOREST   **********************\n\n";
        break;

    case 'B':
        std::cout << " \nThe tortoise takes a break to eat some leaves to vitalize.\n";
        std::cout << " But rabbit doesn't take a break and gets closer to finishing the race.\n";
        std::cout << "\n  ***********************   FOREST   ************************\n";
        std::cout << "  Start |________________________________R___________| Finish\n";
        std::cout << "  Start |______________T_____________________________| Finish\n";
        std::cout << "  ***********************   FOREST   **********************\n\n";
        break;

    case 'C':
        std::cout << "  \nThe rabbit and tortoise both take a break to eat some carrots and leaves.\n";
        std::cout << "\n  ***********************   FOREST   ************************\n";
        std::cout << "  Start |___________________________R________________| Finish\n";
        std::cout << "  Start |__________________T_________________________| Finish\n";
        std::cout << "  ***********************   FOREST   **********************\n\n";
        break;

    default:
        std::cout << "  \nInvalid response.\n";
        std::cout << "  The game ends! \n\n";
        return 0;
    }

    for (i = 0; i < 3 && choice3 != 'A' && choice3 != 'B' && choice3 != 'C'; i++)
    {
        std::cout << "Enter A: let rabbit take a nap, since tortoise is far behind.\n";
        std::cout << "Enter B: let rabbit does not take break for a nap.\n\n";
        std::cin >> choice3;
    }

    if (choice3 == 'A')
    {
        std::cout << "  \nThe rabbit takes a nap under the cold tree shade.\n";
        std::cout << "  And wakes up to find that tortoise has ended the race. \n";
        std::cout << "\n  ***********************   FOREST   ***************************\n";
        std::cout << "  Start |_____________________________________R________| Finish\n";
        std::cout << "  Start |______________________________________________| T Finish\n";
        std::cout << "  ***********************   FOREST   **************************\n\n";
        std::cout << "  Tortoise wins the race! \n\n";
        return 0;
    }
    else if (choice3 == 'B')
    {
        std::cout << "  ***********************   FOREST   ***************************\n";
        std::cout << "  Start |______________________________________________| R Finish\n";
        std::cout << "  Start |_____________________________T________________|  Finish\n";
        std::cout << "  ***********************   FOREST   **************************\n\n";
        std::cout << "  Rabbit wins the race! \n\n";
        return 0;
    }

    return 0;
}