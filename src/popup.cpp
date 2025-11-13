#include "popup.h"


void Popup::nameArt()
{
    std::cout << "                     __" << "\n";
    std::cout << "                    |  \\" << "\n";
    std::cout << "  ______    _______ | $$ __    __  __    __" << "\n";
    std::cout << " |      \\  /       \\| $$|  \\  |  \\|  \\  /  \\" << "\n";
    std::cout << "  \\$$$$$$\\|  $$$$$$$| $$| $$  | $$ \\$$\\/  $$" << "\n";
    std::cout << " /      $$| $$      | $$| $$  | $$  >$$  $$< " << "\n";
    std::cout << "|  $$$$$$$| $$_____ | $$| $$__/ $$ /  $$$$\\" << "\n";
    std::cout << " \\$$    $$ \\$$     \\| $$ \\$$    $$|  $$ \\$$\\" << "\n";
    std::cout << "  \\$$$$$$$  \\$$$$$$$ \\$$ _\\$$$$$$$ \\$$   \\$$" << "\n";
    std::cout << "                        |  \\__| $$" << "\n";
    std::cout << "                         \\$$    $$" << "\n";
    std::cout << "                          \\$$$$$$" << "\n";
}

void Popup::showLisense()
{
    std::ifstream licenseFile("../LICENSE");
    if (!licenseFile.is_open())
    {
        std::cerr << "Error: Could not open LICENSE file.\n";
    }
    std::cout << "=====================================\n";
    std::cout << "          MIT License Notice          \n";
    std::cout << "=====================================\n\n";
    std::string line;
    while (std::getline(licenseFile, line))
    {
        std::cout << line << '\n';
    }
    licenseFile.close();
    std::cout << "\n=====================================\n";
}
