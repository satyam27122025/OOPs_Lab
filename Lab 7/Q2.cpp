#include <iostream>
#include <string>
using namespace std;

void printReverse(const string& sentence, int index) {
    if (index < 0)
        return;

    cout << sentence[index];
    printReverse(sentence, index - 1);
}

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Reversed sentence: ";
    if (!sentence.empty())
        printReverse(sentence, static_cast<int>(sentence.length()) - 1);
    cout << '\n';

    return 0;
}
