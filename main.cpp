#include <iostream>
#include <string>
#include "keeper.h"
#include "percussion.h"
#include "string.h"
#include "brass.h"

using namespace std;

void showMenu()
{
    std::cout << "\nMenu:\n"
                 "1. Add musical instrument\n"
                 "2. Remove musical instrument\n"
                 "3. Print musical instruments\n"
                 "4. Save to File\n"
                 "5. Restore from File\n"
                 "6. Exit\n";
}

int main()
{
    Keeper keeper;
    while (true)
    {
        showMenu();
        int choice;
        cout << "\nEnter your choice:\n";
        cin >> choice;
        try {
            switch (choice) {
                case 1: {
                    int instrument;
                    cout << "\nEnter instrument type\n"
                            "1. Percussion 2. String 3. Brass:\n";
                    cin >> instrument;
                    switch (instrument) {
                        case 1: {
                            string type;
                            string name;
                            string owner;
                            double cost;
                            int count;
                            Percussion *perc;
                            cout << "Enter percussion type:\n";
                            cin >> type;
                            cout << "Enter percussion name:\n";
                            cin >> name;
                            cout << "Enter percussion owner:\n";
                            cin >> owner;
                            cout << "Enter percussion cost:\n";
                            cin >> cost;
                            cout << "Enter percussion count:\n";
                            cin >> count;
                            perc = new Percussion(type, name, owner, cost, count);
                            keeper.add(perc);
                            break;
                        }
                        case 2: {
                            string name;
                            string owner;
                            double cost;
                            int count;
                            string maker;
                            string text;
                            String *str;
                            cout << "Enter string name:\n";
                            cin >> name;
                            cout << "Enter string owner:\n";
                            cin >> owner;
                            cout << "Enter string cost:\n";
                            cin >> cost;
                            cout << "Enter string count:\n";
                            cin >> count;
                            cout << "Enter string maker:\n";
                            cin >> maker;
                            cout << "Enter string text description:\n";
                            cin >> text;
                            str = new String(name, owner, cost, count, maker, text);
                            keeper.add(str);
                            break;
                        }
                        case 3: {
                            string name;
                            string owner;
                            double cost;
                            int count;
                            string maker;
                            string defects;
                            Brass *brass;
                            cout << "Enter brass name:\n";
                            cin >> name;
                            cout << "Enter brass owner:\n";
                            cin >> owner;
                            cout << "Enter brass cost:\n";
                            cin >> cost;
                            cout << "Enter brass count:\n";
                            cin >> count;
                            cout << "Enter brass maker:\n";
                            cin >> maker;
                            cout << "Enter brass defects:\n";
                            cin >> defects;
                            brass = new Brass(name, owner, cost, count, maker, defects);
                            keeper.add(brass);
                            break;
                        }
                        default: {
                            cout << "Invalid type\n";
                            break;
                        }
                    }
                    break;
                }
                case 2: {
                    int index;
                    cout << "Enter instrument index:\n";
                    cin >> index;
                    keeper.remove(index);
                    break;
                }
                case 3: {
                    keeper.print();
                    break;
                }
                case 4: {
                    keeper.save("output.txt");
                    break;
                }
                case 5: {
                    keeper.load("input.txt");
                    break;
                }
                case 6: {
                    cout << "Goodbye!\n";
                    return 0;
                }
                default: {
                    cout << "Invalid choice\n";
                    break;
                }
            }
        }
        catch (Exception error)
        {
            cout << error;
        }
    }
}
