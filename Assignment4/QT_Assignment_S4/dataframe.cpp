#include "dataframe.h"

Dataframe::Dataframe(/* args */)
{
    setZero(&data);

}

void Dataframe::setData(const Dataframe::dataframe_t *sData, std::uint8_t nData)
{
    data[0] = head;
    data[1] = nData;

    for(int i = 2; i < nData+2; i++)
    {
        data[i] = sData[(i+2)];
    }

}

void Dataframe::printData()
{
    for(uint8_t i = 0; i < 255; i++)
    {
        std::cout << std::atoi((const char*)&data[i]) << ' ';
    }
    std::cout << std::endl;
}

void Dataframe::setZero(dataframe_t *s)
{
    dataframe_t t;
    for(uint8_t i = 0; i < (t.size()); i++)
    {
     t[i] = 0;
    }
    *s = t;
}


Dataframe::~Dataframe()
{

}
