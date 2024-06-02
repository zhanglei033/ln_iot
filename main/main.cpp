
#include "lnbase.h"
#include "lnutility.h"
#define TAG "app_main"
#if LN_PLATFORM_ESP32
EXTERN_C void app_main(void)
{
}
#else

class abc
{
public:
    std::tuple<int&> deserialize_tuple()
    {
        std::tuple<int&> tuple(a);
        return tuple;
    }

    std::tuple<const int&> serialize_tuple() const
    {
        std::tuple<const int&> tuple(a);
        return tuple;
    }

    int a;
};

using namespace ln;
int main()
{
    using binary_t = serialization_container<std::basic_string<uint8_t>>;
    abc a;
    a.a = 100;
    binary_t bin;
    bin << a.serialize_tuple();
    abc b;
    bin >> b;
    return 0;
}
#endif
