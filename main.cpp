#include <cstdlib>
#include <iostream>

//Marcello Savoldi 57130621

int main(int argc, char* argv[])
{
    double a = 0.0;
    double b = 0.0;
    double x = 0.0;
    double y = 0.0;

// used DOUBLE instead FLOAT to increase the resolution

    std::cout <<"exercise by Marcello Savoldi 57130621\n";
    std::cout << "insert a = ";
    std::cin >> a;
    std::cout << "insert b = ";
    std::cin >> b;
    std::cout << "insert x = ";
    std::cin >> x;
    std::cout << "insert y = ";
    std::cin >> y;


    double z = 0.0;


    if (x < 0.0 && y > 0.0)
    {
        z = a * x - b * y;
    }
    else if (x >= 0.0 && y <= 0.0)
    {
        z = a * x * x - b * y;
    }
    else
    {
        z = a * x - b * y * y;
    }


    std::cout << std::endl << "result z = " << z << std::endl;


    return 0;
}
