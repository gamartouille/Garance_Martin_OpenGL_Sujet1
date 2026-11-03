#ifndef POISSON_H
#define POISSON_H

#include "glm/glm.hpp"
#include <vector>
#include <string>

class Poisson
{
public:
    Poisson(glm::vec3 position, glm::vec3 vitesse);
    float distance(Poisson poisson);
    void bouger();
    bool operator==(Poisson& poisson);
    bool operator!=(Poisson& poisson);
    bool eviter_mur(glm::vec3 dimensions_aquarium);
    bool eviter_poisson(std::vector<Poisson> poissons, glm::vec3 dimensions_aquarium);
    void aligner(std::vector<Poisson> poissons);
    void deplacement(std::vector<Poisson> poissons, glm::vec3 dimensions_aquarium);
    std::string to_string();
    glm::vec3 get_position();
    glm::vec3 get_vitesse();

protected:
    glm::vec3 position;
    glm::vec3 vitesse;
    static inline float close_range = 2.;
    static inline float far_range = 5.;

};

#endif // POISSON_H
