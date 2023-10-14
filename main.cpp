#include <iostream>

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
    // Keeper keeper;
    while (true)
    {
        showMenu();
        int choice;
        std::cout << "\nEnter your choice:\n";
        std::cin >> choice;
        switch (choice)
        {
            case 1:
                int type;
                std::cout << "\nEnter instrument type\n"
                             "1. Percussion 2. String 3. Brass:\n";
                std::cin >> type;
                switch (type)
                {
                    case 1:
                        //Percussion* perc = new Percussion();
                        //keeper.add(perc);
                        break;
                    case 2:
                        //String* str = new String();
                        //keeper.add(str);
                        break;
                    case 3:
                        //Brass* brass = new Brass();
                        //keeper.add(brass);
                        break;
                    default:
                        std::cout << "Invalid type\n";
                }
                break;
            case 2:
                //keeper.remove();
                break;
            case 3:
                //keeper.print();
                break;
            case 4:
                //keeper.save();
                break;
            case 5:
                //keeper.load("file.txt");
                break;
            case 6:
                std::cout << "Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid choice\n";
        }
    }
}
