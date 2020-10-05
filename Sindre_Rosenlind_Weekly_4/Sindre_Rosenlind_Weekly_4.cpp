#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <conio.h>
#include <cstdlib>
#include <ctime>


char ChangeToCapital(char);
char ChangeToCapital(char ch) {
    return toupper(ch);
}
void capitalletter() {
     std::cout << "Enter a sentence:";
     std::string sentence;
     std::getline(std::cin, sentence);

     for (int i = 0; i < sentence.size(); i++) {
        sentence.at(i) = ChangeToCapital(sentence.at(i));

     }
     std::cout << "Updated sentence : " << sentence;
}



void grid() {
    char grid[100];
    for (int l = 0; l < 100; l++) {
        grid[l] = 'O';
    }
    char you = 'X';
    int p = 0;
    grid[99] = 'G';
    grid[50] = '\\';
    grid[10] = '/';
    do {
        grid[p] = you;
        for (int j = 0; j < 100; j++) {
            std::cout << grid[j];
            if (j == 9 || j == 19 || j == 29 || j == 39 || j == 49 || j == 59 || j == 69 || j == 79 || j == 89) {
                std::cout << std::endl;
            }
        }
        std::cout << std::endl;
        std::cout << std::endl;
        char c = _getch();
        if (c == 'w' || c == 'W') {
            if (p < 9) {
                break;
            }
            else {
                grid[p] = 'O';
                p = p - 10;
            }
        }
        if (c == 'a' || c == 'A') {
            if (p == 0 || p == 10 || p == 20 || p == 30 || p == 40 || p == 50 || p == 60 || p == 70 || p == 80 || p == 90) {
                break;
            }
            else {
                grid[p] = 'O';
                p = p - 1;
            }
        }
        if (c == 'd' || c == 'D') {
            if (p == 9 || p == 19 || p == 29 || p == 39 || p == 49 || p == 59 || p == 69 || p == 79 || p == 89 || p == 99) {
                break;
            }
            else {
                grid[p] = 'O';
                p = p + 1;
            }
        }
        if (c == 's' || c == 'S') {
            if (p > 89) {
                break;
            }
            else {
                grid[p] = 'O';
                p = p + 10;
            }
        }
        if (p == 50) {
            grid[p] = '\\';
            p = p - 10;
        }
        if (p == 10) {
            grid[p] == '/';
            p = p + 10;
        }
    } while (p != 99);
}

void hold_name_and_number() {
    struct person {
        std::string name = " ";
        long int number = 0;
    };
    person person[10];
    int i = 0;
    bool new_person = true;
    int new_person_1 = 0;
    do {
        std::cout << "Enter the name of the person:";
        std::cin >> person[i].name;
        std::cout << "Enter the persons phone number:";
        std::cin >> person[i].number;
        i++;
        std::cout << "----------------------------------------" << std::endl;
        for (int j = 0; j < 10; j++) {
            std::cout << person[j].name << "|" << person[j].number << std::endl;
            std::cout << "----------------------------------------" << std::endl;
        }
        std::cout << std::endl;
        if (i == 9) {
            i = 0;
        }
        std::cout << "Would you like to add another person?" << std::endl;
        std::cout << "For YES enter: 1     For NO enter: 2" << std::endl;
        std::cin >> new_person_1;
        if (new_person_1 == 1) {
            new_person = true;
        }
        else {
            new_person = false;
        }
    } while (new_person == true);
}
int rolldice_0() {
    std::rand();
   return (std::rand() % 6 + 1);
}
int rolldice_1() {
    std::rand();
    return (std::rand() % 6 + 1);
}
int rolldice_2() {
    std::rand();
    return (std::rand() % 6 + 1);
}
int rolldice_3() {
    std::rand();
    return (std::rand() % 6 + 1);
}
int rolldice_4() {
    std::rand();
    return (std::rand() % 6 + 1);
}
int calculate(int a, int b, int c, int d, int e) {
    int i = 0;
    if (a / 6 == 1) {
        i++;
    }
    if (b / 6 == 1) {
        i++;
    }
    if (c / 6 == 1) {
        i++;
    }
    if (d / 6 == 1) {
        i++;
    }
    if (e / 6 == 1) {
        i++;
    }
    return (i);
}
int pairs(int a, int b, int c, int d, int e) {
    int aa = 0;
    int bb = 0;
    int cc = 0;
    int dd = 0;
    int ee = 0;
    int ff = 0;
    if (a == 1) {
        aa++;
    }
    if (b == 1) {
        aa++;
    }
    if (c == 1) {
        aa++;
    }
    if (d == 1) {
        aa++;
    }
    if (e == 1) {
        aa++;
    }
    if (a == 2) {
        bb++;
    }
    if (b == 2) {
        bb++;
    }
    if (c == 2) {
        bb++;
    }
    if (d == 2) {
        bb++;
    }
    if (e == 2) {
        bb++;
    }
    if (a == 3) {
        cc++;
    }
    if (b == 3) {
        cc++;
    }
    if (c == 3) {
        cc++;
    }
    if (d == 3) {
        cc++;
    }
    if (e == 3) {
        cc++;
    }
    if (a == 4) {
        dd++;
    }
    if (b == 4) {
        dd++;
    }
    if (c == 4) {
        dd++;
    }
    if (d == 4) {
        dd++;
    }
    if (e == 4) {
        dd++;
    }
    if (a == 5) {
        ee++;
    }
    if (b == 5) {
        ee++;
    }
    if (c == 5) {
        ee++;
    }
    if (d == 5) {
        ee++;
    }
    if (e == 5) {
        ee++;
    }
    if (a == 6) {
        ff++;
    }
    if (b == 6) {
        ff++;
    }
    if (c == 6) {
        ff++;
    }
    if (d == 6) {
        ff++;
    }
    if (e == 6) {
        ff++;
    }
    int aaa = 0;
    int bbb = 0;
    int ccc = 0;
    int ddd = 0;
    int eee = 0;
    int fff = 0;
    if (aa == 2) {
         aaa = 1;
    }
    if (aa == 4) {
         aaa = 2;
    }
    if (bb == 2) {
         bbb = 1;
    }
    if (bb == 4) {
         bbb = 2;
    }
    if (cc == 2) {
         ccc = 1;
    }
    if (cc == 4) {
         ccc = 2;
    }
    if (dd == 2) {
         ddd = 1;
    }
    if (dd == 4) {
         ddd = 2;
    }
    if (ee == 2) {
         eee = 1;
    }
    if (ee == 4) {
         eee = 2;
    }
    if (ff == 2) {
         fff = 1;
    }
    if (ff == 4) {
         fff = 2;
    }
    return (aaa + bbb + ccc + ddd + eee + fff);
}

void dice_task() {
    int dice[5];
    rolldice_0();
    dice[0] = rolldice_0();
    rolldice_1();
    dice[1] = rolldice_1();
    rolldice_2();
    dice[2] = rolldice_2();
    rolldice_3();
    dice[3] = rolldice_3();
    rolldice_4();
    dice[4] = rolldice_4();
    bool roll = true;
    int roll_1 = 0;
    int hold_1 = 0;
    int hold[5] = { 0,0,0,0,0 };
    int roll_2 = 0;
    int playagain = 1;
    do {
    std::cout << "Your dices are:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Dice " << i + 1 << ": " << dice[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Dices with 6: " << calculate(dice[0], dice[1], dice[2], dice[3], dice[4]) << std::endl;
    std::cout << "Your pairs are:" << pairs(dice[0], dice[1], dice[2], dice[3], dice[4]) << std::endl;
    
    std::cout << "Would you like to hold any dices or roll again?" << std::endl;
    std::cout << "For HOLD DICES enter: 1     For ROLL AGAIN enter: 2" << std::endl;
    std::cin >> roll_2;
    if (roll_2 == 1) {
        do {
            std::cout << "press the number of dice you would like to hold:";
            std::cin >> hold_1;
            if (hold_1 == 1) {
                hold[0] = 1;
            }
            if (hold_1 == 2) {
                hold[1] = 1;
            }
            if (hold_1 == 3) {
                hold[2] = 1;
            }
            if (hold_1 == 4) {
                hold[3] = 1;
            }
            if (hold_1 == 5) {
                hold[4] = 1;
            }
            std::cout << "Would you like to hold any other dices?" << std::endl;
            std::cout << "For YES enter: 1     For NO enter: 2" << std::endl;
            std::cin >> roll_1;
            if (roll_1 == 1) {
                roll = true;
            }
            else {
                roll = false;
            }
        } while (roll == true);
        std::cout << "Would you like to roll again or exit program?" << std::endl;
        std::cout << "For ROLL AGAIN: 1    For EXIT: 2" << std::endl;
        std::cin >> playagain;
        if (hold[0] == 0) {
            rolldice_0();
            dice[0] = rolldice_0();
        }
        if (hold[1] == 0) {
            rolldice_1();
            dice[1] = rolldice_1();
        }
        if (hold[2] == 0) {
            rolldice_2();
            dice[2] = rolldice_2();
        }
        if (hold[3] == 0) {
            rolldice_3();
            dice[3] = rolldice_3();
        }
        if (hold[4] == 0) {
            rolldice_4();
            dice[4] = rolldice_4();
        }
    }
    } while (playagain == 1);

}

int main()
{
    int playagain = 1;
    do {
        int task = 0;
        std::cout << "What task would you like to see?" << std::endl;
        std::cout << "1. Change to capital letters" << std::endl;
        std::cout << "2. Moving in grid" << std::endl;
        std::cout << "3. Stores names an numbers" << std::endl;
        std::cout << "4. Dice task" << std::endl;
        std::cout << "Enter the number of the task you would like to see:";
        std::cin >> task;
        if (task == 1) {
            capitalletter();
        }
        if (task == 2) {
            grid();
        }
        if (task == 3) {
            hold_name_and_number();
        }
        if (task == 4) {
            dice_task();
        }
        std::cout << "Would you like to see another task?" << std::endl;
        std::cout << "For YES enter: 1    For NO enter: 2" << std::endl;
    } while (playagain = 1);
}