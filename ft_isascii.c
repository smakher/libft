int ft_isascii(int i)
{
    if(i < 0 || i > 127)
        return 0;
    return 1;
}