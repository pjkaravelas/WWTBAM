

#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>


int d300(int val1, int val2, int val3) {

	int ans{};
	int v1{};
	int v2{};
	int v3{};
	int v4{};
	int v5{};
	int v6{};
	int v7{};
	int life_50 = val1;
	int life_tel = val2;
	int life_crowd = val3;

	std::cout << R"(
                           ____   ___   ___     _  
                          |___ \ / _ \ / _ \   | | 
                            __) | | | | | | | / __)
                           |__ <| | | | | | | \__ \
                           ___) | |_| | |_| | (   /
                          |____/ \___/ \___/   |_| 
                          
)" << '\n';

	std::cout << R"(
         |-----------------------------------------------------------|
---------|          What name is given to the revolving belt         |---------
---------|       machinery in an airport that delivers checked       |---------
---------|     checked luggage from the plane to baggage reclaim?    |---------
         |-----------------------------------------------------------|
)" << '\n';
	std::cout << R"(
         |----------------------|             |----------------------|
---------|       3.Hangar       |-------------|      2.Terminal      |---------
         |----------------------|             |----------------------|
)" << '\n';
	std::cout << R"(
         |----------------------|             |----------------------|
---------|      3.Concourse     |-------------|      4.Carousel      |---------
         |----------------------|             |----------------------|
)" << '\n';
	std::cout << R"(
                /5\                   /6\                  /7\       
)";

	if (life_50 == 1) {

		if (life_tel == 1) {

			if (life_crowd == 1) {
				std::cout << R"(
         |---------------|     |---------------|     |---------------|
---------|     50:50     |-----|   TELEPHONE   |-----|     CROWD     |---------
         |---------------|     |---------------|     |---------------|
)" << '\n';
			}
			else {
				std::cout << R"(
         |---------------|     |---------------|     |---------------|
---------|     50:50     |-----|   TELEPHONE   |-----|       X       |---------
         |---------------|     |---------------|     |---------------|
)" << '\n';
			}
		}
		else {

			if (life_crowd == 1) {
				std::cout << R"(
         |---------------|     |---------------|     |---------------|
---------|     50:50     |-----|       X       |-----|     CROWD     |---------
         |---------------|     |---------------|     |---------------|
)" << '\n';
			}
			else {
				std::cout << R"(
         |---------------|     |---------------|     |---------------|
---------|     50:50     |-----|       X       |-----|       X       |---------
         |---------------|     |---------------|     |---------------|
)" << '\n';
			}

		}
	}
	else {
		if (life_tel == 1) {

			if (life_crowd == 1) {
				std::cout << R"(
         |---------------|     |---------------|     |---------------|
---------|       X       |-----|   TELEPHONE   |-----|     CROWD     |---------
         |---------------|     |---------------|     |---------------|
)" << '\n';
			}
			else {
				std::cout << R"(
         |---------------|     |---------------|     |---------------|
---------|       X       |-----|   TELEPHONE   |-----|       X       |---------
         |---------------|     |---------------|     |---------------|
)" << '\n';
			}
		}
		else {

			if (life_crowd == 1) {
				std::cout << R"(
         |---------------|     |---------------|     |---------------|
---------|       X       |-----|       X       |-----|     CROWD     |---------
         |---------------|     |---------------|     |---------------|
)" << '\n';
			}
			else {
				std::cout << R"(
         |---------------|     |---------------|     |---------------|
---------|       X       |-----|       X       |-----|       X       |---------
         |---------------|     |---------------|     |---------------|
)" << '\n';
			}

		}
	}

a:
	std::cout << "Which is the correct answer --> ";//fill in for ans
	std::cin >> ans;

	if (ans == 1 || ans == 2 || ans == 3 || ans == 4) {
		if (ans == 4) {//in this line you can change the number of the correct answer. since it works with if/else you dont need to change anything other than the number and outcome
			std::cout << "The answer you gave is correct!!";

			if (life_50 == 1) {

				if (life_tel == 1) {

					if (life_crowd == 1) {
						return 111;
					}
					else return 110;

				}
				else {

					if (life_crowd == 1) {
						return 101;
					}
					else return 100;
				}
			}
			else {

				if (life_tel == 1) {

					if (life_crowd == 1) {
						return 011;
					}
					else return 010;

				}
				else {

					if (life_crowd == 1) {
						return 001;
					}
					else return 000;
				}
			}
			//return multiple values

		}
		else {
			std::cout << "Unfortunately the answer you gave is incorect";
			return 9;// return value to take you to the end screen (dont forget a counter to display winnings if any(you can do that after level 5))
		}


	}
	else if (ans == 5 || ans == 6 || ans == 7) {

		if (ans == 5) {
			if (life_50 == 1) {

				do {
					v1 = rand() % 5;
				} while (v1 == 1 /*correct answer*/ || v1 == 0);

				do {
					v2 = rand() % 5;
				} while (v2 == 1 /*correct answer*/ || v2 == 0);

				std::cout << "\n\nFrom the 50-50 it was revealed that the choices " << v1 << " and " << v2 << " are incorrect\n\n\n";
				life_50 = 0;
				goto a;

			}
			else {
				std::cout << "This lifeline has already been used...";
				goto a;
			}
		}
		if (ans == 6) {
			if (life_tel == 1) {

				do {
					v3 = rand() % 5;
				} while (v3 == 0);

				std::cout << "\n\nYour friend thinks that " << v3 << " is the correct answer.\n\n\n";
				life_tel = 0;
				goto a;
			}
			else {
				std::cout << "This lifeline has already been used...";
				goto a;
			}
		}
		if (ans == 7) {
			if (life_crowd == 1) {

				do {
					v4 = rand() % 101;
				} while (v4 == 0);

				do {
					v5 = rand() % (101 - v4);
				} while (v5 == 0);

				do {
					v6 = rand() % (101 - v4 - v5);
				} while (v5 == 0);

				do {
					v7 = rand() % (101 - v4 - v5 - v6);
				} while (v7 == 0);

				std::cout << "\n\nThe croud has voted:\n\n";

				std::cout << "1.";
				for (int i = 0; i < (v4 / 5); i++) {
					std::cout << "-";
				}
				std::cout << "\n2.";
				for (int i = 0; i < (v5 / 5); i++) {
					std::cout << "-";
				}
				std::cout << "\n3.";
				for (int i = 0; i < (v6 / 5); i++) {
					std::cout << "-";
				}
				std::cout << "\n4.";
				for (int i = 0; i < (v7 / 5); i++) {
					std::cout << "-";
				}
				std::cout << "\n\n";
				life_crowd = 0;
				goto a;




			}
			else {
				std::cout << "This lifeline has already been used...";
				goto a;
			}
		}
	}
}