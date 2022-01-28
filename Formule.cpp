#include <fstream>
#include <iostream>
#include <vector>

char checkExp(char sir[250]) {
    char last = ' ';
    int ob = 0;

    for (int i = 0; i < 250; i++) {
        if (sir[i] == ' ') {
            continue;
        }

        if (int(sir[i]) <= 57 && int(sir[i]) >= 48) {
            // std::cout << "ati introdus: " << sir[i] << "\n";
        } else if (sir[i] == '+' || sir[i] == '-' || sir[i] == '/' ||
                   sir[i] == '*') {
            if (int(last) <= 57 && int(last) >= 48) {
                // std::cout << "ati introdus: " << sir[i] << "\n";
            } else {
                // std::cout << "nu poti avea simbol inainte de expresie\n";
                return 'n';
            }
        } else if (int(sir[i]) == 0) {
            break;
        } else if (sir[i] == '(') {
            ob++;
        } else if (sir[i] == ')') {
            if (ob > 0) {
                ob--;
                if (int(last) > 57 && int(last) < 48) {
                    // std::cout
                        // << "nu poti avea simbol inainte de paranteza inchisa\n";
                    return 'n';
                }
            } else {
                // std::cout << "nu ai deschis paranteza\n";
                return 'n';
            }
        } else {
            // std::cout << "ati introdus un character\n";
            return 'n';
        }
        last = sir[i];
    }
    if (ob > 0) {
        // std::cout << "inchide parantezele\n";
        return 'n';
    }
    return 'D';
}

int main(int argc, char const *argv[]) {

    std::vector<char> tab;
    char ctt[250];
    std::ifstream file("formule.txt");
    std::ofstream exitFile("expresii_verificate.txt");
    while (file) {
        file.getline(ctt, 250);
        if (int(ctt[0]) != 0) {
            exitFile << checkExp(ctt) << " -- " << ctt << std::endl;
        }
    }
    exitFile.close();
    file.close();

    // std::cin.getline (ctt,250);
    // std::cout << checkExp(ctt) << "\n";

    return 0;
}
