#include <memory>
#include <libprojectiles/projectile/projectile.hpp>
#include <libprojectiles/projectile_manager/projectile_manager.hpp>

void ProjectileManager::add_projectile(Projectile* projectile) {
    this->projectiles.push_back(std::unique_ptr<Projectile>(projectile));
}

void ProjectileManager::tic() {
    for (const std::unique_ptr<Projectile>& p : this->projectiles) {
        if (p) p->move();
    }
}

void ProjectileManager::render() {
    for (const std::unique_ptr<Projectile>& p : this->projectiles) {
        if (p) p->render();
    }
}
