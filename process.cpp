#include "process.h"

process::process()
{
}

process::process(double _address, double _size, int _id)
{
    address = _address;
    size = _size;
    id = _id;
}


void process::setAddress(double _address)
{
    address = _address;
}

void process::setId(int _id)
{
    id = _id;
}

void process::setSize(double _size)
{
    size = _size;
}


double process::getAddress()
{
    return address;
}

int process::getId()
{
    return id;
}


double process::getSize()
{
    return size;
}
