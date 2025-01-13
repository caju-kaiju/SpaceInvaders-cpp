#ifndef LIBPROJECTILE_PROJECTILE_HPP
#define LIBPROJECTILE_PROJECTILE_HPP

#include <librenderable/renderable.hpp>

struct Actor;

struct Projectile : Renderable {
    virtual void move() = 0;
    // virtual void hit() = 0;

    virtual void render() = 0;
};

#endif // LIBPROJECTILE_PROJECTILE_HPP


