#include <cstdlib>
#include "stringutils.h"

StringUtils::StringUtils()
{

}

int StringUtils::stringToInt(std::string str)
{
    return atoi(str.c_str());
}
