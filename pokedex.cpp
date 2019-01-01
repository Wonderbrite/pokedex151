#include <iostream>
#include <locale>
#include <limits>
#include <sstream>

int main() {

  int number;
  bool Quit = false;
  char Answer;

    while (!Quit) {
  std::cout << "\n" << "Enter the POKéMON's ### (1-151): "; //Get Pokemon ID
  if  (std::cin >> number)
            {

  switch(number) { //Pokedex Entry

    case 1 :
      std::cout << "\n" << "Bulbasaur\n" << "A strange seed was planted on its back at birth. The plant sprouts and grows with this POKéMON.\n" << "Type(s): Grass & Poison\n" << "\n";
      break;
    case 2 :
      std::cout << "\n" << "Ivysaur\n" << "When the bulb on its back grows large, it appears to lose the ability to stand on its hind legs.\n" << "Type(s): Grass & Poison\n" << "\n";
      break;
    case 3 :
      std::cout << "\n" << "Venusaur\n" << "The plant blooms when it is absorbing solar energy. It stays on the move to seek sunlight.\n" << "Type(s): Grass & Poison\n" << "\n";
      break;
    case 4 :
      std::cout << "\n" << "Charmander\n" << "Obviously prefers hot places. When it rains, steam is said to spout from the tip of its tail.\n" << "Type(s): Fire\n" << "\n";
      break;
    case 5 :
      std::cout << "\n" << "Charmeleon\n" << "When it swings its burning tail, it elevates the temperature to unbearably high levels.\n" << "Type(s): Fire\n" << "\n";
      break;
    case 6 :
      std::cout << "\n" << "Charizard\n" << "Spits fire that is hot enough to melt boulders. Known to cause forest fires unintentionally.\n" << "Type(s): Fire & Flying\n" << "\n";
      break;
    case 7 :
      std::cout << "\n" << "Squirtle\n" << "After birth, its back swells and hardens into a shell. Powerfully sprays foam from its mouth.\n" << "Type(s): Water\n" << "\n";
      break;
    case 8 :
      std::cout << "\n" << "Wartortle\n" << "Often hides in water to stalk unwary prey. For swimming fast, it moves its ears to maintain balance.\n" << "Type(s): Water\n" << "\n";
      break;
    case 9 :
      std::cout << "\n" << "Blastoise\n" << "A brutal POKéMON with pressurized water jets on its shell. They are used for high speed tackles.\n" << "Type(s): Water\n" << "\n";
      break;
    case 10 :
      std::cout << "\n" << "Caterpie\n" << "Its short feet are tipped with suction pads that enable it to tirelessly climb slopes and walls.\n" << "Type(s): Bug\n" << "\n";
      break;
    case 11 :
      std::cout << "\n" << "Metapod\n" << "This POKéMON is vulnerable to attack while its shell is soft, exposing its weak and tender body.\n" << "Type(s): Bug\n" << "\n";
      break;
    case 12 :
      std::cout << "\n" << "Butterfree\n" << "In battle, it flaps its wings at high speed to release highly toxic dust into the air.\n" << "Type(s): Bug & Flying\n" << "\n";
      break;
    case 13 :
      std::cout << "\n" << "Weedle\n" << "Often found in forests, eating leaves. It has a sharp venomous stinger on its head.\n" << "Type(s): Bug & Poison\n" << "\n";
      break;
    case 14 :
      std::cout << "\n" << "Kakuna\n" << "Almost incapable of moving, this POKéMON can only harden its shell to protect itself from predators.\n" << "Type(s): Bug & Poison\n" << "\n";
      break;
    case 15 :
      std::cout << "\n" << "Beedrill\n" << "Flies at high speed and attacks using its large venomous stingers on its forelegs and tail.\n" << "Type(s): Bug & Poison\n" << "\n";
      break;
    case 16 :
      std::cout << "\n" << "Pidgey\n" << "A common sight in forests and woods. It flaps its wings at ground level to kick up blinding sand.\n" << "Type(s): Normal & Flying\n" << "\n";
      break;
    case 17 :
      std::cout << "\n" << "Pidgeotto\n" << "Very protective of its sprawling territorial area, this POKéMON will fiercely peck at any intruder.\n" << "Type(s): Normal & Flying\n" << "\n";
      break;
    case 18 :
      std::cout << "\n" << "Pidgeot\n" << "When hunting, it skims the surface of water at high speed to pick off unwary prey such as MAGIKARP.\n" << "Type(s): Normal & Flying\n" << "\n";
      break;
    case 19 :
      std::cout << "\n" << "Rattata\n" << "Bites anything when it attacks. Small and very quick, it is a common sight in many places.\n" << "Type(s): Normal\n" << "\n";
      break;
    case 20 :
      std::cout << "\n" << "Raticate\n" << "It uses its whiskers to maintain its balance. It apparently slows down if they are cut off.\n" << "Type(s): Normal\n" << "\n";
      break;
    case 21 :
      std::cout << "\n" << "Spearow\n" << "Eats bugs in grassy areas. It has to flap its short wings at high speed to stay airborne.\n" << "Type(s): Normal & Flying\n" << "\n";
      break;
    case 22 :
      std::cout << "\n" << "Fearow\n" << "With its huge and magnificent winThe larger its petals, the more toxic pollen it contains. Its big head is heavy and hard to hold up.gs, it can keep aloft without ever having to land for rest.\n" << "Type(s): Normal & Flying\n" << "\n";
      break;
    case 23 :
      std::cout << "\n" << "Ekans\n" << "Moves silently and stealthily. Eats the eggs of birds, such as PIDGEY and SPEAROW, whole.\n" << "Type(s): Poison\n" << "\n";
      break;
    case 24 :
      std::cout << "\n" << "Arbok\n" << "It is rumored that the ferocious warning markings on its belly differ from area to area.\n" << "Type(s): Poison\n" << "\n";
      break;
    case 25 :
      std::cout << "\n" << "Pikachu\n" << "When several of these POKéMON gather, their electricity could build and cause lightning storms.\n" << "Type(s): Electric\n" << "\n";
      break;
    case 26 :
      std::cout << "\n" << "Raichu\n" << "Its long tail serves as a ground to protect itself from its own high voltage power.\n" << "Type(s): Electric\n" << "\n";
      break;
    case 27 :
      std::cout << "\n" << "Sandshrew\n" << "Burrows deep underground in arid locations far from water. It only emerges to hunt for food.\n" << "Type(s): Ground\n" << "\n";
      break;
    case 28 :
      std::cout << "\n" << "Sandslash\n" << "Curls up into a spiny ball when threatened. It can roll while curled up to attack or escape.\n" << "Type(s): Ground\n" << "\n";
      break;
    case 29 :
      std::cout << "\n" << "Nidoran♀\n" << "Although small, its venomous barbs render this POKéMON dangerous. The female has smaller horns.\n" << "Type(s): Poison\n" << "\n";
      break;
    case 30 :
      std::cout << "\n" << "Nidorina\n" << "e 	The female's horn develops slowly. Prefers physical attacks such as clawing and biting.\n" << "Type(s): Poison\n" << "\n";
      break;
    case 31 :
      std::cout << "\n" << "Nidoqueen\n" << "Its hard scales provide strong protection. It uses its hefty bulk to execute powerful moves.\n" << "Type(s): Poison & Ground\n" << "\n";
      break;
    case 32 :
      std::cout << "\n" << "Nidoran♂\n" << "Stiffens its ears to sense danger. The larger its horns, the more powerful its secreted venom.\n" << "Type(s): Poison\n" << "\n";
      break;
    case 33 :
      std::cout << "\n" << "Nidorino\n" << "An aggressive POKéMON that is quick to attack. The horn on its head secretes a powerful venom.\n" << "Type(s): Poison\n" << "\n";
      break;
    case 34 :
      std::cout << "\n" << "Nidoking\n" << "It uses its powerful tail in battle to smash, constrict, then break the prey's bones.\n" << "Type(s): Poison & Ground\n" << "\n";
      break;
    case 35 :
      std::cout << "\n" << "Clefairy\n" << "Its magical and cute appeal has many admirers. It is rare and found only in certain areas.\n" << "Type(s): Normal\n" << "\n";
      break;
    case 36 :
      std::cout << "\n" << "Clefable\n" << "A timid fairy POKéMON that is rarely seen. It will run and hide the moment it senses people.\n" << "Type(s): Normal\n" << "\n";
      break;
    case 37 :
      std::cout << "\n" << "Vulpix\n" << "At the time of birth, it has just one tail. The tail splits from its tip as it grows older.\n" << "Type(s): Fire\n" << "\n";
      break;
    case 38 :
      std::cout << "\n" << "Ninetales\n" << "Very smart and very vengeful. Grabbing one of its many tails could result in a 1000-year curse.\n" << "Type(s): Fire\n" << "\n";
      break;
    case 39 :
      std::cout << "\n" << "Jigglypuff\n" << "When its huge eyes light up, it sings a mysteriously soothing melody that lulls its enemies to sleep.\n" << "Type(s): Normal\n" << "\n";
      break;
    case 40 :
      std::cout << "\n" << "Wigglytuff\n" << "The body is soft and rubbery. When angered, it will suck in air and inflate itself to an enormous size.\n" << "Type(s): Normal\n" << "\n";
      break;
    case 41 :
      std::cout << "\n" << "Zubat\n" << "Forms colonies in perpetually dark places. Uses ultrasonic waves to identify and approach targets.\n" << "Type(s): Poison & Flying\n" << "\n";
      break;
    case 42 :
      std::cout << "\n" << "Golbat\n" << "Once it strikes, it will not stop draining energy from the victim even if it gets too heavy to fly.\n" << "Type(s): Poison & Flying\n" << "\n";
      break;
    case 43 :
      std::cout << "\n" << "Oddish\n" << "During the day, it keeps its face buried in the ground. At night, it wanders around sowing its seeds.\n" << "Type(s): Grass & Poison\n" << "\n";
      break;
    case 44 :
      std::cout << "\n" << "Gloom\n" << "The fluid that oozes from its mouth isn't drool. It is a nectar that is used to attract prey.\n" << "Type(s): Grass & Poison\n" << "\n";
      break;
    case 45 :
      std::cout << "\n" << "Vileplume\n" << "The larger its petals, the more toxic pollen it contains. Its big head is heavy and hard to hold up.\n" << "Type(s): Grass & Poison\n" << "\n";
      break;
    case 46 :
      std::cout << "\n" << "Paras\n" << "Burrows to suck tree roots. The mushrooms on its back grow by drawing nutrients from the bug host.\n" << "Type(s): Bug & Grass\n" << "\n";
      break;
    case 47 :
      std::cout << "\n" << "Parasect\n" << "A host-parasite pair in which the parasite mushroom has taken over the host bug. Prefers damp places.\n" << "Type(s): Bug & Grass\n" << "\n";
      break;
    case 48 :
      std::cout << "\n" << "Venonat\n" << "Lives in the shadows of tall trees where it eats insects. It is attracted by light at night.\n" << "Type(s): Bug & Poison\n" << "\n";
      break;
    case 49 :
      std::cout << "\n" << "Venomoth\n" << "The dust-like scales covering its wings are color coded to indicate the kinds of poison it has.\n" << "Type(s): Bug & Poison\n" << "\n";
      break;
    case 50 :
      std::cout << "\n" << "Diglett\n" << "Lives about one yard underground where it feeds on plant roots. It sometimes appears above ground.\n" << "Type(s): Ground\n" << "\n";
      break;
    case 51 :
      std::cout << "\n" << "Dugtrio\n" << "A team of DIGLETT triplets. It triggers huge earthquakes by burrowing 60 miles underground.\n" << "Type(s): Ground\n" << "\n";
      break;
    case 52 :
      std::cout << "\n" << "Meowth\n" << "Adores circular objects. Wanders the streets on a nightly basis to look for dropped loose change.\n" << "Type(s): Normal\n" << "\n";
      break;
    case 53 :
      std::cout << "\n" << "Persian\n" << "Although its fur has many admirers, it is tough to raise as a pet because of its fickle meanness.\n" << "Type(s): Normal\n" << "\n";
      break;
    case 54 :
      std::cout << "\n" << "Psyduck\n" << "While lulling its enemies with its vacant look, this wily POKéMON will use psychokinetic powers.\n" << "Type(s): Water\n" << "\n";
      break;
    case 55 :
      std::cout << "\n" << "Golduck\n" << "Often seen swimming elegantly by lake shores. It is often mistaken for the Japanese monster, Kappa.\n" << "Type(s): Water\n" << "\n";
      break;
    case 56 :
      std::cout << "\n" << "Mankey\n" << "Extremely quick to anger. It could be docile one moment then thrashing away the next instant.\n" << "Type(s): Fighting\n" << "\n";
      break;
    case 57 :
      std::cout << "\n" << "Primeape\n" << "Always furious and tenacious to boot. It will not abandon chasing its quarry until it is caught.\n" << "Type(s): Fighting\n" << "\n";
      break;
    case 58 :
      std::cout << "\n" << "Growlithe\n" << "Very protective of its territory. It will bark and bite to repel intruders from its space.\n" << "Type(s): Fire\n" << "\n";
      break;
    case 59 :
      std::cout << "\n" << "Arcanine\n" << "A POKéMON that has been admired since the past for its beauty. It runs agilely as if on wings.\n" << "Type(s): Fire\n" << "\n";
      break;
    case 60 :
      std::cout << "\n" << "Poliwag\n" << "Its newly grown legs prevent it from running. It appears to prefer swimming than trying to stand.\n" << "Type(s): Water\n" << "\n";
      break;
    case 61 :
      std::cout << "\n" << "Poliwhirl\n" << "Capable of living in or out of water. When out of water, it sweats to keep its body slimy.\n" << "Type(s): Water\n" << "\n";
      break;
    case 62 :
      std::cout << "\n" << "Poliwrath\n" << "An adept swimmer at both the front crawl and breast stroke. Easily overtakes the best human swimmers.\n" << "Type(s): Water & Fighting\n" << "\n";
      break;
    case 63 :
      std::cout << "\n" << "Abra\n" << "Using its ability to read minds, it will identify impending danger and TELEPORT to safety.\n" << "Type(s): Psychic\n" << "\n";
        break;
    case 64 :
      std::cout << "\n" << "Kadabra\n" << "It emits special alpha waves from its body that induce headaches just by being close by.\n" << "Type(s): Psychic\n" << "\n";
      break;
    case 65 :
      std::cout << "\n" << "Alakazam\n" << "Its brain can outperform a supercomputer. Its intelligence quotient is said to be 5,000.\n" << "Type(s): Psychic\n" << "\n";
      break;
    case 66 :
      std::cout << "\n" << "Machop\n" << "Loves to build its muscles. It trains in all styles of martial arts to become even stronger.\n" << "Type(s): Fighting\n" << "\n";
      break;
    case 67 :
      std::cout << "\n" << "Machoke\n" << "Its muscular body is so powerful, it must wear a power save belt to be able to regulate its motions.\n" << "Type(s): Fighting\n" << "\n";
      break;
    case 68 :
      std::cout << "\n" << "Machamp\n" << "Using its heavy muscles, it throws powerful punches that can send the victim clear over the horizon.\n" << "Type(s): Fighting\n" << "\n";
      break;
    case 69 :
      std::cout << "\n" << "Bellsprout\n" << "A carnivorous POKéMON that traps and eats bugs. It uses its root feet to soak up needed moisture.\n" << "Type(s): Grass & Poison\n" << "\n";
      break;
    case 70 :
      std::cout << "\n" << "Weepinbell\n" << "It spits out POISONPOWDER to immobilize the enemy and then finishes it with a spray of ACID.\n" << "Type(s): Grass & Poison\n" << "\n";
      break;
    case 71 :
      std::cout << "\n" << "Victreebel\n" << "Said to live in huge colonies deep in jungles, although no one has ever returned from there.\n" << "Type(s): Grass & Poison\n" << "\n";
      break;
    case 72 :
      std::cout << "\n" << "Tentacool\n" << "Drifts in shallow seas. Anglers who hook them by accident are often punished by its stinging acid.\n" << "Type(s): Water & Poison\n" << "\n";
      break;
    case 73 :
      std::cout << "\n" << "Tentacruel\n" << "The tentacles are normally kept short. On hunts, they are extended to ensnare and immobilize prey.\n" << "Type(s): Water & Poison\n" << "\n";
      break;
    case 74 :
      std::cout << "\n" << "Geodude\n" << "Found in fields and mountains. Mistaking them for boulders, people often step or trip on them.\n" << "Type(s): Rock & Ground\n" << "\n";
      break;
    case 75 :
      std::cout << "\n" << "Graveler\n" << "Rolls down slopes to move. It rolls over any obstacle without slowing or changing its direction.\n" << "Type(s): Rock & Ground\n" << "\n";
      break;
    case 76 :
      std::cout << "\n" << "Golem\n" << "Its boulder-like body is extremely hard. It can easily withstand dynamite blasts without damage.\n" << "Type(s): \n" << "Rock & Ground\n";
      break;
    case 77 :
      std::cout << "\n" << "Ponyta\n" << "Its hooves are 10 times harder than diamonds. It can trample anything completely flat in little time.\n" << "Type(s): Fire\n" << "\n";
      break;
    case 78 :
      std::cout << "\n" << "Rapidash\n" << "Very competitive, this POKéMON will chase anything that moves fast in the hopes of racing it.\n" << "Type(s): Fire\n" << "\n";
      break;
    case 79 :
    std::cout << "\n" << "Slowpoke\n" << "Incredibly slow and dopey. It takes 5 seconds for it to feel pain when under attack.\n" << "Type(s): Water & Psychic\n" << "\n";
      break;
    case 80 :
    std::cout << "\n" << "Slowbro\n" << "The SHELLDER that is latched onto SLOWPOKE's tail is said to feed on the host's left over scraps.\n" << "Type(s): Water & Psychic\n" << "\n";
      break;
    case 81 :
      std::cout << "\n" << "Magnemite\n" << "Uses anti-gravity to stay suspended. Appears without warning and uses THUNDER WAVE and similar moves.\n" << "Type(s): Electric & Steel\n" << "\n";
      break;
    case 82 :
      std::cout << "\n" << "Magneton\n" << "Formed by several MAGNEMITEs linked together. They frequently appear when sunspots flare up.\n" << "Type(s): Electric & Steel\n" << "\n";
      break;
    case 83 :
      std::cout << "\n" << "Farfetch'd\n" << "The sprig of green onions it holds is its weapon. It is used much like a metal sword.\n" << "Type(s): Normal & Flying\n" << "\n";
      break;
    case 84 :
      std::cout << "\n" << "Doduo\n" << "A bird that makes up for its poor flying with its fast foot speed. Leaves giant footprints.\n" << "Type(s): Normal & Flying\n" << "\n";
    break;
    case 85 :
      std::cout << "\n" << "Dodrio\n" << "Uses its three brains to execute complex plans. While two heads sleep, one head stays awake.\n" << "Type(s): Normal & Flying\n" << "\n";
      break;
    case 86 :
        std::cout << "\n" << "Seel\n" << "The protruding horn on its head is very hard. It is used for bashing through thick ice.\n" << "Type(s): Water\n" << "\n";
      break;
    case 87 :
      std::cout << "\n" << "Dewgong\n" << "Stores thermal energy in its body. Swims at a steady 8 knots even in intensely cold waters.\n" << "Type(s): Water & Ice\n" << "\n";
      break;
    case 88 :
      std::cout << "\n" << "Grimer\n" << "Appears in filthy areas. Thrives by sucking up polluted sludge that is pumped out of factories.\n" << "Type(s): Poison\n" << "\n";
      break;
    case 89 :
      std::cout << "\n" << "Muk\n" << "Thickly covered with a filthy, vile sludge. It is so toxic, even its footprints contain poison.\n" << "Type(s): Poison\n" << "\n";
      break;
    case 90 :
      std::cout << "\n" << "Shellder\n" << "Its hard shell repels any kind of attack. It is vulnerable only when its shell is open.\n" << "Type(s): Water\n" << "\n";
      break;
    case 91 :
      std::cout << "\n" << "Cloyster\n" << "When attacked, it launches its horns in quick volleys. Its innards have never been seen.\n" << "Type(s): Water & Ice\n" << "\n";
      break;
    case 92 :
      std::cout << "\n" << "Gastly\n" << "Almost invisible, this gaseous POKéMON cloaks the target and puts it to sleep without notice.\n" << "Type(s): Ghost & Poison\n" << "\n";
      break;
    case 93 :
      std::cout << "\n" << "Haunter\n" << "Because of its ability to slip through block walls, it is said to be from another dimension.\n" << "Type(s): Ghost & Poison\n" << "\n";
      break;
    case 94 :
      std::cout << "\n" << "Gengar\n" << "Under a full moon, this POKéMON likes to mimic the shadows of people and laugh at their fright.\n" << "Type(s): Ghost & Poison\n" << "\n";
      break;
    case 95 :
      std::cout << "\n" << "Onix\n" << "As it grows, the stone portions of its body harden to become similar to a diamond, but colored black.\n" << "Type(s): Rock & Ground\n" << "\n";
      break;
    case 96 :
      std::cout << "\n" << "Drowzee\n" << "Puts enemies to sleep then eats their dreams. Occasionally gets sick from eating bad dreams.\n" << "Type(s): Psychic\n" << "\n";
      break;
    case 97 :
      std::cout << "\n" << "Hypno\n" << "When it locks eyes with an enemy, it will use a mix of PSI moves such as HYPNOSIS and CONFUSION.\n" << "Type(s): Psychic\n" << "\n";
      break;
    case 98 :
      std::cout << "\n" << "Krabby\n" << "Its pincers are not only powerful weapons, they are used for balance when walking sideways.\n" << "Type(s): Water\n" << "\n";
      break;
    case 99 :
      std::cout << "\n" << "Kingler\n" << "The large pincer has 10000 hp of crushing power. However, its huge size makes it unwieldy to use.\n" << "Type(s): Water\n" << "\n";
      break;
    case 100 :
      std::cout << "\n" << "Voltorb\n" << "Usually found in power plants. Easily mistaken for a POKé BALL, they have zapped many people.\n" << "Type(s): Electric\n" << "\n";
      break;
    case 101 :
        std::cout << "\n" << "Electrode\n" << "It stores electric energy under very high pressure. It often explodes with little or no provocation.\n" << "Type(s): Electric\n" << "\n";
      break;
    case 102 :
      std::cout << "\n" << "Exeggcute\n" << "Often mistaken for eggs. When disturbed, they quickly gather and attack in swarms.\n" << "Type(s): Grass & Psychic\n" << "\n";
      break;
    case 103 :
      std::cout << "\n" << "Exeggutor\n" << "Legend has it that on rare occasions, one of its heads will drop off and continue on as an EXEGGCUTE.\n" << "Type(s): Grass & Psychic\n" << "\n";
      break;
    case 104 :
      std::cout << "\n" << "Cubone\n" << "Because it never removes its skull helmet, no one has ever seen this POKéMON's real face.\n" << "Type(s): Ground\n" << "\n";
      break;
    case 105 :
      std::cout << "\n" << "Marowak\n" << "The bone it holds is its key weapon. It throws the bone skillfully like a boomerang to KO targets.\n" << "Type(s): Ground\n" << "\n";
      break;
    case 106 :
      std::cout << "\n" << "Hitmonlee\n" << "When in a hurry, its legs lengthen progressively. It runs smoothly with extra long, loping strides.\n" << "Type(s): Fighting\n" << "\n";
      break;
    case 107 :
      std::cout << "\n" << "Hitmonchan\n" << "While apparently doing nothing, it fires punches in lightning fast volleys that are impossible to see.\n" << "Type(s): Fighting\n" << "\n";
      break;
    case 108 :
      std::cout << "\n" << "Lickitung\n" << "Its tongue can be extended like a chameleon's. It leaves a tingling sensation when it licks enemies.\n" << "Type(s): Normal\n" << "\n";
      break;
    case 109 :
      std::cout << "\n" << "Koffing\n" << "Because it stores several kinds of toxic gases in its body, it is prone to exploding without warning.\n" << "Type(s): Poison\n" << "\n";
      break;
    case 110 :
      std::cout << "\n" << "Weezing\n" << "Where two kinds of poison gases meet, 2 KOFFINGs can fuse into a WEEZING over many years.\n" << "Type(s): Poison\n" << "\n";
      break;
    case 111 :
      std::cout << "\n" << "Rhyhorn\n" << "Its massive bones are 1000 times harder than human bones. It can easily knock a trailer flying.\n" << "Type(s): Ground & Rock\n" << "\n";
      break;
    case 112 :
      std::cout << "\n" << "Rhydon\n" << "Protected by an armor-like hide, it is capable of living in molten lava of 3,600 degrees.\n" << "Type(s): Ground & Rock\n" << "\n";
      break;
    case 113 :
        std::cout << "\n" << "Chansey\n" << "A rare and elusive POKéMON that is said to bring happiness to those who manage to get it.\n" << "Type(s): Normal\n" << "\n";
        break;
    case 114 :
        std::cout << "\n" << "Tangela\n" << "The whole body is swathed with wide vines that are similar to seaweed. Its vines shake as it walks.\n" << "Type(s): Grass\n" << "\n";
        break;
    case 115 :
        std::cout << "\n" << "Kangaskhan\n" << "The infant rarely ventures out of its mother's protective pouch until it is 3 years old.\n" << "Type(s): Normal\n" << "\n";
        break;
    case 116 :
        std::cout << "\n" << "Horsea\n" << "Known to shoot down flying bugs with precision blasts of ink from the surface of the water.\n" << "Type(s): Water\n" << "\n";
        break;
    case 117 :
        std::cout << "\n" << "Seadra\n" << "Capable of swimming backwards by rapidly flapping its wing-like pectoral fins and stout tail.\n" << "Type(s): Water\n" << "\n";
        break;
    case 118 :
        std::cout << "\n" << "Goldeen\n" << "Its tail fin billows like an elegant ballroom dress, giving it the nickname of the Water Queen.\n" << "Type(s): Water\n" << "\n";
        break;
    case 119 :
        std::cout << "\n" << "Seaking\n" << "In the autumn spawning season, they can be seen swimming powerfully up rivers and creeks.\n" << "Type(s): Water\n" << "\n";
        break;
    case 120 :
        std::cout << "\n" << "Staryu\n" << "An enigmatic POKéMON that can effortlessly regenerate any appendage it loses in battle.\n" << "Type(s): Water\n" << "\n";
        break;
    case 121 :
        std::cout << "\n" << "Starmie\n" << "Its central core glows with the seven colors of the rainbow. Some people value the core as a gem.\n" << "Type(s): Water & Psychic\n" << "\n";
        break;
    case 122 :
        std::cout << "\n" << "Mr. Mime\n" << "If interrupted while it is miming, it will slap around the offender with its broad hands.\n" << "Type(s): Psychic\n" << "\n";
        break;
    case 123 :
        std::cout << "\n" << "Scyther\n" << "With ninja-like agility and speed, it can create the illusion that there is more than one.\n" << "Type(s): Bug & Flying\n" << "\n";
        break;
    case 124 :
        std::cout << "\n" << "Jynx\n" << "It seductively wiggles its hips as it walks. It can cause people to dance in unison with it.\n" << "Type(s): Ice & Psychic\n" << "\n";
        break;
    case 125 :
        std::cout << "\n" << "Electabuzz\n" << "Normally found near power plants, they can wander away and cause major blackouts in cities.\n" << "Type(s): Electric\n" << "\n";
        break;
    case 126 :
        std::cout << "\n" << "Magmar\n" << "Its body always burns with an orange glow that enables it to hide perfectly among flames.\n" << "Type(s): Fire\n" << "\n";
        break;
    case 127 :
        std::cout << "\n" << "Pinsir\n" << "If it fails to crush the victim in its pincers, it will swing it around and toss it hard.\n" << "Type(s): Bug\n" << "\n";
        break;
    case 128 :
        std::cout << "\n" << "Tauros\n" << "When it targets an enemy, it charges furiously while whipping its body with its long tails.\n" << "Type(s): Normal\n" << "\n";
        break;
    case 129 :
        std::cout << "\n" << "Magikarp\n" << "In the distant past, it was somewhat stronger than the horribly weak descendants that exist today.\n" << "Type(s): Water\n" << "\n";
        break;
    case 130 :
        std::cout << "\n" << "Gyarados\n" << "Rarely seen in the wild. Huge and vicious, it is capable of destroying entire cities in a rage.\n" << "Type(s): Water & Flying\n" << "\n";
        break;
    case 131 :
        std::cout << "\n" << "Lapras\n" << "A POKéMON that has been overhunted almost to extinction. It can ferry people across the water.\n" << "Type(s): Water & Ice\n" << "\n";
        break;
    case 132 :
        std::cout << "\n" << "Ditto\n" << "Capable of copying an enemy's genetic code to instantly transform itself into a duplicate of the enemy.\n" << "Type(s): Normal\n" << "\n";
        break;
    case 133 :
        std::cout << "\n" << "Eevee\n" << "Its genetic code is irregular. It may mutate if it is exposed to radiation from element STONEs.\n" << "Type(s): Normal\n" << "\n";
        break;
    case 134 :
        std::cout << "\n" << "Vaporeon\n" << "Lives close to water. Its long tail is ridged with a fin which is often mistaken for a mermaid's.\n" << "Type(s): Water\n" << "\n";
        break;
    case 135 :
        std::cout << "\n" << "Jolteon\n" << "It accumulates negative ions in the atmosphere to blast out 10000-volt lightning bolts.\n" << "Type(s): Electric\n" << "\n";
        break;
    case 136 :
        std::cout << "\n" << "Flareon\n" << "When storing thermal energy in its body, its temperature could soar to over 1600 degrees.\n" << "Type(s): Fire\n" << "\n";
        break;
    case 137 :
        std::cout << "\n" << "Porygon\n" << "A POKéMON that consists entirely of programming code. Capable of moving freely in cyberspace.\n" << "Type(s): Normal\n" << "\n";
        break;
    case 138 :
        std::cout << "\n" << "Omanyte\n" << "Although long extinct, in rare cases, it can be genetically resurrected from fossils.\n" << "Type(s): Rock & Water\n" << "\n";
        break;
    case 139 :
        std::cout << "\n" << "Omastar\n" << "A prehistoric POKéMON that died out when its heavy shell made it impossible to catch prey.\n" << "Type(s): Rock & Water\n" << "\n";
        break;
    case 140 :
        std::cout << "\n" << "Kabuto\n" << "A POKéMON that was resurrected from a fossil found in what was once the ocean floor eons ago.\n" << "Type(s): Rock & Water\n" << "\n";
        break;
    case 141 :
      std::cout << "\n" << "Kabutops\n" << "Its sleek shape is perfect for swimming. It slashes prey with its claws and drains the body fluids.\n" << "Type(s): Rock & Water\n" << "\n";
      break;
    case 142 :
      std::cout << "\n" << "Aerodactyl\n" << "A ferocious, prehistoric POKéMON that goes for the enemy's throat with its serrated saw-like fangs.\n" << "Type(s): Rock & Flying\n" << "\n";
      break;
    case 143 :
      std::cout << "\n" << "Snorlax\n" << "Very lazy. Just eats and sleeps. As its rotund bulk builds, it becomes steadily more slothful.\n" << "Type(s): Normal\n" << "\n";
      break;
    case 144 :
      std::cout << "\n" << "Articuno\n" << "A legendary bird POKéMON that is said to appear to doomed people who are lost in icy mountains.\n" << "Type(s): Ice & Flying\n" << "\n";
      break;
    case 145 :
      std::cout << "\n" << "Zapdos\n" << "A legendary bird POKéMON that is said to appear from clouds while dropping enormous lightning bolts.\n" << "Type(s): Electric & Flying\n" << "\n";
      break;
    case 146 :
      std::cout << "\n" << "Moltres\n" << "Known as the legendary bird of fire. Every flap of its wings creates a dazzling flash of flames.\n" << "Type(s): Fire & Flying\n" << "\n";
      break;
    case 147 :
      std::cout << "\n" << "Dratini\n" << "Long considered a mythical POKéMON until recently when a small colony was found living underwater.\n" << "Type(s): Dragon\n" << "\n";
      break;
    case 148 :
      std::cout << "\n" << "Dragonair\n" << "A mystical POKéMON that exudes a gentle aura. Has the ability to change climate conditions.\n" << "Type(s): Dragon\n" << "\n";
      break;
    case 149 :
      std::cout << "\n" << "Dragonite\n" << "An extremely rarely seen marine POKéMON. Its intelligence is said to match that of humans.\n" << "Type(s): Dragon & Flying\n" << "\n";
      break;
    case 150 :
      std::cout << "\n" << "Mewtwo\n" << "It was created by a scientist after years of horrific gene splicing and DNA engineering experiments.\n" << "Type(s): Psychic\n" << "\n";
      break;
    case 151 :
      std::cout << "\n" << "Mew\n" << "So rare that it is still said to be a mirage by many experts. Only a few people have seen it worldwide.\n" << "Type(s): Psychic\n" << "\n";
      break;
    default :
      std::cout << "\n" << "You have selected a POKéMON number that is outside the scope of this program.\n" << "Please enter a number between 1 and 151.\n" << "\n";
      break;
    }

    std::cout << "Would you like to search again? (y/n) "; //Prompts user to search again
       std::cin >> Answer;

       Answer = std::toupper(Answer);
       if (Answer == 'N') {
         std::cout << "\n";
            Quit = true;
          }
  }
        else
          {
        // Failed to read an integer, input is probably something else

        // Clear the failbit
        std::cin.clear();

        // Explicitly ignore the rest of the line
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "\n" << "You have entered a non-number. Try again? (y/n) ";// Output error message
        std::cin >> Answer;

        Answer = std::toupper(Answer);
        if (Answer == 'N') {
          std::cout << "\n";
             Quit = true;
          }
        }
  }
}
