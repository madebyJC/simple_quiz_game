#include <iostream>
#include <iomanip>

int main() {

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: "};

    std::string options[][4] = {
            {"A. 1969",             "B. 1975",              "C. 1985",         "D. 1989"},
            {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
            {"A. C",                "B. C+",                "C. C--",          "D. B++"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++) {
        std::cout << "-------------------------------------------------------------------------------" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "-------------------------------------------------------------------------------" << std::endl;

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << std::endl;
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            std::cout << "CORRECT!\n";
            score++;
        } else {
            std::cout << "WRONG!\n";
            std::cout << "Answer: " << answerKey[i] << std::endl;
        }
    }

    std::cout << "\n----------------------------" << std::endl;
    std::cout << "QUIZ RESULT" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Correct Guesses: " << score << std::endl;
    std::cout << "Number of Questions: " << size << std::endl;
    std::cout << "SCORE: " << std::setprecision(2) << std::fixed << (score / (double) size) * 100 << "%" << std::endl;

    return 0;
}

