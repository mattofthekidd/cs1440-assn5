#include <iostream>
#include "UserInterface.h"
#include "Farm.h"
#include "FarmAnimal.h"
#include "Chicken.h"
#include "Cow.h"
#include "Pig.h"
#include "Sheep.h"



int main() {

    UserInterface userInterface;
    userInterface.run();

    /*
    Farm myFarm;

    myFarm.addAnimal(new Chicken("Plymouth Rock,2014/4,F"));
    myFarm.addAnimal(new Chicken("Longhorn,2015/3,T"));
    myFarm.addAnimal(new Chicken("Longhorn,2015/4,F"));
    myFarm.addAnimal(new Chicken("Plymouth Rock,2016/3,F"));
    myFarm.addAnimal(new Chicken("Plymouth Rock,2016/3"));    // Bad Chicken
    myFarm.addAnimal(new Chicken("Plymouth Rock,2016,3"));    // Bad Chicken
    myFarm.addAnimal(new Chicken("Plymouth Rock,2016"));      // Bad Chicken
    myFarm.addAnimal(new Chicken("Plymouth Rock"));           // Bad Chicken
    myFarm.addAnimal(new Chicken(""));

    myFarm.addAnimal(new Cow(""));
    myFarm.addAnimal(new Cow("Spotted"));
    myFarm.addAnimal(new Cow("Holstein,2014/2,T"));
    myFarm.addAnimal(new Cow("Angus,2015/4,F"));
    myFarm.addAnimal(new Cow("Angus,2015/4"));                // Bad cow

    myFarm.addAnimal(new Pig("Berkshire,2014/2"));
    myFarm.addAnimal(new Pig("Hampshire,2015/4"));
    myFarm.addAnimal(new Pig("Poland China,2013/3"));
    myFarm.addAnimal(new Pig("Poland China,2013,3"));         // Bad pig

    myFarm.addAnimal(new Sheep("Merino,2014/2,2016/8"));
    myFarm.addAnimal(new Sheep("Suffolk,2015/4,2016/7"));
    myFarm.addAnimal(new Sheep("Texel,2013/10,2016/9"));
    myFarm.addAnimal(new Sheep("Texel,2013/10"));             // Bad sheep
    myFarm.addAnimal(new Sheep("Texel,2013"));                // Bad sheep
    myFarm.addAnimal(new Sheep("Texel"));                     // Bad sheep
    myFarm.addAnimal(new Sheep(""));                          // Bad sheep

    myFarm.print(std::cout);
     */
}