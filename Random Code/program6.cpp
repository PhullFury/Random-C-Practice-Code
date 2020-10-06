#include <iostream>

struct Cylinder
{
    double radius;
    double height;
};

struct Cone
{
    double slant;
    double height;
    double radius;
};

double volume(Cylinder cylinder)
{
    return 3.14 * cylinder.radius * cylinder.radius * cylinder.height;
}

double volume(Cone cone)
{
    return 3.14 * cone.radius * cone.radius * cone.height / 3;
}

double csa(Cone cone)
{
    return 3.14 * cone.radius * cone.slant;
}

double tsa(Cone cone)
{
    return 3.14 * cone.radius * (cone.radius + cone.slant);
}

double volume(int x)
{
    return x * x * x;
}

int main()
{
    Cylinder drum;
    drum.radius = 1;
    drum.height = 1;

    std::cout << "Drum's volume: " << volume(drum) << std::endl;

    int side = 5;

    std::cout << "Cube's volume: " << volume(side) << std::endl;

    Cone tent;
    tent.slant = 5;
    tent.radius = 7;
    tent.height = 10;

    std::cout << "Volume of tent: " << volume(tent) << std::endl << "CSA of tent: " << csa(tent) << std::endl << "TSA of tent: " << tsa(tent);
}