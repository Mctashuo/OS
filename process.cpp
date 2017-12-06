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


void process::getAddress()
{
    return address;
}

void process::getId()
{
    return id;
}


void process::getSize()
{
    return size;
}
