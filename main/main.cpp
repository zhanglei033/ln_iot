
#include "lnbase.h"
#include "lnutility.h"
#define TAG "app_main"
#if LN_PLATFORM_ESP32
EXTERN_C void app_main(void)
{
}
#else

int main()
{
    return 0;
}
#endif
