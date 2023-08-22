#include <iostream>
#include <vector>
#include "utils.hpp"

void gen_tabla(std::vector<std::vector<int>> &tabla, int height, int width, int mines)
{
    for (int i = 0; i < height; i++)
    {   
        std::vector<int> row;
        for (int i = 0; i < width; i++)
        {
            row.push_back(0);
        }
        tabla.push_back(row);
    }
}

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        std::cout << "\x1B[91mError: no se han proporcionado argumentos suficientes\033[0m\t\t" << std::endl;
        return -1;
    }
    std::vector<std::vector<int>> tabla;
    gen_tabla(tabla, ft_atoi(argv[1]), ft_atoi(argv[2]), ft_atoi(argv[3]));
    print_tabla(tabla);
    return 0;
    
}