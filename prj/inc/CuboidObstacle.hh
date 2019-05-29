#pragma once
#include "Cuboid.hh"
#include "CuboidObstacleContour.hh"
#include "Drone.hh"
#include "Obstacle.hh"

// NOTE unused
#define MAX_PROXIMITY 1  // maksymalna odleglosc na jaka moze zblizyc sie obiekt do

/**
 * @brief Definicuje pojecie przeszkody bedacej prostopadloscianem
 *
 */
class CuboidObstacle : public Obstacle, public Cuboid {
   private:
    mutable CuboidObstacleContour contour;  // kontur przeszkody(2 skrajne wektory)

   protected:
   public:
    CuboidObstacle() : Obstacle() {}
    ~CuboidObstacle() {}

    bool WriteWertexToFile() override;
    bool IsCollisionDetected(std::shared_ptr<Drone> drone) const override;
};
