#include "TextHandler.h"

TextHandler::TextHandler(const char* filename) : filename(filename) {
    characters = new std::set<char>();
    charactersStatistics = new std::map<char, int>();
    numbers = new std::set<char>();
    numbersStatistics = new std::map<char, int>();
    specialSymbols = new std::set<char>();
    specialSymbolsStatistics = new std::map<char, int>();
    word = new std::set<std::string>();
    wordStatistics = new std::map<std::string, int>();
    quantity = 0;
}

TextHandler::~TextHandler() {
    delete characters;
    delete charactersStatistics;
    delete numbers;
    delete numbersStatistics;
    delete specialSymbols;
    delete specialSymbolsStatistics;
    delete word;
    delete wordStatistics;
}

const std::set<char>& TextHandler::getCharacters() const {
    return *characters;
}
const std::map<char, int>& TextHandler::getCharactersStatistics() const {
    return *charactersStatistics;
}
const std::set<char>& TextHandler::getNumbers() const {
    return *numbers;
}
const std::map<char, int>& TextHandler::getNumbersStatistics() const {
    return *numbersStatistics;
}
const std::set<char>& TextHandler::getSpecialSymbols() const {
    return *specialSymbols;
}
const std::map<char, int>& TextHandler::getSpecialSymbolsStatistics() const {
    return *specialSymbolsStatistics;
}

const std::set<std::string>& TextHandler::getWord() const {
    return *word;
}

const std::map<std::string, int>& TextHandler::getWordStatistic() const {
    return *wordStatistics;
}

long long TextHandler::getQuantity() const {
    return quantity;
}

void TextHandler::insert(char symbol, std::set<char>* lst) {
    lst->insert(symbol);
}

void TextHandler::insert(char symbol, std::map<char, int>* lst) {
    if ( lst->find(symbol) == lst->end() ) {
        lst->insert(std::pair<char, int>(symbol, 0));
    }
    lst->at(symbol) += 1;
}

void TextHandler::insert(std::string inWord, std::set<std::string>* inList) {
    inList->insert(inWord);
}

void TextHandler::insert(std::string inWord, std::map<std::string, int>* inList) {
    if ( inList->find(inWord) == inList->end() ) {
        inList->insert(std::pair<std::string, int>(inWord, 0));
    }
    inList->at(inWord) += 1;
}

bool TextHandler::isLetter(char symbol) {
    return ( symbol >= 'A' && symbol <= 'Z' ) || ( symbol >= 'a' && symbol <= 'z' );
}
bool TextHandler::isNumber(char symbol) {
    return symbol >= '0' && symbol <= '9';
}
bool TextHandler::isSpecial(char symbol) {
    bool special = false;

    if ( ( symbol > ' ' && symbol < '0' ) || ( symbol > '9' && symbol < 'A' ) ) {
        special = true;
    }
    if ( ( symbol > 'Z' && symbol < 'a' ) || ( symbol > 'z' && symbol <= '~' ) ) {
        special = true;
    }
    return special;
}

bool TextHandler::isWord(char inWord) {
    return ( inWord >= 'A' && inWord <= 'Z' ) || ( inWord >= 'a' && inWord <= 'z' ) || inWord == 39 || inWord == ' ';
}

void TextHandler::parseText() {
    std::ifstream file(filename);
    int diff = 'a' - 'A';
    char symbol;
    std::string iword;

    for ( ; file.get(symbol) ; ) {
        if ( isLetter(symbol) ) {
            if ( symbol < 'a' ) {
                symbol += diff;
            }
            insert(symbol, characters);
            insert(symbol, charactersStatistics);
            quantity += 1;
        }
        if ( isNumber(symbol) ) {
            insert(symbol, numbers);
            insert(symbol, numbersStatistics);
            quantity += 1;
        }
        if ( isSpecial(symbol) ) {
            insert(symbol, specialSymbols);
            insert(symbol, specialSymbolsStatistics);
            quantity += 1;
        }
        if ( isWord(symbol) ) {
             if ( symbol == 32 ) {
                insert(iword.substr(1), word);
                insert(iword, wordStatistics);
                iword = "";
            }
            iword += symbol;
        }
    }
    file.close();
}

std::ostream& operator<<(std::ostream& out, const TextHandler& handler) {
    out << "Symbols found: " << handler.getQuantity() << std::endl;
    out << "Letters statistic:" << std::endl;
    out << "Unique: " << handler.getCharacters() << std::endl;
    out << "Matches in text: " << std::endl;
    out << handler.getCharactersStatistics() << std::endl;

    out << "Numbers statistic:" << std::endl;
    out << "Unique: " << handler.getNumbers() << std::endl;
    out << "Matches in text: " << std::endl;
    out << handler.getNumbersStatistics() << std::endl;

    out << "Special symbols statistic:" << std::endl;
    out << "Unique: " << handler.getSpecialSymbols() << std::endl;
    out << "Matches in text: " << std::endl;
    out << handler.getSpecialSymbolsStatistics() << std::endl;

    out << "Word statistic:" << std::endl;
    out << "Word unique: " << handler.getWord() << std::endl;
    out << "Word statistic: " << std::endl;
    out << handler.getWordStatistic() << std::endl;
    return out;
}
