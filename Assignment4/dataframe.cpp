#include "dataframe.hpp"

Dataframe::Dataframe(/* args */)
{
 for (auto &&i : data)
 {
     i = 0; //set all data ellements to 0
 }
 
}

void Dataframe::setData(const Dataframe::dataframe_t &sdata, std::uint8_t nData)
{
    Dataframe::dataframe_t pData;

    std::uint8_t checksum = 0;

    pData[0] = 19;
    pData[1] = nData;
    checksum += nData;

    for (size_t i = 2; i < (nData+2); i++)
    {
    pData[i] = sdata[i];
    checksum += sdata[i];
    }

    pData[(2+nData)] = checksum;
    data = pData;
}

void Dataframe::printData()
{
    for (auto &&i : data)
    {
        std::cout << i << std::endl;
    }
    
}
Dataframe::~Dataframe()
{

}
