#ifndef NUMBER_ARRAY_ADT_H
#define NUMBER_ARRAY_ADT_H

class NumberArrayADT {
private:
    int size;
    double* data;

public:
    static const int MAX_SIZE = 10;

    NumberArrayADT( int requestedSize = MAX_SIZE);
    ~NumberArrayADT();

    void setNumber(int index, double value);
    double getNumber(int index) const;

    double getMin() const;
    double getMax() const;
    double getAverage() const;
    void print() const;

};

/*
    CLASS INVARIANT:
    - size > 0
    - data points to a valid dynamic array of doubles of length size.
    - Valid indices range from 0 to size -1.

*/

#endif