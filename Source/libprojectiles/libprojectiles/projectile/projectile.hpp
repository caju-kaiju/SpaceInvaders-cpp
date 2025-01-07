#ifndef LIBPROJECTILE_PROJECTILE_HPP
#define LIBPROJECTILE_PROJECTILE_HPP

struct Actor;

struct Projectile {
    virtual ~Projectile();
    virtual void move() = 0;
    // virtual void hit() = 0;
};

#endif // LIBPROJECTILE_PROJECTILE_HPP


