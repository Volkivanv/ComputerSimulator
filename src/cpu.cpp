//
// Created by Ivan on 15.11.2021.
//
#include "../include/cpu.h"

void compute(){
    int sum = 0;
    for(int i = 0; i < 8; i++){
        sum += buffer[i];
    }
    std::cout << sum << std::endl;
}
