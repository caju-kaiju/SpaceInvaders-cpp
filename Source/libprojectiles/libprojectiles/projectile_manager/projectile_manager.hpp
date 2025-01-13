#include "projectile/projectile.hpp"
#include <memory>
#include <vector>

struct Projectile;

struct ProjectileManager {
    std::vector<std::unique_ptr<Projectile>> projectiles;
    void add_projectile(Projectile* projectile);
    void tic();
    // void cleanup();

    void render();
};
