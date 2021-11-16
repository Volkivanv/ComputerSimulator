//
// Created by Ivan on 15.11.2021.
//
#include "../include/disk.h"

void load(){
    std::ifstream buf;
    buf.open("data.txt");
    if(buf) {
        int i = 0;
        while (!buf.eof()) {
            buf >> buffer[i];
            i++;
        }

    } else {
        std::cerr << "File is not found!" <<std::endl;
    }
    buf.close();
}
void save(){
    std::ofstream buf("data.txt");
    if(buf) {
        int i = 0;
        while (i < 8) {
            buf << buffer[i]<<std::endl;
            i++;
        }

    } else {
        std::cerr << "File is not found!" <<std::endl;
    }
    buf.close();

};