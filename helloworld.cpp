#include <iostream>
#include <vector>

char maxChar(std::vector<char> lista)
{
    char maxVal = lista[0];
    for (char i : lista)
    {
        if (i > maxVal)
        {
            maxVal = i;
        }
    }
    return maxVal;
}

char minChar(std::vector<char> lista)
{
    char minVal = lista[0];
    for (char i : lista)
    {
        if (i < minVal)
        {
            minVal = i;
        }
    }
    return minVal;
}

int main(int argc, char const *argv[])
{
    std::vector<char> tab;
    char ctt;

    std::cout << "introduceti un cuvant si vom spune cel mai mare numar/litera din el:  \n";
    while (ctt != '$')
    {
        std::cin >> ctt;
        std::cout << "ati introdus: " << ctt << " -- " << int(ctt) << "\n";
        if (ctt != '$')
        {
            tab.push_back(ctt);
        }
    }

    std::cout << "Characterul cel mai mare din... cuvant? este: " << maxChar(tab) << "\n";
    std::cout << "Iar characterul cel mai mic... este: " << minChar(tab);

    // for (char i='A'; i<='Z'; i++){
    //     std::cout<< int(i)<<"; " ;
    // }
    return 0;
}
