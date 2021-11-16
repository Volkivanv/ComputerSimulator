#include "../include/ram.h"
#include "../include/cpu.h"
#include "../include/disk.h"
#include "../include/gpu.h"
#include "../include/kbd.h"
#include <iostream>
#include <string>

int main() {
    std::string request;
    std::cout << "Input your request: sum, save, load, input, display, exit!" << std::endl;
    std::cin >> request;
    while (request!="exit") {
        if (request == "sum") {
            compute();
        } else if (request == "save") {
            save();
        } else if (request == "load") {
            load();
        } else if (request == "input") {
            write();
        } else if (request == "display") {
            read();
        }
        std::cout << "Input your request: sum, save, load, input, display, exit!" << std::endl;
        std::cin >> request;
    }
    return 0;
}
