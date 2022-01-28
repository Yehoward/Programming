#include <iostream>
#include <sstream>
#include <string>

int nrPosibilitati(std::string nr) {
    int fNrInt, sNrInt;
    std::string firstNum, secondNum;
    int variante = 0;
    int lungimea = nr.length() / 2;

    for (int i = 1; i < lungimea; i++) {
        if (nr[i] != '0') {
            variante++;
        }

        // std::cout << "se proceseaza..: " << nr[i] << "\n";
    }
    firstNum.append(nr.begin(), nr.end() - lungimea - nr.length() % 2);
    secondNum.append(nr.begin() + lungimea, nr.end());
    std::stringstream fifi(firstNum), sisi(secondNum);
    fifi >> fNrInt;
    sisi >> sNrInt;
    if (fNrInt < sNrInt) {
        variante++;
    }
    //  std::cout<<nr.length()<<"\n";
    return variante;
}

int main(int argc, char const *argv[]) {
    // std::cout << "date de intrare: " << argv[1] << "\n";
    int rezultat = nrPosibilitati(argv[1]);
    std::cout << "nr variante: " << rezultat;
    return 0;
}
