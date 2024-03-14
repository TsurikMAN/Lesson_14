

#include <iostream>
#include <string>



int main()
{
    std::cout << "Write any text and press ENTER"<<std::endl;

    std::string text;

    std::getline(std::cin , text);


    std::cout << "Your text: "<< text << std::endl;
    std::cout << "Length of your text counts '" << size(text) << "' char's" << std::endl;
    std::cout << "First Char of your text is '" << text[0]<<"'" <<std::endl;

    std::cout <<"Last Char of your text is '" << text[size(text) - 1]<<"'"<<std::endl;

    return 0;
    
}

