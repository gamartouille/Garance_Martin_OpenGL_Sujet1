#include "poisson.h"
#include "glm/ext/vector_common.hpp"
#include "iostream"

Poisson::Poisson(glm::vec3 position, glm::vec3 vitesse):position(position), vitesse(vitesse) {

}

float Poisson::distance(Poisson poisson){
    return glm::length(this->position-poisson.position);
}

void Poisson::bouger(){
    this->position+=this->vitesse;
}

bool Poisson::operator==(Poisson& poisson){
    return (this->distance(poisson)==0);
}

bool Poisson::operator!=(Poisson& poisson){
    return !(poisson==*this);
}

bool Poisson::eviter_mur(glm::vec3 dimensions_aquarium){
    glm::vec3 distance_mur = dimensions_aquarium-this->position;

    bool mur_detecte = false;

    if(distance_mur.x<this->vitesse.x ||this->position.x<-vitesse.x){
        mur_detecte = true;
        this->vitesse.x*=-1;
    }
    if(distance_mur.y<this->vitesse.y ||this->position.y<-vitesse.y){
        mur_detecte = true;
        this->vitesse.y*=-1;
    }
    if(distance_mur.z<this->vitesse.z ||this->position.z<-vitesse.z){
        mur_detecte = true;
        this->vitesse.z*=-1;
    }
    this->vitesse = glm::normalize(this->vitesse);
    return mur_detecte;
}

bool Poisson::eviter_poisson(std::vector<Poisson> poissons, glm::vec3 dimensions_aquarium){
    float dist_min = 2*glm::length(dimensions_aquarium);
    Poisson poisson_le_plus_proche = poissons[0];
    for(Poisson poisson : poissons){
        if(*this!=poisson){
            float d = this->distance(poisson);
            if(d<dist_min){
                dist_min = d;
                poisson_le_plus_proche = poisson;
            }
        }
    }
    bool evitement=dist_min<Poisson::close_range;
    if(evitement){
        glm::vec3 d_pos = this->position-poisson_le_plus_proche.position;
        d_pos = glm::normalize(d_pos);
        d_pos/=4.;
        this->vitesse+=d_pos;
        this->vitesse = glm::normalize(this->vitesse);
    }
    return evitement;
}

void Poisson::aligner(std::vector<Poisson> poissons){
    glm::vec3 dv = this->vitesse;
    int n = 1;
    for (Poisson poisson : poissons){
        if(poisson!=*this){
            float d = this->distance(poisson);
            if(d>Poisson::close_range && d<Poisson::far_range){
                dv+=poisson.vitesse;
                n+=1;
            }
        }
    }
    dv/=n;
    this->vitesse=glm::normalize(dv);
}

void Poisson::deplacement(std::vector<Poisson> poissons, glm::vec3 dimensions_aquarium){
    if(!this->eviter_mur(dimensions_aquarium)){
        if(!this->eviter_poisson(poissons, dimensions_aquarium)){
            this->aligner(poissons);
        }
    }
    this->bouger();
}

std::string Poisson::to_string(){
    std::string s="Position : ";
    s+=std::to_string(position.x)+";"+std::to_string(position.y)+";"+std::to_string(position.z)+"\nVitesse : ";
    s+=std::to_string(vitesse.x)+";"+std::to_string(vitesse.y)+";"+std::to_string(vitesse.z);
    return s;
}

glm::vec3 Poisson::get_position(){
    return this->position;
}

glm::vec3 Poisson::get_vitesse(){
    return this->vitesse;
}
