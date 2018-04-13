#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>
//!
//!установка переменной окружения
//!
int main(int argc, char** argv) {
    std::string text;

    std::string log_path = std::getenv("LOG_PATH"); /*!< установка переменной окружения */
    std::cout << log_path << std::endl;
}
