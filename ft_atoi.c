int ft_atoi(const char *str){
    int i = 0;
    int s = 1;
    int r = 0;
    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while(str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            s = s * -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        r *= 10;
        r = (str[i] - '0') + r;
        i++;
    }
    return (r * s);
}
#include <stdlib.h>
#include <stdio.h>
int main(){
    const char *arr = "         -0214742121212183650";
    printf("thieres : %d\nmine : %d\n", atoi(arr), ft_atoi(arr));
}