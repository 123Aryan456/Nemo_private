#include <iostream>
#include <string>
#include <unordered_map>

// Class definition for ChillBot
class ChillBot {
public:
    ChillBot() {
        responses = {
            {"hello", "Hey there, dude! How can I help you catch some good vibes today?"},
            {"how are you?", "I'm just code surfing through zeros and ones, bro. How about you?"},
            {"bye", "Later, bro! Keep riding those digital waves!"},
        };
    }

    std::string get_response(const std::string& message) {
        if (responses.find(message) != responses.end()) {
            return responses[message];
        } else {
            return "Woah, dude. I didn't catch that. Try something else, maybe?";
        }
    }

private:
    std::unordered_map<std::string, std::string> responses;
};

int main() {
    ChillBot bot;
    std::string user_message;
    std::cout << "Welcome to ChillBot! Type 'bye' to exit." << std::endl;

    while (true) {
        // Get input from the user
        std::cout << "You: ";
        std::getline(std::cin, user_message);

        // Check for exit condition
        if (user_message == "bye") {
            std::cout << "ChillBot: " << bot.get_response(user_message) << std::endl;
            break;
        }

        // Get and print the response from ChillBot
        std::string response = bot.get_response(user_message);
        std::cout << "ChillBot: " << response << std::endl;
    }

    return 0;
}
