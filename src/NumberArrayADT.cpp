#include "NumberArrayADT.h"
#include <iostream>

NumberArrayADT::NumberArrayADT(int requestedSize) {
    size = (requestedSize > 0) ? requestedSize : MAX_SIZE;
    data = new double[size];
    for (int i = 0; i < size; i++){
        data[i] = 0.0
    
    }
}

NumberArrayADT::~NumberArrayadt(){
    delete[] data;
    data = nullptr;
    std::cout << "Destructor: Memory released." << std::endl;

}

void NumberArrayADT::setNumber(int index, double value){
    if (index >= 0 && index < size){
        data[index] = value;
    } else {
        std;;cout << "error: Index"
<< index << "out of bounds." << std::endl;
  }
}

double NumberArrayADT::getNumber(int index) const {
    if (index >= 0 && index < size) {
        return data[index];
    }
    std::cout << "Error: Index" << index << " out of bounds. returning 0.0" << std::endl;
    return 0.0;
}

