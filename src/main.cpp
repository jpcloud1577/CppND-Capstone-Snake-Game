#include <iostream>
#include <fstream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "player.h"

int main()
{
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  std::string name = "";
  std::string decision = "";
  std::ofstream playerdetails;
  std::cout << "Please enter your name\n";

  std::cin >> name;

  std::cout << "Hi " << name << ". Press Y if you want to play snake game or Press N to terminate" << std::endl;

  std::cin >> decision;

  if (decision == "Y")
  {

    //Capture game details in player class

    Player player("", 0);
    //  std::string dat = player.computeDatenTime();
    player.setName(name);
    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;
    Game game(kGridWidth, kGridHeight);
    game.Run(controller, renderer, kMsPerFrame);
    std::cout << "Game has terminated successfully!\n";
    std::cout << "Score: " << game.GetScore() << "\n";
    std::cout << "Size: " << game.GetSize() << "\n";
    playerdetails.open("../playerlog.txt");
    playerdetails << "Player name: " << player.getName() << "\n" << "Player Score: " << game.GetScore() << "\n" << "Date & Time Played: " << player.getDateTime() << "\n";
    return 0;
  }
  else if (decision == "N")
  {
    std::cout << "Exiting the game" << std::endl;
  }
  else
  {
    std::cout << "Invalid input...Exiting" << std::endl;
  }
}