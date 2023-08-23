#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string banglaNumbers[] = {"shata", "hajar", "lakh", "kuti"};
std::string banglaDigits[] = {"", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

std::string convertToBanglaText(long long num) {
    if (num == 0)
        return "0";

    std::string text;

    for (int i = 3; i >= 0; i--) {
        long long divisor = 1;
        for (int j = 0; j < i; j++)
            divisor *= 100;

        long long part = num / divisor;
        num %= divisor;

        if (part > 0) {
            if (!text.empty())
                text += " ";

            text += convertToBanglaText(part) + " " + banglaNumbers[i];
        }
    }

    if (num > 0) {
        if (!text.empty())
            text += " ";

        if (num <= 9)
            text += banglaDigits[num];
        else
            text += convertToBanglaText(num);
    }

    return text;
}

int main() {
    long long num;
    int caseNumber = 1;

    while (std::cin >> num) {
        std::string text = convertToBanglaText(num);

        std::cout << std::setw(4) << std::setfill(' ') << caseNumber << ". " << text << std::endl;
        caseNumber++;
    }

    return 0;
}
