#include <iostream>
#include "Cuboid.hh"
#include "Drone.hh"
#include "GnuplotLink.hh"
#include "ObjectFactory.hh"
#include "RegularHex.hh"
#include "UserInterface.hh"
#include "Vector3D.hh"

using namespace std;

int main() {
    /*TODO  -oryginalne wierzcholki
         -rozbic na funkcje w dronie
        -dziedziczenie drona po sceneobj i scene obj po rightprism
        -konstruktor w klasie sceneobj i destruktor wirtual

    */

    /* -------------------------------------------------------------------------- */
    /*                                    TESTY                                   */
    /* -------------------------------------------------------------------------- */
    /*
        std::vector<Vector3D> lol;
        lol.push_back(Insert(1, 2, 3));

        Cuboid cuboid(lol);
        std::cout << cuboid.GetCoords() << std::endl;
    */

    /* --------------------------------- GNUPLOT -------------------------------- */
    PzG::GnuplotLink link;

    /* -------------------------------------------------------------------------- */

    UserInterface ui;
    ui.Init();
    SceneObject::DisplayObjectsNumb();
    Vector3D::DisplayObjectsNumb();
    ObjectFactory::Get()->Display();
}