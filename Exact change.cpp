#include <iostream>
using namespace std;

int main() {

    int numChange;
    bool isAmount;
    bool isDenom;
    int countCoin;
    bool isPlural;
    string coinType;

    cin >> numChange;

    isAmount = (numChange > 0) ? true : false;
    if (isAmount == false) {
        cout << "No change" << endl;
    }

    isDenom = (numChange >= 100) ? true : false;
    if (isDenom == true) {
        coinType = "Dollar";
        countCoin = numChange / 100;
        isPlural = (countCoin > 1) ? true : false;
        if (isPlural == true) {
            coinType.append("s");
        }

        cout << countCoin << " " << coinType << endl;
        numChange = numChange - (countCoin * 100);
        countCoin = 0;
    }

    isDenom = (numChange >= 25) ? true : false;
    if (isDenom == true) {
        coinType = "Quarter";
        countCoin = numChange / 25;
        isPlural = (countCoin > 1) ? true : false;
        if (isPlural == true) {
            coinType.append("s");
        }

        cout << countCoin << " " << coinType << endl;
        numChange = numChange - (countCoin * 25);
        countCoin = 0;
    }

    isDenom = (numChange >= 10) ? true : false;
    if (isDenom == true) {
        coinType = "Dime";
        countCoin = numChange / 10;
        isPlural = (countCoin > 1) ? true : false;
        if (isPlural == true) {
            coinType.append("s");
        }

        cout << countCoin << " " << coinType << endl;
        numChange = numChange - (countCoin * 10);
        countCoin = 0;
    }

    isDenom = (numChange >= 5) ? true : false;
    if (isDenom == true) {
        coinType = "Nickel";
        countCoin = numChange / 5;

        cout << countCoin << " " << coinType << endl;
        numChange = numChange - (countCoin * 5);
        countCoin = 0;
    }

    if (numChange >= 1) {
        coinType = "Penny";
        isPlural = (numChange > 1) ? true : false;
        if (isPlural == true) {
            coinType = coinType.substr(0, coinType.size() - 1);
            coinType.append("ies");
        }

        cout << numChange << " " << coinType << endl;
    }

    return 0;
}