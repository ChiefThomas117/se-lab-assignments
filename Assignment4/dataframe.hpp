#if !defined(DATAFRAME_HPP)
#define DATAFRAME_HPP

#include <array>
#include <iostream>
//objects


class Dataframe
{
public:
    using dataframe_t = std::array<uint8_t, 255>;
    Dataframe(void);
    void setData(const Dataframe::dataframe_t &data, std::uint8_t nData); //structure data, 
    void printData();
    ~Dataframe();
private:
    dataframe_t data;
};




#endif // dataframe.h

