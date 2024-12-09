#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;

void shuffleString(string &str);
void displayText(int x, int y, const string &text, int color = WHITE);
string getInput(int x, int y);
void displayGameMenu();
void handleMenuClick(int mouseX, int mouseY);
void displayHowToPlay();
void displayWelcomeScreen();

#define SIZE 10
#define COUNT 3

bool startClicked = false;
bool quitClicked = false;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    srand(time(NULL));
    string words1[SIZE] = {"eat","run","sit","dig","hit","pay","cut","set","say","lay"};
    string words2[SIZE] = {"drag", "move", "work", "push", "cook","read","talk","walk","jump","swim"};
    string words3[SIZE] = {"break", "write", "catch", "dance", "drink","clean","sleep","smile","touch","count"};
    string words4[SIZE] = {"juggle", "paddle", "snatch", "crouch", "devour","travel","demand","escape","invent","depart"};
    string words5[SIZE] = {"prevail","consume","relieve","inquire","conjure","deplete","portray","require","control","recruit"};

    string answer;
    int used1[SIZE] = {0};

    displayWelcomeScreen();

    while (!quitClicked) {
        displayGameMenu();

        while (true) {
            if (ismouseclick(WM_LBUTTONDOWN)) {
                int mouseX, mouseY;
                getmouseclick(WM_LBUTTONDOWN, mouseX, mouseY);
                handleMenuClick(mouseX, mouseY);
            }
            if (startClicked || quitClicked) break;
        }

        if (quitClicked) break;

        if (startClicked) {
            int points = 0;

            for (int j = 1; j <= 5; j++) {
                int i = 0;
                cleardevice();

                int centerX = getmaxx() / 2;
                int centerY = getmaxy() / 2;

                string roundText = "Round " + to_string(j);
                displayText(centerX - textwidth(const_cast<char*>(roundText.c_str())) / 2, centerY - textheight(const_cast<char*>(roundText.c_str())) / 2, roundText);
                delay(2000);

                cleardevice();

                if (j == 1) {
                    while (i < COUNT) {
                        int index = rand() % SIZE;

                        if (!used1[index]) {
                            string shuffledWord = words1[index];
                            shuffleString(shuffledWord);

                            string displayShuffledWord = "Shuffled Word: " + shuffledWord;
                            displayText(150, 100, displayShuffledWord);
                            string prompt = "Enter your answer: ";
                            displayText(150, 150, prompt);

                            answer = getInput(150 + textwidth(const_cast<char*>(prompt.c_str())), 150);

                            if (answer == words1[index]) {
                                displayText(200, 250, "Congratulations");
                                points++;
                            } else {
                                displayText(200, 250, "Failed!!!");
                                delay(1000);
                                break;
                            }

                            used1[index] = 1;
                            i++;
                            delay(2000);
                            cleardevice();
                        }
                    }
                    if (points != 3) break;
                } else if (j == 2 && points == 3) {
                    i = 0;
                    int used2[SIZE] = {0};
                    while (i < COUNT) {
                        int index = rand() % SIZE;
                        if (!used2[index]) {
                            string shuffledWord = words2[index];
                            shuffleString(shuffledWord);

                            string displayShuffledWord = "Shuffled Word: " + shuffledWord;
                            displayText(150, 100, displayShuffledWord);
                            string prompt = "Enter your answer: ";
                            displayText(150, 150, prompt);

                            answer = getInput(150 + textwidth(const_cast<char*>(prompt.c_str())), 150);

                            if (answer == words2[index]) {
                                displayText(200, 250, "Congratulations");
                                points++;
                            } else {
                                displayText(200, 250, "Failed!!!");
                                delay(1000);
                                break;
                            }

                            used2[index] = 1;
                            i++;
                            delay(2000);
                            cleardevice();
                        }
                    }
                    if (points != 6) break;
                } else if (j == 3 && points == 6) {
                    i = 0;
                    int used3[SIZE] = {0};
                    while (i < COUNT) {
                        int index = rand() % SIZE;
                        if (!used3[index]) {
                            string shuffledWord = words3[index];
                            shuffleString(shuffledWord);

                            string displayShuffledWord = "Shuffled Word: " + shuffledWord;
                            displayText(150, 100, displayShuffledWord);
                            string prompt = "Enter your answer: ";
                            displayText(150, 150, prompt);

                            answer = getInput(150 + textwidth(const_cast<char*>(prompt.c_str())), 150);

                            if (answer == words3[index]) {
                                displayText(200, 250, "Congratulations");
                                points++;
                            } else {
                                displayText(200, 250, "Failed!!!");
                                delay(1000);
                                break;
                            }

                            used3[index] = 1;
                            i++;
                            delay(2000);
                            cleardevice();
                        }
                    }
                    if (points != 9) break;
                }else if (j == 4 && points == 9) {
                    i = 0;
                    int used4[SIZE] = {0};
                    while (i < COUNT) {
                        int index = rand() % SIZE;
                        if (!used4[index]) {
                            string shuffledWord = words4[index];
                            shuffleString(shuffledWord);

                            string displayShuffledWord = "Shuffled Word: " + shuffledWord;
                            displayText(150, 100, displayShuffledWord);
                            string prompt = "Enter your answer: ";
                            displayText(150, 150, prompt);

                            answer = getInput(150 + textwidth(const_cast<char*>(prompt.c_str())), 150);

                            if (answer == words4[index]) {
                                displayText(200, 250, "Congratulations");
                                points++;
                            } else {
                                displayText(200, 250, "Failed!!!");
                                delay(1000);
                                break;
                            }

                            used4[index] = 1;
                            i++;
                            delay(2000);
                            cleardevice();
                        }
                    }
                    if (points != 12) break;
                }else if (j == 5 && points == 12) {
                    i = 0;
                    int used5[SIZE] = {0};
                    while (i < COUNT) {
                        int index = rand() % SIZE;
                        if (!used5[index]) {
                            string shuffledWord = words5[index];
                            shuffleString(shuffledWord);

                            string displayShuffledWord = "Shuffled Word: " + shuffledWord;
                            displayText(150, 100, displayShuffledWord);
                            string prompt = "Enter your answer: ";
                            displayText(150, 150, prompt);

                            answer = getInput(150 + textwidth(const_cast<char*>(prompt.c_str())), 150);

                            if (answer == words5[index]) {
                                displayText(200, 250, "Congratulations");
                                points++;
                            } else {
                                displayText(200, 250, "Failed!!!");
                                delay(1000);
                                break;
                            }

                            used5[index] = 1;
                            i++;
                            delay(2000);
                            cleardevice();
                        }
                    }
                    if (points != 15) break;

                }
            }

            cleardevice();
            string finalScore = "Your total points: " + to_string(points);
            displayText(200, 200, finalScore);
            delay(4000);
        }

        startClicked = false;
    }

    closegraph();
    return 0;
}

void displayWelcomeScreen() {
    cleardevice();
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
    setcolor(WHITE);
    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    string title = "WordCraft";
    string subtitle = "Welcome to the world of words";

    displayText(centerX - textwidth(const_cast<char*>(title.c_str())) / 2, centerY - textheight(const_cast<char*>(title.c_str())) / 2, title);

    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    displayText(centerX - textwidth(const_cast<char*>(subtitle.c_str())) / 2, centerY + textheight(const_cast<char*>(title.c_str())), subtitle);

    delay(5000);
}

void displayGameMenu() {
    cleardevice();
    settextstyle(SIMPLEX_FONT, HORIZ_DIR, 3);
    setcolor(WHITE);
    outtextxy(180, 150, "Start");
    outtextxy(180, 200, "How to play");
    outtextxy(180, 250, "Quit");
}

void handleMenuClick(int mouseX, int mouseY) {
    if (mouseX >= 200 && mouseX <= 300) {
        if (mouseY >= 150 && mouseY <= 170) {
            startClicked = true;
        } else if (mouseY >= 200 && mouseY <= 220) {
            displayHowToPlay();
        } else if (mouseY >= 250 && mouseY <= 270) {
            quitClicked = true;
        }
    }
}

void displayHowToPlay() {
    cleardevice();
    settextstyle(COMPLEX_FONT, HORIZ_DIR,1 );
    setcolor(YELLOW);
    outtextxy(20, 70, "Basic principles:");
    outtextxy(20, 90, "1. You will be given shuffled words");
    outtextxy(20, 110, "2. You have to rearrange it in meaningful words.");
    outtextxy(20, 150, "Rules and regulations:");
    outtextxy(20, 170, "1. You have 5 rounds and each round has 3 words.");
    outtextxy(20, 190, "2. For each successful  attempt, you will get 1 point.");
    outtextxy(20, 210, "3. For a wrong answer, you have to start from round 1.");
    outtextxy(20, 250, "Tips:");
    outtextxy(20, 270, "1. Every words are verbs.");
    outtextxy(20, 290, "2. After each round, words will become more complicated.");
    outtextxy(20, 330, "Press any key to go back");

    while (!kbhit()) {}

    getch();
    cleardevice();
    displayGameMenu();
}

void shuffleString(string &str) {
    string check = str;
    int n = str.size();
    while (1) {
        for (int i = n - 1; i > 0; i--) {
            int j = rand() % (i + 1);
            swap(str[i], str[j]);
        }
        if (check == str)
            continue;
        else {
            break;
        }
    }
}

void displayText(int x, int y, const string &text, int color) {
    setcolor(color);
    outtextxy(x, y, const_cast<char *>(text.c_str()));
}

string getInput(int x, int y) {
    string input;
    char ch;
    int cursorX = x;
    int bgColor = getbkcolor();

    while ((ch = getch()) != 13) {
        if (ch == 8) {
            if (!input.empty()) {
                int lastCharWidth = textwidth(const_cast<char*>(input.substr(input.size() - 1).c_str()));
                input.pop_back();
                cursorX -= lastCharWidth;
                setfillstyle(SOLID_FILL, bgColor);
                bar(cursorX, y, cursorX + lastCharWidth, y + textheight("F"));
            }
        } else if (isprint(ch)) {
            input.push_back(ch);
            char displayChar[2] = {ch, '\0'};
            outtextxy(cursorX, y, displayChar);
            cursorX += textwidth(displayChar);
        }
    }
    return input;
}
