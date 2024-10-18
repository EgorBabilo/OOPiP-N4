#include "Labwork4.h"

void Lab4() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    map<string, Game> mapContainer;
    set<Game> setContainer;
    multimap<string, Game> multimapContainer;
    multiset<Game> multisetContainer;
    unordered_map<string, Game> unorderedMapContainer;
    unordered_set<Game> unorderedSetContainer;
    unordered_multimap<string, Game> unorderedMultimapContainer;
    unordered_multiset<Game> unorderedMultisetContainer;

    int currentSize = 0;
    addGame(mapContainer, Game("CCCmapContainer", "RPG", 2020));
    addGame(mapContainer, Game("AAAmapContainer", "Action", 2021));
    addGame(mapContainer, Game("BBBmapContainer", "Adventure", 2022));

    addGame(multimapContainer, Game("CCCmultimapContainer", "RPG", 2020));
    addGame(multimapContainer, Game("AAAmultimapContainer", "Action", 2021));
    addGame(multimapContainer, Game("BBBmultimapContainer", "Adventure", 2022));

    addGame(unorderedMapContainer, Game("CCCunorderedMapContainer", "RPG", 2020));
    addGame(unorderedMapContainer, Game("AAAunorderedMapContainer", "Action", 2021));
    addGame(unorderedMapContainer, Game("BBBunorderedMapContainer", "Adventure", 2022));

    addGame(unorderedMultimapContainer, Game("CCCunorderedMultimapContainer", "RPG", 2020));
    addGame(unorderedMultimapContainer, Game("AAAunorderedMultimapContainer", "Action", 2021));
    addGame(unorderedMultimapContainer, Game("BBBunorderedMultimapContainer", "Adventure", 2022));

    addGame(setContainer, Game("AAAsetContainer", "RPG", 2020));
    addGame(setContainer, Game("BBBsetContainer", "Action", 2021));
    addGame(setContainer, Game("CCCsetContainer", "Adventure", 2022));

    addGame(multisetContainer, Game("AAAmultisetContainer", "RPG", 2020));
    addGame(multisetContainer, Game("BBBmultisetContainer", "Action", 2021));
    addGame(multisetContainer, Game("CCCmultisetContainer", "Adventure", 2022));

    addGame(unorderedSetContainer, Game("AAAunorderedSetContainer", "RPG", 2020));
    addGame(unorderedSetContainer, Game("BBBunorderedSetContainer", "Action", 2021));
    addGame(unorderedSetContainer, Game("CCCunorderedSetContainer", "Adventure", 2022));

    addGame(unorderedMultisetContainer, Game("AAAunorderedMultisetContainer", "RPG", 2020));
    addGame(unorderedMultisetContainer, Game("BBBunorderedMultisetContainer", "Action", 2021));
    addGame(unorderedMultisetContainer, Game("CCCunorderedMultisetContainer", "Adventure", 2022));

    int choice;
    while (true) {
        cout << "1.Добавить игру\n"
            << "2.Удалить игру\n"
            << "3.Редактировать игру\n"
            << "4.Найти игру\n"
            << "5.Сортировать игры\n"
            << "6.Отобразить игры\n"
            << "7.Сохранить в файл игры\n"
            << "0.Выход\n";
        cout << "Ваш выбор: ";
        string title, genre;
        int year;

        switch (InputInt()) {
        case 1:
            cout << "Введите название: ";
            title = InputString();
            cout << "Введите жанр: ";
            genre = InputString();
            cout << "Введите год: ";
            year = InputInt();
            while (true) {
                cout << "\n1.map\n"
                    << "2.set\n"
                    << "3.multimap\n"
                    << "4.multiset\n"
                    << "5.unordered_map\n"
                    << "6.unordered_set\n"
                    << "7.unordered_multimap\n"
                    << "8.unordered_multiset\n"
                    << "Ваш выбор: ";
                switch (InputInt())
                {
                case 1:
                    addGame(mapContainer, Game(title, genre, year));
                    break;
                case 2:
                    addGame(setContainer, Game(title, genre, year));
                    break;
                case 3:
                    addGame(multimapContainer, Game(title, genre, year));
                    break;
                case 4:
                    addGame(multisetContainer, Game(title, genre, year));
                    break;
                case 5:
                    addGame(unorderedMapContainer, Game(title, genre, year));
                    break;
                case 6:
                    addGame(unorderedSetContainer, Game(title, genre, year));
                    break;
                case 7:
                    addGame(unorderedMultimapContainer, Game(title, genre, year));
                    break;
                case 8:
                    addGame(unorderedMultisetContainer, Game(title, genre, year));
                    break;
                default:
                    cout << "Неправильный выбор\n\n";
                    continue;
                }
                break;
            }
            cout << "Игра добавлена...\n\n";
            break;
        case 2:
            cout << "Введите название: ";
            title = InputString();
            while (true) {
                cout << "\n1.map\n"
                    << "2.set\n"
                    << "3.multimap\n"
                    << "4.multiset\n"
                    << "5.unordered_map\n"
                    << "6.unordered_set\n"
                    << "7.unordered_multimap\n"
                    << "8.unordered_multiset\n"
                    << "Ваш выбор: ";
                switch (InputInt())
                {
                case 1:
                    removeGame(mapContainer, title);
                    break;
                case 2:
                    removeGame(setContainer, title);
                    break;
                case 3:
                    removeGame(multimapContainer, title);
                    break;
                case 4:
                    removeGame(multisetContainer, title);
                    break;
                case 5:
                    removeGame(unorderedMapContainer, title);
                    break;
                case 6:
                    removeGame(unorderedSetContainer, title);
                    break;
                case 7:
                    removeGame(unorderedMultimapContainer, title);
                    break;
                case 8:
                    removeGame(unorderedMultisetContainer, title);
                    break;
                default:
                    cout << "Неправильный выбор\n\n";
                    continue;
                }
                break;
            }
            break;
        case 3: {
            cout << "Введите название: ";
            title = InputString();
            cout << "Введите новое название: ";
            string newTitle = InputString();
            cout << "Введите новый жанр: ";
            string newGenre = InputString();
            cout << "Введите новый год: ";
            int newYear = InputInt();
            while (true) {
                cout << "\n1.map\n"
                    << "2.set\n"
                    << "3.multimap\n"
                    << "4.multiset\n"
                    << "5.unordered_map\n"
                    << "6.unordered_set\n"
                    << "7.unordered_multimap\n"
                    << "8.unordered_multiset\n"
                    << "Ваш выбор: ";
                switch (InputInt())
                {
                case 1:
                    editGame(mapContainer, title, Game(newTitle, newGenre, newYear));
                    break;
                case 2:
                    editGame(setContainer, title, Game(newTitle, newGenre, newYear));
                    break;
                case 3:
                    editGame(multimapContainer, title, Game(newTitle, newGenre, newYear));
                    break;
                case 4:
                    editGame(multisetContainer, title, Game(newTitle, newGenre, newYear));
                    break;
                case 5:
                    editGame(unorderedMapContainer, title, Game(newTitle, newGenre, newYear));
                    break;
                case 6:
                    editGame(unorderedSetContainer, title, Game(newTitle, newGenre, newYear));
                    break;
                case 7:
                    editGame(unorderedMultimapContainer, title, Game(newTitle, newGenre, newYear));
                    break;
                case 8:
                    editGame(unorderedMultisetContainer, title, Game(newTitle, newGenre, newYear));
                    break;
                default:
                    cout << "Неправильный выбор\n\n";
                    continue;
                }
                break;
            }
        }
              break;
        case 4:
            cout << "Введите название: ";
            title = InputString();

            while (true) {
                cout << "\n1.map\n"
                    << "2.set\n"
                    << "3.multimap\n"
                    << "4.multiset\n"
                    << "5.unordered_map\n"
                    << "6.unordered_set\n"
                    << "7.unordered_multimap\n"
                    << "8.unordered_multiset\n"
                    << "Ваш выбор: ";
                switch (InputInt())
                {
                case 1:
                    searchGame(mapContainer, title);
                    break;
                case 2:
                    searchGame(setContainer, title);
                    break;
                case 3:
                    searchGame(multimapContainer, title);
                    break;
                case 4:
                    searchGame(multisetContainer, title);
                    break;
                case 5:
                    searchGame(unorderedMapContainer, title);
                    break;
                case 6:
                    searchGame(unorderedSetContainer, title);
                    break;
                case 7:
                    searchGame(unorderedMultimapContainer, title);
                    break;
                case 8:
                    searchGame(unorderedMultisetContainer, title);
                    break;
                default:
                    cout << "Неправильный выбор\n\n";
                    continue;
                }
                break;
            }
            break;
        case 5:
            while (true) {
                cout << "\n1.map\n"
                    << "2.multimap\n"
                    << "3.unordered_map\n"
                    << "4.unordered_multimap\n"
                    << "Ваш выбор: ";
                switch (InputInt())
                {
                case 1:
                    cout << "Отсортированный map:\n\n";
                    sortGame(mapContainer);
                    break;
                case 2:
                    cout << "Отсортированный multimap:\n\n";
                    sortGame(multimapContainer);
                    break;
                case 3:
                    cout << "Отсортированный unordered_map:\n\n";
                    sortGame(unorderedMapContainer);
                    break;
                case 4:
                    cout << "Отсортированный unordered_multimap:\n\n";
                    sortGame(unorderedMultimapContainer);
                    break;
                default:
                    cout << "Неправильный выбор\n\n";
                    continue;
                }
                break;
            }
            break;
        case 6:
            while (true) {
                cout << "\n1.map\n"
                    << "2.set\n"
                    << "3.multimap\n"
                    << "4.multiset\n"
                    << "5.unordered_map\n"
                    << "6.unordered_set\n"
                    << "7.unordered_multimap\n"
                    << "8.unordered_multiset\n"
                    << "Ваш выбор: ";
                switch (InputInt())
                {
                case 1:
                    displayGame(mapContainer);
                    break;
                case 2:
                    displayGame(setContainer);
                    break;
                case 3:
                    displayGame(multimapContainer);
                    break;
                case 4:
                    displayGame(multisetContainer);
                    break;
                case 5:
                    displayGame(unorderedMapContainer);
                    break;
                case 6:
                    displayGame(unorderedSetContainer);
                    break;
                case 7:
                    displayGame(unorderedMultimapContainer);
                    break;
                case 8:
                    displayGame(unorderedMultisetContainer);
                    break;
                default:
                    cout << "Неправильный выбор\n\n";
                    continue;
                }
                break;
            }
            break;
        case 7:
            while (true) {
                cout << "\n1.map\n"
                    << "2.set\n"
                    << "3.multimap\n"
                    << "4.multiset\n"
                    << "5.unordered_map\n"
                    << "6.unordered_set\n"
                    << "7.unordered_multimap\n"
                    << "8.unordered_multiset\n"
                    << "Ваш выбор: ";
                switch (InputInt())
                {
                case 1:
                    saveGameToFile(mapContainer, "mapContainer");
                    cout << "Map сохранен в файл...\n";
                    break;
                case 2:
                    saveGameToFile(setContainer, "setContainer");
                    cout << "Set сохранен в файл...\n";
                    break;
                case 3:
                    saveGameToFile(multimapContainer, "multimapContainer");
                    cout << "Multimap сохранен в файл...\n";
                    break;
                case 4:
                    saveGameToFile(multisetContainer, "multisetContainer");
                    cout << "Multiset сохранен в файл...\n";
                    break;
                case 5:
                    saveGameToFile(unorderedMapContainer, "unorderedMapContainer");
                    cout << "Unordered_map сохранен в файл...\n";
                    break;
                case 6:
                    saveGameToFile(unorderedSetContainer, "unorderedSetContainer");
                    cout << "Unordered_set сохранен в файл...\n";
                    break;
                case 7:
                    saveGameToFile(unorderedMultimapContainer, "unorderedMultimapContainer");
                    cout << "Unordered_multimap сохранен в файл...\n";
                    break;
                case 8:
                    saveGameToFile(unorderedMultisetContainer, "unorderedMultisetContainer");
                    cout << "Unordered_multiset сохранен в файл...\n";
                    break;
                default:
                    cout << "Неправильный выбор\n\n";
                    continue;
                }
                break;
            }
            break;
        case 0:
            return;
        default:
            cout << "Неправильный выбор\n\n";
        }
    }
}

int InputInt() {
    int input;
    cin.unsetf(ios::skipws);
    while (true) {
        cin >> input;
        if (cin.good()) {
            while (cin.get() != '\n');
            if (cin.eof()) {
                cout << "Достигнут конец потока...\n";
            }
            break;
        }
        else if (cin.bad()) {
            cout << "Потеря целостности буфера...\n";
        }
        else if (cin.fail()) {
            cout << "Передан не корректный формат ввода...\n";
        }

        cin.clear();
        cout << "Ошибка ввода..." << endl;
        cin.ignore(100, '\n');
    }
    return input;
}

string InputString() {
    string input;
    while (true) {
        getline(cin, input);
        if (input.length() == 0) {
            cout << "Ошибка ввода..." << endl;
            input.clear();
            continue;
        }
        break;
    }
    return input;
}

void addGame(map<string, Game>& container, const Game& game) {
    container[game.title] = game;
}

void addGame(set<Game>& container, const Game& game) {
    container.insert(game);
}

void addGame(multimap<string, Game>& container, const Game& game) {
    container.insert(make_pair(game.title, game));
}

void addGame(multiset<Game>& container, const Game& game) {
    container.insert(game);
}

void addGame(unordered_map<string, Game>& container, const Game& game) {
    container[game.title] = game;
}

void addGame(unordered_set<Game>& container, const Game& game) {
    container.insert(game);
}

void addGame(unordered_multimap<string, Game>& container, const Game& game) {
    container.insert(make_pair(game.title, game));
}

void addGame(unordered_multiset<Game>& container, const Game& game) {
    container.insert(game);
}

void removeGame(map<string, Game>& container, const string& title) {
    if (container.erase(title))
        cout << "Игра удалена...\n\n";
    else
        cout << "Игра не найдена...\n\n";
}

void removeGame(set<Game>& container, const string& title) {
    for (const auto& game : container) {
        if (game.title == title) {
            container.erase(game);
            cout << "Игра удалена...\n\n";
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void removeGame(multimap<string, Game>& container, const string& title) {
    if (container.erase(title))
        cout << "Игра удалена...\n\n";
    else
        cout << "Игра не найдена...\n\n";
}

void removeGame(multiset<Game>& container, const string& title) {
    for (const auto& game : container) {
        if (game.title == title) {
            container.erase(game);
            cout << "Игра удалена...\n\n";
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void removeGame(unordered_map<string, Game>& container, const string& title) {
    if (container.erase(title))
        cout << "Игра удалена...\n\n";
    else
        cout << "Игра не найдена...\n\n";
}

void removeGame(unordered_set<Game>& container, const string& title) {
    for (const auto& game : container) {
        if (game.title == title) {
            container.erase(game);
            cout << "Игра удалена...\n\n";
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void removeGame(unordered_multimap<string, Game>& container, const string& title) {
    if (container.erase(title))
        cout << "Игра удалена...\n\n";
    else
        cout << "Игра не найдена...\n\n";
}

void removeGame(unordered_multiset<Game>& container, const string& title) {
    for (const auto& game : container) {
        if (game.title == title) {
            container.erase(game);
            cout << "Игра удалена...\n\n";
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void editGame(map<string, Game>& container, const string& title, const Game& newGame) {
    if (container.find(title) != container.end()) {
        container.erase(title);
        container[newGame.title] = newGame;
        cout << "Игра отредактирована...\n\n";
    }
    else {
        cout << "Контейнер не содержит данного ключа...\n\n";
    }
}

void editGame(set<Game>& container, const string& title, const Game& newGame) {
    for (const auto& game : container) {
        if (game.title == title) {
            container.erase(game);
            container.insert(newGame);
            cout << "Игра отредактирована...\n\n";
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void editGame(multimap<string, Game>& container, const string& title, const Game& newGame) {
    if (container.find(title) != container.end()) {
        container.erase(title);
        container.insert(make_pair(newGame.title, newGame));
        cout << "Игра отредактирована...\n\n";
    }
    else {
        cout << "Контейнер не содержит данного ключа...\n\n";
    }
}

void editGame(multiset<Game>& container, const string& title, const Game& newGame) {
    for (const auto& game : container) {
        if (game.title == title) {
            container.erase(game);
            container.insert(newGame);
            cout << "Игра отредактирована...\n\n";
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void editGame(unordered_map<string, Game>& container, const string& title, const Game& newGame) {
    if (container.find(title) != container.end()) {
        container.erase(title);
        container[newGame.title] = newGame;
        cout << "Игра отредактирована...\n\n";
    }
    else {
        cout << "Контейнер не содержит данного ключа...\n\n";
    }
}

void editGame(unordered_set<Game>& container, const string& title, const Game& newGame) {
    for (const auto& game : container) {
        if (game.title == title) {
            container.erase(game);
            container.insert(newGame);
            cout << "Игра отредактирована...\n\n";
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void editGame(unordered_multimap<string, Game>& container, const string& title, const Game& newGame) {
    if (container.find(title) != container.end()) {
        container.erase(title);
        container.insert(make_pair(newGame.title, newGame));
        cout << "Игра отредактирована...\n\n";
    }
    else {
        cout << "Контейнер не содержит данного ключа...\n\n";
    }
}

void editGame(unordered_multiset<Game>& container, const string& title, const Game& newGame) {
    for (const auto& game : container) {
        if (game.title == title) {
            container.erase(game);
            container.insert(newGame);
            cout << "Игра отредактирована...\n\n";
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void searchGame(const map<string, Game>& container, const string& title) {
    auto it = container.find(title);
    if (it != container.end()) {
        it->second.display();
    }
    else {
        cout << "Игра не найдена...\n\n";
    }
}

void searchGame(const set<Game>& container, const string& title) {
    for (const auto& game : container) {
        if (game.title == title) {
            game.display();
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void searchGame(const multimap<string, Game>& container, const string& title) {
    auto range = container.equal_range(title);
    for (auto it = range.first; it != range.second; ++it) {
        it->second.display();
    }
    if (range.first == range.second) {
        cout << "Игра не найдена...\n\n";
    }
}

void searchGame(const multiset<Game>& container, const string& title) {
    for (const auto& game : container) {
        if (game.title == title) {
            game.display();
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void searchGame(const unordered_map<string, Game>& container, const string& title) {
    auto it = container.find(title);
    if (it != container.end()) {
        it->second.display();
    }
    else {
        cout << "Игра не найдена...\n\n";
    }
}

void searchGame(const unordered_set<Game>& container, const string& title) {
    for (const auto& game : container) {
        if (game.title == title) {
            game.display();
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void searchGame(const unordered_multimap<string, Game>& container, const string& title) {
    auto it = container.find(title);
    if (it != container.end()) {
        it->second.display();
    }
    else {
        cout << "Игра не найдена...\n\n";
    }
}

void searchGame(const unordered_multiset<Game>& container, const string& title) {
    for (const auto& game : container) {
        if (game.title == title) {
            game.display();
            return;
        }
    }
    cout << "Игра не найдена...\n\n";
}

void sortGame(map<string, Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    vector<pair<string, Game>> vec(container.begin(), container.end());
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) { return a.second.title < b.second.title; });
    container.clear();
    for (const auto& pair : vec) {
        pair.second.display();
    }
}

void sortGame(multimap<string, Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    vector<pair<string, Game>> vec(container.begin(), container.end());
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) { return a.second.title < b.second.title; });
    for (const auto& pair : vec) {
        pair.second.display();
    }
}

void sortGame(unordered_map<string, Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    vector<pair<string, Game>> vec(container.begin(), container.end());
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) { return a.second.title < b.second.title; });
    container.clear();
    for (const auto& pair : vec) {
        pair.second.display();
    }
}

void sortGame(unordered_multimap<string, Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    vector<pair<string, Game>> vec(container.begin(), container.end());
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) { return a.second.title < b.second.title; });
    container.clear();
    for (const auto& pair : vec) {
        pair.second.display();
    }
}

void displayGame(map<string, Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    cout << endl;
    for (const auto& game : container) {
        game.second.display();
    }
    cout << endl;
}

void displayGame(set<Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    cout << endl;
    for (const auto& game : container) {
        game.display();
    }
    cout << endl;
}

void displayGame(const multimap<string, Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    cout << endl;
    for (const auto& game : container) {
        game.second.display();
    }
    cout << endl;
}

void displayGame(const multiset<Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    cout << endl;
    for (const auto& game : container) {
        game.display();
    }
    cout << endl;
}

void displayGame(unordered_map<string, Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    cout << endl;
    for (const auto& game : container) {
        game.second.display();
    }
    cout << endl;
}

void displayGame(unordered_set<Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    cout << endl;
    for (const auto& game : container) {
        game.display();
    }
    cout << endl;
}

void displayGame(unordered_multimap<string, Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    cout << endl;
    for (const auto& game : container) {
        game.second.display();
    }
    cout << endl;
}

void displayGame(unordered_multiset<Game>& container) {
    if (container.empty()) {
        cout << "Контейнер пуст...\n\n";
        return;
    }
    cout << endl;
    for (const auto& game : container) {
        game.display();
    }
    cout << endl;
}

void saveGameToFile(const map<string, Game>& container, const string& filename) {
    ofstream file(filename);
    for (const auto& game : container) {
        file << game.second.title << "," << game.second.genre << "," << game.second.year << endl;
    }
}

void saveGameToFile(const set<Game>& container, const string& filename) {
    ofstream file(filename);
    for (const auto& game : container) {
        file << game.title << "," << game.genre << "," << game.year << endl;
    }
}

void saveGameToFile(const multimap<string, Game>& container, const string& filename) {
    ofstream file(filename);
    for (const auto& game : container) {
        file << game.second.title << "," << game.second.genre << "," << game.second.year << endl;
    }
}

void saveGameToFile(const multiset<Game>& container, const string& filename) {
    ofstream file(filename);
    for (const auto& game : container) {
        file << game.title << "," << game.genre << "," << game.year << endl;
    }
}

void saveGameToFile(const unordered_map<string, Game>& container, const string& filename) {
    ofstream file(filename);
    for (const auto& game : container) {
        file << game.second.title << "," << game.second.genre << "," << game.second.year << endl;
    }
}

void saveGameToFile(const unordered_set<Game>& container, const string& filename) {
    ofstream file(filename);
    for (const auto& game : container) {
        file << game.title << "," << game.genre << "," << game.year << endl;
    }
}

void saveGameToFile(const unordered_multimap<string, Game>& container, const string& filename) {
    ofstream file(filename);
    for (const auto& game : container) {
        file << game.second.title << "," << game.second.genre << "," << game.second.year << endl;
    }
}

void saveGameToFile(const unordered_multiset<Game>& container, const string& filename) {
    ofstream file(filename);
    for (const auto& game : container) {
        file << game.title << "," << game.genre << "," << game.year << endl;
    }
}