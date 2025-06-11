#include <stdio.h>
#include "libft.h"   // libft fonksiyon prototipleri burada

int main(void)
{
    char str[] = "Arda Bey";
    size_t len = ft_strlen(str);
    
    printf("Girdiğiniz string: %s\n", str);
    printf("String uzunluğu: %s\n", str);
    
    return 0;
}
