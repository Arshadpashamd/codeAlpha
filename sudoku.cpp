#include <iostream>
#include <string>
#include <algorithm>

void toLowerCase(std::string &input) {
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);
}

std::string getResponse(const std::string &input) {
    if (input.find("hello") != std::string::npos) {
        return "Hi there! How can I help you today?";
    } else if (input.find("how are you") != std::string::npos) {
        return "I'm just a program, but I'm doing great! How about you?";
    } else if (input.find("bye") != std::string::npos) {
        return "Goodbye! Have a nice day!";
    } else {
        return "Sorry, I don't understand that.";
    }
}

int main() {
    std::string userInput;
    std::cout << "Chatbot: Hi! I'm a simple chatbot. Type 'bye' to exit." << std::endl;
    while (true) {
        std::cout << "You: ";
        std::getline(std::cin, userInput);
        toLowerCase(userInput);
        std::string response = getResponse(userInput);
        std::cout << "Chatbot: " << response << std::endl;
        if (userInput.find("bye") != std::string::npos) {
            break;
        }
    }
    return 0;
}
