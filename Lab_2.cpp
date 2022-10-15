

#include <iostream>
#include <math.h>

int main()
{
        const double e = 2.1828;
        int vvod;
        double z, x, f, y=0, a, b;
        std::cout << "Vvedite z:\n";

        while(!(std::cin >> z) || (std::cin.peek() != '\n'))
        {
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "Error!" << std::endl;
        }

        if (z < -1)
        {
            x = -z / 3;
        }
        else
        {
            x = abs(z);
        }

        std::cout << "Vvedite a:\n";

        while (!(std::cin >> a) || (std::cin.peek() != '\n'))
        {
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "Error!" << std::endl;
        }

        std::cout << "Vvedite b:\n";

        while (!(std::cin >> b) || (std::cin.peek() != '\n'))
        {
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "Error!" << std::endl;
        }

        x = z > (-1) ? (-z) / 3 : abs(z);
        std::cout << "\n";
        std::cout << "Vvedite 1 esli nado 2x, 2 esli nado x*x, 3 esli nado x/3\n";
        std::cin >> vvod;

        while (vvod < 1 || vvod>3)
        {
            std::cout << "Vvedite 1 esli nado 2x, 2 esli nado x*x, 3 esli nado x/3\n";
            std::cin >> vvod;
        }

        switch (vvod)
        {
        case 1:
            f = 2 * x;
            break;
        case 2:
            f = x * x;
            break;
        case 3:
                if (x == 0) {
                    std::cout << "Error!!! Vyhod za predely znacheniy";
                    break;
                }
            f = x / 3;
            break;
        }

        if (x < (-(5 / 2)))
        {
            std::cout<< "Error!!! Vyhod za predely znacheniy\n";
            return 0;
        }
        else
        {
            y = a * f - log(x + 2.5) + b * (pow(e, x) - pow(e, (-x)));
        }
        std::cout << y;
}

