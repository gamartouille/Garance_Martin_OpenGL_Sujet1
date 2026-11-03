#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <vector>
#include "poisson.h"

class Aquarium
{
public:
    Aquarium(int n, glm::vec3 dimensions_aquarium);
    glm::vec3 get_dimensions();
    std::vector<Poisson> get_poissons();
    void update();
private:
    glm::vec3 dimensions_aquarium;
    std::vector<Poisson> liste_poissons;

};

#endif // AQUARIUM_H
