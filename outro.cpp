#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>


int outro()
{
    std::cout << R"(
 __    __  __ __   ___       __    __   ____  ____   ______  _____         
|  |__|  ||  |  | /   \     |  |__|  | /    ||    \ |      |/ ___/         
|  |  |  ||  |  ||     |    |  |  |  ||  o  ||  _  ||      (   \_          
|  |  |  ||  _  ||  O  |    |  |  |  ||     ||  |  ||_|  |_|\__  |         
|  `  '  ||  |  ||     |    |  `  '  ||  _  ||  |  |  |  |  /  \ |         
 \      / |  |  ||     |     \      / |  |  ||  |  |  |  |  \    |         
  \_/\_/  |__|__| \___/       \_/\_/  |__|__||__|__|  |__|   \___|         
                                                                           
)" << '\n';

    std::cout << R"(
 ______   ___       ____     ___       ____                                
|      | /   \     |    \   /  _]     /    |                               
|      ||     |    |  o  ) /  [_     |  o  |                               
|_|  |_||  O  |    |     ||    _]    |     |                               
  |  |  |     |    |  O  ||   [_     |  _  |                               
  |  |  |     |    |     ||     |    |  |  |                               
  |__|   \___/     |_____||_____|    |__|__|                               
                                                                           
)" << '\n';

    std::cout << R"(
 ___ ___  ____  _      _      ____  ___   ____    ____  ____  ____     ___ 
|   |   ||    || |    | |    |    |/   \ |    \  /    ||    ||    \   /  _]
| _   _ | |  | | |    | |     |  ||     ||  _  ||  o  | |  | |  D  ) /  [_ 
|  \_/  | |  | | |___ | |___  |  ||  O  ||  |  ||     | |  | |    / |    _]
|   |   | |  | |     ||     | |  ||     ||  |  ||  _  | |  | |    \ |   [_ 
|   |   | |  | |     ||     | |  ||     ||  |  ||  |  | |  | |  .  \|     |
|___|___||____||_____||_____||____|\___/ |__|__||__|__||____||__|\_||_____|
                                                                            
)" << '\n';

    std::cout << "\n\nThank you for playing our game. We hope it was a great experience!\n\n\n";

    system("pause");//this is for the press any key to continue good alternativer to getch()

    return 0;
}