#include <vector>
#include <iostream>

int	ft_atoi(const char* a)
{
    int	ret;
    int	sign;

    ret = 0;
    sign = 1;
    while ((*a >= 9 && *a <= 13) || *a == 32)
    {
        a++;
    }
    if (*a == '+' || *a == '-')
    {
        if (*a == '-')
            sign = -1;
        a++;
    }
    while (*a >= '0' && *a <= '9')
    {
        ret = ret * 10 + (*a - '0');
        a++;
    }
    return (sign * ret);
}

void print_line(std::vector<int> header)
{
    for (unsigned int i = 0; i < header.size(); i++)
    {
        std::cout << "+";
        std::cout << "-";
        for (unsigned int x = 0; x < 1; x++)
            std::cout << "-";
        std::cout << "-";
    }
    std::cout << "+";
    std::cout << std::endl;
}

void print_line(std::vector<int> header, std::vector<int> max)
{
    for (unsigned int i = 0; i < header.size(); i++)
    {
        std::cout << "+";
        std::cout << "-";
        for (unsigned int x = 0; x < max[i]; x++)
            std::cout << "-";
        std::cout << "-";
    }
    std::cout << "+";
    std::cout << std::endl;
}

void print_words(std::vector<int> header)
{
    char print_value = ' ';
    for (unsigned int i = 0; i < header.size(); i++)
    {
        switch (header[i])
        {
        case 0:
            print_value = ' ';
            break;
        
        case 1:
            print_value = 'X';
            break;
        
        case 2:
            print_value = 'O';

        default:
            break;
        }
        std::cout << "|" << " " << print_value << " ";
    }
    std::cout << "|";
    std::cout << std::endl;
}

void print_words(std::vector<int> header, std::vector<int> max)
{
    for (unsigned int i = 0; i < header.size(); i++)
    {
        std::cout << "|" << " " << header[i];
        for (unsigned int x = 0; x < (max[i] - (2 - 1)); x++)
            std::cout << " ";
    }
    std::cout << "|";
    std::cout << std::endl;
}

void print_tabla(std::vector<std::vector<int>> tabla)
{
    print_line(tabla[0]);
    for (unsigned int y = 0; y < tabla.size(); y++)
    {
        print_words(tabla[y]);
        print_line(tabla[y]);
    }
}