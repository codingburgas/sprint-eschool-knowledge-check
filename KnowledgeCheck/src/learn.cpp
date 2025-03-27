#include "../lib/learn.h"

void learn()
{
	srand(time(0));
	switch (player_choice)
	{
	case 1: bio_learn();
		break;
	case 2: chem_learn();
		break;
	case 3: physics_learn();
		break;
	case 4: js_html_learn();
		break;
	case 5: german_learn();
		break;
	case 6: lit_learn();
		break;
	case 7: psychology_learn();
		break;
	case 8: history_learn();
		break;
	case 9: geography_learn();
		break;
	case 10: english_learn();
		break;

	}
}

void bio_learn()
{
	std::cout << "Characteristics of Life";
	std::cout << "Made of cells";
	std::cout << "Grow and develop";
	std::cout << "Reproduce";
	std::cout << "Use energy(metabolism)";
	std::cout << "Maintain balance(homeostasis)";
	std::cout << "Respond to stimuli";
	std::cout << "Evolve over time";
	std::cout << "The Cell";
	std::cout << "Prokaryotic : No nucleus(bacteria)";
	std::cout << "Eukaryotic : Has nucleus(plants, animals)";
	std::cout << "Key parts : Nucleus(DNA), mitochondria(energy), membrane(controls entry / exit)";
	std::cout << std::endl;
}
void chem_learn()
{
	system("cls");
	std::cout << "Chemical Symbols : Every element has a unique symbol(e.g., Iron = Fe, Potassium = K).";
	std::cout << "Photosynthesis : The process where plants convert sunlight, water, and carbon dioxide into glucose and oxygen.Equation :";
	std::cout << "6CO2 + 6H2O->C6H1206 + 602";
	std::cout << "Table Salt Formula : The chemical formula for salt is NaCl.";
	std::cout << "Atomic Numbers : Hydrogen is the first element on the periodic table(Atomic number = 1).";
	std::cout << "Water Formula : H₂O is the correct formula for water.";
	std::cout << std::endl;
}
void physics_learn()
{
	system("cls");
	std::cout << "Physics(9th Grade)";
	std::cout << "Newton's Laws of Motion:";
	std::cout << "Law of Inertia – An object in motion stays in motion unless acted upon by an external force.";
	std::cout << "F = ma – Force equals mass times acceleration.";
	std::cout << "Action - Reaction Law – For every action, there is an equal and opposite reaction.";
	std::cout << "Gravity on Earth : The acceleration due to gravity is 9.8 m / s².";
	std::cout << "Energy :";
	std::cout << "Kinetic Energy Formula : KE = ½ mv²(where m = mass, v = velocity).";
	std::cout << "Potential Energy : Stored energy due to an object's position.";
	std::cout << std::endl;
}
void js_html_learn()
{
	std::cout << "JavaScript& HTML(9th Grade)";
	std::cout << "HTML(HyperText Markup Language) : The standard language used to create web pages.";
	std::cout << "Basic HTML Tags :";
	std::cout << "<h1> to <h6> : Headings";
	std::cout << "<p> : Paragraph";
	std::cout << "<a> : Links";
	std::cout << "<img> : Images";
	std::cout << "<script> : Used to insert JavaScript code.";
	std::cout << "JavaScript Basics :";
	std::cout << "alert(Hello, World!); – Displays a message box.";
	std::cout << "document.getElementById(example).innerHTML = Text; – Changes an element's text.";
	std::cout << "Event Handling : onclick, onmouseover, etc.";
	std::cout << std::endl;
}
void german_learn()
{
	std::cout << "German Language(9th Grade)";
	std::cout << "Common Vocabulary :";
	std::cout << "Apple = Apfel";
	std::cout << "Dog = Hund";
	std::cout << "Cat = Katze";
	std::cout << "Greetings :";
	std::cout << "Hello = Hallo";
	std::cout << "Goodbye = Tschüss";
	std::cout << "Thank You = Danke";
	std::cout << "Articles :";
	std::cout << "Der(masculine), Die(feminine), Das(neuter).";
	std::cout << "Numbers :";
	std::cout << "1 = Eins, 2 = Zwei, 3 = Drei, etc.";
	std::cout << std::endl;
}
void lit_learn()
{
	std::cout << "Literature(9th Grade) Basics ";
	std::cout << "Genres : Fiction, Non - fiction, Poetry, Drama.";
	std::cout << "Story Elements : Plot, Characters, Setting, Theme, Conflict.";
	std::cout << "Point of View :";
	std::cout << "1st Person : I (narrator is in the story).";
	std::cout << "3rd Person : He/She/They (narrator is outside).";
	std::cout << "Figurative Language :";
	std::cout << "Metaphor: Life is a journey.";
	std::cout << "Simile : Brave as a lion.";
	std::cout << "Personification : The wind whispered.";
	std::cout << "Famous Authors : Shakespeare(Romeo & Juliet), Harper Lee(To Kill a Mockingbird), Orwell(1984).";
	std::cout << "Poetry Basics : Rhyme, Meter, Haiku(5 - 7 - 5), Sonnet(14 lines).";
	std::cout << std::endl;
}
void psychology_learn()
{
	std::cout << "Psychology(9th Grade)";
	std::cout <<"Father of Psychology : Wilhelm Wundt.";
	std::cout <<"Parts of the Brain :";
	std::cout <<"Prefrontal Cortex – Decision - making.";
	std::cout <<"Hippocampus – Memory storage.";
	std::cout <<"Learning Methods :";
	std::cout <<"Classical Conditioning(Pavlov) – Learning through associations.";
	std::cout <<"Operant Conditioning(Skinner) – Learning through rewards and punishments.";
	std::cout <<"Cognitive Psychology : Studies mental processes like thinking and problem - solving.";
	std::cout <<"Maslow’s Hierarchy of Needs : Self - actualization is the highest level of human motivation.";
	std::cout << std::endl;
}
void history_learn()
{
	system("cls");
	std::cout << "WWI(1914 - 1918)" << std::endl;
	std::cout << "Started: 1914" << std::endl;
	std::cout << "Alliances :" << std::endl;
	std::cout << "Germany + Bulgaria = Central Powers" << std::endl;
	std::cout << "France / Britain = Allies" << std::endl;
	std::cout << "Bulgaria : Joined Central Powers(1915)" << std::endl;
	std::cout << "Treaty of Neuilly(1919)" << std::endl;
	std::cout << "Punished Bulgaria : Lost Thrace to Greece" << std::endl;
	std::cout << "Army : Limited to 20, 000 soldiers" << std::endl;
	std::cout << "WWII(1939 - 1945)" << std::endl;
	std::cout << "Started : 1939" << std::endl;
	std::cout << "Bulgaria : Joined Axis(1941)" << std::endl;
	std::cout << "Key Points" << std::endl;
	std::cout << "Western Front : France / Belgium(trench warfare)" << std::endl;
	std::cout << "Neuilly : After WWI, not WWII" << std::endl;
	std::cout << "Need shorter ? Try bullet points :" << std::endl;
	std::cout << "WWI: 1914, Central Powers, Bulgaria lost" << std::endl;
	std::cout << "WWII : 1939, Axis, Bulgaria switched" << std::endl;
	std::cout << "Neuilly : Cut army, lost land" << std::endl;
}
void geography_learn()
{
	std::cout << "Geography(9th Grade) Basics";
	std::cout << "Continents : Africa, Asia, Europe, North& South America, Australia, Antarctica.";
	std::cout << "Oceans : Pacific, Atlantic, Indian, Southern, Arctic.";
	std::cout << "Latitude : Measures north / south(Equator = 0°).";
	std::cout << "Longitude : Measures east / west(Prime Meridian = 0°).";
	std::cout << "Earth’s Layers : Crust(surface), Mantle(hot rock), Core(metal).";
	std::cout << "Climate Zones :";
	std::cout << "Tropical: Hot(near equator).";
	std::cout << "Temperate : Mild(changing seasons).";
	std::cout << "Polar : Cold(near poles).";
	std::cout << "Landforms : Mountains, plains, deserts, plateaus.";
	std::cout << "Natural Disasters : Earthquakes, volcanoes, tsunamis, hurricanes.";
	std::cout << std::endl;
}
void english_learn()
{
	system("cls");
	std::cout << "Super-Short Grammar Guide:" << std::endl;
	std::cout << "Present Simple : She goes(3rd person - s)" << std::endl;
	std::cout << "Present Continuous : They are playing(plural are)" << std::endl;
	std::cout << "Past Simple : He bought(regular - ed)" << std::endl;
	std::cout << "Past Perfect : Movie had started(past before past)" << std::endl;
	std::cout << "Conditionals : If I were(hypothetical were)" << std::endl;
	std::cout << "Relative Clauses : Who helped(people = who)" << std::endl;
	std::cout << "Gerunds : Despite being(-ing after despite)" << std::endl;
	std::cout << "Formal If : Were we to(inverted conditional)" << std::endl;
	std::cout << "Intensity : So hard that(so + adj + that)" << std::endl;
	std::cout << "Contrast : Notwithstanding(formal despite)" << std::endl;
	std::cout << "Key : Match verbs to subjects / time!" << std::endl;
}
