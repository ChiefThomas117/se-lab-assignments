#include <iostream>
#include <iostream>
#include "dataframe.h"
Dataframe testdata;
int main()
{
    Dataframe::dataframe_t ar1 = {20, 8, 9, 10};
    testdata.setData(&ar1, 4);
    testdata.printData();

    return 0;
}
