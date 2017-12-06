#ifndef PROCESS_H
#define PROCESS_H

class process
{
public:
    process();
    process(double _address, double _size, int _id = 0);
    void setId(int _id);
    void setAdd(double _address);
    void setSize(double _size);
    double getSize();
    double getAdd();
    int getId();
private:
    double address;
    double size;
    int id;
};

#endif // PROCESS_H
