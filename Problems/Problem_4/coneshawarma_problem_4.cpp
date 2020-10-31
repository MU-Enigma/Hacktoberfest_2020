#include <iostream>

int main()
{
    int r;

    std::cout << "Enter number of rows:";
    std::cin >> r;

    for(int i = 1; i <= r; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
