#include <iostream>
#include "Header.hpp"


int main() {
    //Rogue* rogue =  new Rogue();
    Soldier* soldier = new Soldier();
    Soldier* rambo = new Soldier("Rambo", 40, 10);
    Soldier* terminator = new Soldier("Terminator", 40, 10);
    Soldier* chak = new Soldier("Chak", 40, 10);
    //Berserker* berserker = new Berserker();
    //Vampire* vampire = new Vampire();
    //Werewolf* wolf = new Werewolf();
    //Wizard* wizard = new Wizard();
    //Healer* healer = new Healer();
    //Priest* priest = new Priest();
    //Warlock* warlock = new Warlock();
    Necromancer* necromancer = new Necromancer();




    // std::cout << "PRIEST AND VAMPIRE" << std::endl;

    // std::cout << "----------------------------------|" << std::endl;
    // std::cout << *priest << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << "---" << std::endl;

    // // std::cout << "priest magic attack --> vampire" << std::endl;

    // // priest->mag_attack(vampire);

    // // std::cout << "---" << std::endl;
    // // std::cout << *priest << std::endl;
    // // std::cout << *vampire<< std::endl;

    // std::cout << "---" << std::endl;

    // std::cout << "priest attack --> vampire" << std::endl;

    // priest->attack(vampire);

    // std::cout << "---" << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << *priest << std::endl;

    // std::cout << "----------------------------------|" << std::endl;


//     std::cout << "ROGUE AND SOLDIER" << std::endl;

//     std::cout << "----------------------------------|" << std::endl;
//     std::cout << *rogue << std::endl;
//     std::cout << *soldier << std::endl;
//     std::cout << "---" << std::endl;

//     std::cout << "Rogue attack --> Soldier" << std::endl;

//     rogue->attack(soldier);

//     std::cout << "---" << std::endl;
//     std::cout << *rogue << std::endl;
//     std::cout << *soldier << std::endl;

//     std::cout << "---" << std::endl;

//     std::cout << "Soldier attack --> Rogue" << std::endl;

//     soldier->attack(rogue);

//     std::cout << "---" << std::endl;
//     std::cout << *soldier << std::endl;
//     std::cout << *rogue << std::endl;

//     std::cout << "----------------------------------|" << std::endl;




//     std::cout << "BERSERKER AND SOLDIER" << std::endl;

//     std::cout << "----------------------------------|" << std::endl;

//     std::cout << *berserker << std::endl;
//     std::cout << *soldier << std::endl;
//     std::cout << "---" << std::endl;


//     std::cout << "Soldier attack --> Berserker" << std::endl;

//     soldier->attack(berserker);

//     std::cout << "---" << std::endl;
//     std::cout << *berserker << std::endl;
//     std::cout << *soldier << std::endl;

//     std::cout << "---" << std::endl;

//     std::cout << "Berserker attack --> Soldier" << std::endl;

//     berserker->attack(soldier);

//     std::cout << "---" << std::endl;
//     std::cout << *berserker << std::endl;
//     std::cout << *soldier << std::endl;

//     std::cout << "----------------------------------|" << std::endl;

//     std::cout << "Magic damage test:" << std::endl;

// //////////////////////////////////////////////
//     berserker->takeMagDamage(25);

//     std::cout << *berserker << std::endl;

//     std::cout << "----------------------------------|" << std::endl;

// ////////////////////////////////////////////



    // std::cout << "VAMPIRE AND Soldier" << std::endl;

    // std::cout << "----------------------------------|" << std::endl;

    // std::cout << *vampire << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << "---" << std::endl;


    // std::cout << "soldier attack --> Vampire" << std::endl;

    // soldier->attack(vampire);

    // std::cout << "---" << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << *soldier << std::endl;

    // std::cout << "---" << std::endl;

    // std::cout << "Vampire attack --> soldier" << std::endl;

    // vampire->attack(soldier);

    // std::cout << "---" << std::endl;
    // std::cout << *vampire << std::endl;
    // std::cout << *soldier << std::endl;

    // std::cout << "----------------------------------|" << std::endl;

    // std::cout << "Wizard AND SOLDIER" << std::endl;

    // std::cout << "----------------------------------|" << std::endl;

    // std::cout << *soldier << std::endl;
    // std::cout << *wizard << std::endl;

    // std::cout << "---" << std::endl;

    // std::cout << "wizard attack --> Soldier" << std::endl;

    // wizard->mag_attack(soldier);

    // std::cout << "---" << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << *wizard << std::endl;

    // std::cout << "---" << std::endl;

    // std::cout << "Soldier attack --> Wizard" << std::endl;

    // soldier->attack(wizard);

    // wizard->manna(10);

    // std::cout << "---" << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << *wizard << std::endl;


    // std::cout << "----------------------------------|" << std::endl;

    // std::cout << "HEALER AND SOLDIER" << std::endl;

    // std::cout << "----------------------------------|" << std::endl;

    // std::cout << *soldier << std::endl;
    // std::cout << *healer << std::endl;

    // std::cout << "---" << std::endl;

    // std::cout << "healer attack --> Soldier" << std::endl;

    // healer->mag_attack(soldier);

    // std::cout << "---" << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << *healer << std::endl;

    // std::cout << "---" << std::endl;

    // std::cout << "soldier attack --> healer" << std::endl;

    // soldier->attack(healer);

    // std::cout << "---" << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << *healer << std::endl;

    // std::cout << "---" << std::endl;
    // std::cout << "healer addHp, and giveHeal --> soldier" << std::endl;

    // healer->heal(15);
    // healer->giveHeal(soldier, 10);

    // std::cout << "---" << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << *healer << std::endl;


    // std::cout << "----------------------------------|" << std::endl;

    // std::cout << "WOLF AND SOLDIER" << std::endl;

    // std::cout << "----------------------------------|" << std::endl;

    // std::cout << *soldier << std::endl;
    // std::cout << *wolf << std::endl;

    // std::cout << "---" << std::endl;

    // std::cout << "wolf attack --> Soldier" << std::endl;

    // wolf->attack(soldier);

    // std::cout << "---" << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << *wolf << std::endl;

    // std::cout << "---" << std::endl;

    // std::cout << "wolf transfom ---> Super Wolf" << std::endl;

    // wolf->transform();

    // std::cout << "---" << std::endl;

    // std::cout << *soldier << std::endl;
    // std::cout << *wolf << std::endl;
    // std::cout << "---" << std::endl;

    // std::cout << "Super Wolf attack --> Soldier" << std::endl;

    // wolf->attack(soldier);

    // std::cout << "---" << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << *wolf << std::endl;
    // std::cout << "---" << std::endl;

    //     std::cout << "----------------------------------|" << std::endl;

    //     std::cout << "WARLOCK AND SOLDIER" << std::endl;

    // std::cout << "----------------------------------|" << std::endl;
    // std::cout << *warlock << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << "---" << std::endl;

    // std::cout << "Warlock attack --> Soldier" << std::endl;

    // warlock->attack(soldier);

    // std::cout << "---" << std::endl;
    // std::cout << *warlock << std::endl;
    // std::cout << *soldier << std::endl;

    //  std::cout << "---" << std::endl;

    // std::cout << "Warlock  summom --> Demon" << std::endl;

    // Demon* demon = warlock->summonDemon();
    // std::cout << *demon << std::endl;

    // std::cout << "---" << std::endl;

    // std::cout << "Demon attack --> Soldier" << std::endl;

    // demon->attack(soldier);

    // std::cout << "---" << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << *demon << std::endl;

    // std::cout << "----------------------------------|" << std::endl;



        std::cout << "----------------------------------|" << std::endl;

        std::cout << "NECROMANCER AND SOLDIER" << std::endl;

    std::cout << "----------------------------------|" << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << *soldier << std::endl;
    std::cout << "---" << std::endl;

    std::cout << "Necromancer attack --> Soldier" << std::endl;

    necromancer->attack(soldier);

    std::cout << "---" << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << *soldier << std::endl;

    std::cout << "----------------------------------|" << std::endl;

    std::cout << "Necromancer attack --> Rambo" << std::endl;

    std::cout << "---" << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << *rambo << std::endl;


    necromancer->attack(rambo);

    std::cout << "---" << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << *rambo << std::endl;

    std::cout << "----------------------------------|" << std::endl;

    std::cout << "Necromancer attack --> Terminator" << std::endl;

    std::cout << "---" << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << *terminator << std::endl;

    necromancer->mag_attack(terminator);

    std::cout << "---" << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << *terminator << std::endl;

    std::cout << "----------------------------------|" << std::endl;

    std::cout << "Necromancer double attack --> Chak" << std::endl;

    std::cout << "---" << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << *chak << std::endl;

    necromancer->attack(chak);

    std::cout << "---" << std::endl;
    std::cout << *necromancer << std::endl;
    std::cout << *chak << std::endl;

    std::cout << "---" << std::endl;

    necromancer->attack(chak);

    std::cout << "---" << std::endl;
    std::cout << *chak << std::endl;
    std::cout << *necromancer << std::endl;

    std::cout << "----------------------------------|" << std::endl;


    //delete(rogue);
    delete(soldier);
    delete(rambo);
    delete(terminator);
    delete(chak);
    //delete(berserker);
    //delete(vampire);
    //delete(wolf);
    //delete(wizard);
    //delete(healer);
    //delete(priest);
    //delete(warlock);
    delete(necromancer);



    return 0;
}
