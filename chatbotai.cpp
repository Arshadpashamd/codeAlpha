#include <iostream>
#include <string>
#include <algorithm>
std::string toLowerCase(const std::string& str) {
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}
bool contains(const std::string& str, const std::string& keyword) {
    return toLowerCase(str).find(toLowerCase(keyword)) != std::string::npos;
}
int main() {
    std::string userInput;
    std::cout << "Hello! I am a simple chatbot. How can I help you today?" << std::endl;
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, userInput);
        if (contains(userInput, "exit") || contains(userInput, "bye")) {
            std::cout << "Goodbye! Have a nice day!" << std::endl;
            break;
        }
        if (contains(userInput, "hello") || contains(userInput, "hi")) {
            std::cout << "Hello! How can I assist you today?" << std::endl;
        } else if (contains(userInput, "how are you")) {
            std::cout << "I'm just a program, so I don't have feelings, but thanks for asking!" << std::endl;
        } else if (contains(userInput, "your name")) {
            std::cout << "I am a simple chatbot created in C++." << std::endl;
        } else {
            std::cout << "I'm sorry, I don't understand that. Can you please rephrase?" << std::endl;
        }
    }
    return 0;
}

