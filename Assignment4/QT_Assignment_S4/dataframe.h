#ifndef DATAFRAME_H
#define DATAFRAME_H


#include <array>
#include <iostream>
#include <string>
#include <cassert>
#include <utility>
#include <type_traits>
#include <stdlib.h>
//objects


class Dataframe
{
public:
    using dataframe_t = std::array<uint8_t, 255>;
    Dataframe(void);
    void setData(const Dataframe::dataframe_t *sData, std::uint8_t nData); //structure data,
    void printData();
    ~Dataframe();
private:
    dataframe_t data;
    uint8_t checksum;
    const uint8_t head = 19;

    void setZero(dataframe_t *s);
    void setHeader(dataframe_t *s, const uint8_t nBytes);
    void setChecksum(dataframe_t *s, const uint8_t nBytes);
};

#endif // DATAFRAME_H
