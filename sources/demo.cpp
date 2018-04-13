#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>
int main(int argc, char** argv) {
    std::string text;
    //!
    //!установка переменной окружения
    //!
    std::string log_path = std::getenv("LOG_PATH"); /*!< установка переменной окружения */
    std::cout << log_path << std::endl;
}
