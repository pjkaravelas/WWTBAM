#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>


int intro()
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

    std::cout << "\n\nHello and welcome to Who Wants To Be a Millionaire! The game that gives you the chance to win UP TO 1 MILLION DOLLARS!\n\nThe rules are simple:\n You will have to answer to a total of 15 questions to reach the 1 million \ndollars. Each question is increasing in difficulty and attached is a prize. \nThere are 3 checkpoints or safety nets in the game. \nOne located at the 1000 dollar mark, one located at the 32000 dollar mark \nand one located at the 1000000 dollar mark at the 5th, 10th and \n15th question respectively. Answering it right will secure you a written check \nwith the winnings so you will be leaving with the safety pillow ammount \neven if you lose in the progress of the game.\nThere are also 3 lifelines in place to help you navigate and answer the \n15 questions. These are:\n-The 50:50 where when choosing to use it two out of four answers on the board \nwill disappear making the choise of answer easier.\n-The Telephone where you are allowed to call a friend or family member \nto help you answer the question\n-The crowd where the crowd watching us will be voting which they think \nis the correct answer thus helping you make a decision.\n\nCaution: Each one of the lifelines can only be used once during the game.\nTo  answer the questions all you have to do is enter the \nnumber thats next to or above the field you want followed by the enter key.\n\nAnd Thats it!! After saying all that I wish you good luck and enjoy the game! \nAnd who knows... Maybe you are the next MILLIONAIRE!!!\nSo whenever you are ready...";
    
    system("pause");//this is for the press any key to continue good alternativer to getch()

    return 0;
}