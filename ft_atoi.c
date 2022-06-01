#include "libft.h"

int ft_atoi(const char *nptr)
{
        size_t i;
        int s;
        int c = 1;

        i = 0;
        s = 0;


        while (nptr[i] != '\0')
        {
                if(ft_isalpha(nptr[i]) == 1)
                {
                        return s * c;
                }

                else if (nptr[i] >= '0' && nptr[i] <= '9')
                {
                        s = (s * 10 + (nptr[i] - 48));
                }
                i++;
        }
        return s * c;

}
