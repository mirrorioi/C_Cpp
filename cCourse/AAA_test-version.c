#include <stdio.h>

int main()
{
#ifdef __GNUC__
    printf("GCC Version: %d.%d.%d\n", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
#elif defined(__clang__)
    printf("Clang Version: %s\n", __clang_version__);
#elif defined(_MSC_VER)
    printf("MSVC Version: %d\n", _MSC_VER);
#else
    printf("Unknown compiler\n");
#endif
    return 0;
}
