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

double NumberArray::getMin() const {
    if (size <= 0) return 0.0;
    double minVal = data[0];
    for (int i = 1; i < size; i++){
        if (data[i] < minVal) minVal = data[i];
    }
    return minVal;
}

double NumberArrayADT::getMax() const {
    if (size <= 0) return 0.0;
    double maxVal = data[0];
    for(int i = 1; i < size; i++) {
        if (data[i] > maxVal) mazVal = data[i]; 
    }
    return maxVal;
}

double NumberArrayADT::getAverage() const {
    if (size <= 0) return 0.0;
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

void NumberArrayADT::print() const {
    std::cout << "Array: [ ";
    for (int i = 0; i < size; i++){
        std::cout << data[i] << " ";
    }
    std::cout << "]" << std::endl;
}

