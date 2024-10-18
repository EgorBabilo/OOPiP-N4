#pragma once
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <Windows.h>
#include <iomanip>

using namespace std;

class Game {
public:
    string title;
    string genre;
    int year;

    Game() : title(""), genre(""), year(0) {}

    Game(string t, string g, int y) : title(t), genre(g), year(y) {}

    void display() const {
        cout << "Название: " << title << ", Жанр: " << genre << ", Год: " << year << endl;
    }

    bool operator<(const Game& game) const {
        return title < game.title;
    }

    bool operator==(const Game& game) const {
        return title == game.title && genre == game.genre && year == game.year;
    }
};

int InputInt();
string InputString();
void Lab4();

template <> struct hash<Game> {
    int operator()(const Game& game) const {
        return hash<string>()(game.title) ^ hash<string>()(game.genre) ^ hash<int>()(game.year);
    }
};

void addGame(map<string, Game>& container, const Game& game);

void addGame(set<Game>& container, const Game& game);

void addGame(multimap<string, Game>& container, const Game& game);

void addGame(multiset<Game>& container, const Game& game);

void addGame(unordered_map<string, Game>& container, const Game& game);

void addGame(unordered_set<Game>& container, const Game& Game);

void addGame(unordered_multimap<string, Game>& container, const Game& game);

void addGame(unordered_multiset<Game>& container, const Game& game);

void removeGame(map<string, Game>& container, const string& title);

void removeGame(set<Game>& container, const string& title);

void removeGame(multimap<string, Game>& container, const string& title);

void removeGame(multiset<Game>& container, const string& title);

void removeGame(unordered_map<string, Game>& container, const string& title);

void removeGame(unordered_set<Game>& container, const string& title);

void removeGame(unordered_multimap<string, Game>& container, const string& title);

void removeGame(unordered_multiset<Game>& container, const string& title);

void editGame(map<string, Game>& container, const string& title, const Game& newGame);

void editGame(set<Game>& container, const string& title, const Game& newGame);

void editGame(multimap<string, Game>& container, const string& title, const Game& newGame);

void editGame(multiset<Game>& container, const string& title, const Game& newGame);

void editGame(unordered_map<string, Game>& container, const string& title, const Game& newGame);

void editGame(unordered_set<Game>& container, const string& title, const Game& newGame);

void editGame(unordered_multimap<string, Game>& container, const string& title, const Game& newGame);

void editGame(unordered_multiset<Game>& container, const string& title, const Game& newGame);

void searchGame(const map<string, Game>& container, const string& title);

void searchGame(const set<Game>& container, const string& title);

void searchGame(const multimap<string, Game>& container, const string& title);

void searchGame(const multiset<Game>& container, const string& title);

void searchGame(const unordered_map<string, Game>& container, const string& title);

void searchGame(const unordered_set<Game>& container, const string& title);

void searchGame(const unordered_multimap<string, Game>& container, const string& title);

void searchGame(const unordered_multiset<Game>& container, const string& title);

void sortGame(map<string, Game>& container);

void sortGame(multimap<string, Game>& container);

void sortGame(unordered_map<string, Game>& container);

void sortGame(unordered_multimap<string, Game>& container);

void displayGame(map<string, Game>& container);

void displayGame(set<Game>& container);

void displayGame(const multimap<string, Game>& container);

void displayGame(const multiset<Game>& container);

void displayGame(unordered_map<string, Game>& container);

void displayGame(unordered_set<Game>& container);

void displayGame(unordered_multimap<string, Game>& container);

void displayGame(unordered_multiset<Game>& container);

void saveGameToFile(const map<string, Game>& container, const string& filename);

void saveGameToFile(const set<Game>& container, const string& filename);

void saveGameToFile(const multimap<string, Game>& container, const string& filename);

void saveGameToFile(const multiset<Game>& container, const string& filename);

void saveGameToFile(const unordered_map<string, Game>& container, const string& filename);

void saveGameToFile(const unordered_set<Game>& container, const string& filename);

void saveGameToFile(const unordered_multimap<string, Game>& container, const string& filename);

void saveGameToFile(const unordered_multiset<Game>& container, const string& filename);