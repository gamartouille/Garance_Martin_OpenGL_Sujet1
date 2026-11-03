#include "aquarium.h"
#include <random>
#include <glm/glm.hpp>
#include "iostream"

Aquarium::Aquarium(int n, glm::vec3 dimensions_aquarium):dimensions_aquarium(dimensions_aquarium){
    this->liste_poissons = std::vector<Poisson>();
    std::random_device rd;  // Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> disx(0.0, dimensions_aquarium.x);
    std::uniform_real_distribution<> disy(0.0, dimensions_aquarium.y);
    std::uniform_real_distribution<> disz(0.0, dimensions_aquarium.z);
    std::uniform_real_distribution<> disv(0.0, 1.0);
    for (int i=0; i<n; i++){
        float x = disx(gen);
        float y = disy(gen);
        float z = disz(gen);
        float vx = disv(gen);
        float vy = disv(gen);
        float vz = disv(gen);

        glm::vec3 position(x,y,z);
        glm::vec3 vitesse(vx,vy,vz);

        liste_poissons.push_back(Poisson(position, glm::normalize(vitesse)));
    }
}
glm::vec3 Aquarium::get_dimensions(){
    return this->dimensions_aquarium;
}
std::vector<Poisson> Aquarium::get_poissons(){
    return this->liste_poissons;
}
void Aquarium::update(){
    for (Poisson &poisson : liste_poissons){
        poisson.deplacement(liste_poissons, dimensions_aquarium);
    }
}
