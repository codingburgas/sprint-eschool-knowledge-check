#include "../lib/test_work.h"
void bio_quest(int num)
{
	switch (num)
	{
	case 0: question("Which gland controls the activity of other endocrine glands is connected to the nervous system?",
		"thyroid gland", "pancreas", "adrenal glands", "pituitary gland", 'd');
		break;
	case 1: question("Which disease is caused by hypofunction of the pancreas?",
		"gigantism", "Graves' disease", "diabetes mellitus", "cretinism", 'c');
		break;
	case 2: question("Which hormone increases blood pressure and accelerates blood pressure activity ? ",
		"insulin", "testosterone", "adrenaline", "growth hormone", 'c');
		break;
	case 3: question("The hormonal regulation of processes in the human body",
		"is carried out by the endocrine glands", "is faster than neural regulation", "diabetes mellitusis shorter-lived than neural regulation",
		"cretinism", 'c');
		break;
	case 4: question("Which sequence of parts of the sensory systems directly defines the function of each department?",
		"1. conductive part; 2. an analysing part; 3. perceptual",
		"1. perceiving part; 2. conductive part; 3. Analytic",
		"1. perceiving part; 2. an analysing part; 3. Wired",
		"1. analysing part; 2. conductive part; 3. perceptual",
		'b');
		break;
	case 5: question("Where the location of the receptor is correctly indicated",
		"cones and rods - inner ear", "pain receptors - skin and internal organs",
		"organ of Corti - joints and muscles", "vestibular apparatus - middle ear", 'b');
		break;
	case 6: question("Which of the structures is NOT part of the auditory analyzer?",
		"ear canal", "auditory receptors", "auditory nerve", "auditory area in the cerebral cortex", 'a');
		break;
	case 7: question("Chemoreceptors are:",
		"receptors in muscles and joints", "taste receptors", "the receptors for touch", "visual receptors", 'b');
		break;
	case 8: question("Conditioned reflexes are: 1)Permanent 2)Temporary 3)Individual 4)Species - specific 5)Acquired 6)Congenital",
		"1 and 3;", "2, 4 and 5;", "2, 3 and 5;", "2, 3 and 6", 'c');
		break;

	}
	mark();
}

void chem_quest(int num)
{
	switch (num)
	{
	case 0: question("What is the chemical symbol for Iron?",
		"Ir", "Fe", "In", "Fi", 'b');
		break;
	case 1: question("Which equation represents photosynthesis?",
		"H?O + CO? ? C?H??O? + O?", "C?H??O? + O? ? CO? + H?O",
		"2H? + O? ? 2H?O", "Na + Cl ? NaCl", 'a');
		break;
	case 2: question("What is the formula for table salt?",
		"NaCl", "Na?Cl", "NaCl?", "Na?Cl?", 'a');
		break;
	case 3: question("Which element has the atomic number 1?",
		"Helium", "Oxygen", "Hydrogen", "Carbon", 'c');
		break;
	case 4: question("What is the correct formula for water?",
		"HO", "H?O", "H?O?", "HO?", 'b');
		break;
	case 5: question("Which of these is the symbol for Potassium?",
		"Pt", "P", "Po", "K", 'd');
		break;
	case 6: question("What does 'O' stand for in the periodic table?",
		"Gold", "Osmium", "Oxygen", "Oganesson", 'c');
		break;
	case 7: question("Which equation represents neutralization?",
		"NaOH + HCl ? NaCl + H?O", "2H? + O? ? 2H?O",
		"CaCO? ? CaO + CO?", "Fe + S ? FeS", 'a');
		break;
	case 8: question("What is the chemical formula for methane?",
		"CH?", "C?H?", "CO?", "C?H??O?", 'a');
		break;
	case 9: question("Which element has the symbol 'Ag'?",
		"Gold", "Silver", "Argon", "Aluminum", 'b');
		break;
	}

	mark();
}

void physics_quest(int num)
{
	switch (num)
	{
	case 0: question("What is the unit of force?",
		"Joule", "Newton", "Watt", "Pascal", 'b');
		break;
	case 1: question("What is the acceleration due to gravity on Earth?",
		"9.8 m/s?", "10 m/s?", "8.9 m/s?", "12 m/s?", 'a');
		break;
	case 2: question("Which of the following is a vector quantity?",
		"Speed", "Distance", "Displacement", "Mass", 'c');
		break;
	case 3: question("What is Newton's First Law also known as?",
		"Law of Acceleration", "Law of Inertia", "Law of Action-Reaction", "Law of Gravity", 'b');
		break;
	case 4: question("What is the formula for kinetic energy?",
		"mgh", "1/2 mv?", "F = ma", "P = IV", 'b');
		break;
	case 5: question("Which simple machine is a ramp?",
		"Lever", "Pulley", "Inclined Plane", "Wheel and Axle", 'c');
		break;
	case 6: question("What is the SI unit of power?",
		"Joule", "Watt", "Newton", "Ampere", 'b');
		break;
	case 7: question("Which law states that F = ma?",
		"Newton's First Law", "Newton's Second Law", "Newton's Third Law", "Law of Conservation of Energy", 'b');
		break;
	case 8: question("What type of energy is stored in a stretched spring?",
		"Kinetic Energy", "Chemical Energy", "Elastic Potential Energy", "Thermal Energy", 'c');
		break;
	case 9: question("Which of the following is NOT a form of energy?",
		"Thermal", "Chemical", "Gravity", "Mechanical", 'c');
		break;
	}

	mark();
}
void js_html_quest(int num)
{
	switch (num)
	{
	case 0: question("What does HTML stand for?",
		"Hyper Text Markup Language", "Hyperlinks and Text Markup Language", "Home Tool Markup Language", "Hyper Transfer Markup Language", 'a');
		break;
	case 1: question("Which HTML tag is used to define an internal JavaScript?",
		"<script>", "<js>", "<javascript>", "<code>", 'a');
		break;
	case 2: question("How do you write 'Hello World' in an alert box in JavaScript?",
		"msg('Hello World');", "alertBox('Hello World');", "alert('Hello World');", "console.log('Hello World');", 'c');
		break;
	case 3: question("Which symbol is used for single-line comments in JavaScript?",
		"//", "/* */", "--", "#", 'a');
		break;
	case 4: question("Which of the following is NOT a valid HTML5 element?",
		"<header>", "<section>", "<footer>", "<blink>", 'd');
		break;
	case 5: question("Which JavaScript keyword is used to declare a variable?",
		"var", "int", "string", "declare", 'a');
		break;
	case 6: question("What is the correct way to link an external JavaScript file in HTML?",
		"<script src='file.js'>", "<js link='file.js'>", "<javascript src='file.js'>", "<script href='file.js'>", 'a');
		break;
	case 7: question("Which event occurs when the user clicks on an HTML element?",
		"onmouseclick", "onclick", "onhover", "onpress", 'b');
		break;
	case 8: question("What is the correct way to create a function in JavaScript?",
		"function myFunction()", "def myFunction()", "create myFunction()", "new function myFunction()", 'a');
		break;
	case 9: question("Which property is used to change the background color in CSS?",
		"color", "background-color", "bgcolor", "background", 'b');
		break;
	}
	mark();
}
void german_quest(int num)
{
	switch (num)
	{
	case 0: question("What is the German word for 'apple'?",
		"Banane", "Orange", "Apfel", "Traube", 'c');
		break;
	case 1: question("Which of these is the correct German greeting?",
		"Bonjour", "Hallo", "Ciao", "Hola", 'b');
		break;
	case 2: question("What does 'Guten Morgen' mean in English?",
		"Good evening", "Good morning", "Good night", "Good day", 'b');
		break;
	case 3: question("Which of these articles is feminine in German?",
		"der", "die", "das", "den", 'b');
		break;
	case 4: question("What is the German word for 'dog'?",
		"Katze", "Hund", "Vogel", "Maus", 'b');
		break;
	case 5: question("Which of these is a German number?",
		"uno", "eins", "dix", "quattro", 'b');
		break;
	case 6: question("What does 'Ich hei?e' mean?",
		"I live", "I eat", "My name is", "I have", 'c');
		break;
	case 7: question("Which of these is a German color?",
		"blau", "rojo", "vert", "azul", 'a');
		break;
	case 8: question("How do you say 'thank you' in German?",
		"Danke", "Merci", "Grazie", "Gracias", 'a');
		break;
	case 9: question("What does 'Tsch?ss' mean?",
		"Hello", "Goodbye", "Please", "Yes", 'b');
		break;
	}
	mark();
}
void lit_quest(int num)
{
	switch (num)
	{
	case 0: question("Where does the name ""Paiisi Hilendarski"" come from?",
		"""Paiisi"" was his monk name and ""Hilendarski"" comes from the monastery ""Hilendar""", """Paiisi"" is the monastery name and ""Hilendarski"" was his monk name", "That is his actual name", "None of the above", 'a');
		break;
	case 1: question("In what year was ""Istoria Slavyanobulgarska"" written?",
		"In 1862", "In 1762",
		"In 1759", "In 1764", 'b');
		break;
	case 2: question("What is the genre of ""Istoria Slavyanobulgarska""?",
		"The genre is history", "The genre is Novel-like", "The genre is history with comments from the author", "The genre is a poem", 'c');
		break;
	case 3: question("To who was Paiisi Hilendarski talking about during the first half of his production?",
		"To the patriotic Bulgarians", "To the foreigners", "To the unfaithful Bulgarians", "To himself", 'a');
		break;
	case 4: question("Where was Sharl Bodler born?",
		"Paris", "Barcelona", "Berlin", "London", 'a');
		break;
	case 5: question("How many parts are there in  ""Istoria Slavyanobulgarska""?",
		"There are 5 parts", "There are 7 parts", "There are 12 parts", "There are 10 parts", 'd');
		break;
	case 6: question("What are some of the themes of ""Istoria Slavyanobulgarska""?",
		"The achievements of Russia", "The glory of Greece", "The history of the Ottomans", "Where Bulgarians came from and their native language, The glorious past of Bulgaria, All of the cultural and spiritual achievements of the past Bulgarians", 'd');
		break;
	case 7: question("When was this author's first literature piece published?",
		"In the year 1857.", "In the year 1855.",
		"In the year 1866.", "In the year 1762.", 'a');
		break;
	case 8: question("Who is the main character in ""Spleen""?",
		"The author of ""Spleen""", "The main character is the figure of the lyrical speaker", "The main character is Sharl Bodler", "All of the above", 'd');
		break;
	case 9: question("What is the main theme of ""Spleen""?",
		"The theme of heartbreak", "The theme of death and sorrow", "The theme of love", "The theme of adventure", 'b');
		break;
	}
	mark();
}
void psychology_quest(int num)
{
	switch (num)
	{
	case 0: question("Who is considered the father of modern psychology?",
		"Sigmund Freud", "B.F. Skinner", "William James", "Wilhelm Wundt", 'd');
		break;
	case 1: question("What part of the brain is responsible for decision-making?",
		"Cerebellum", "Prefrontal Cortex", "Hippocampus", "Medulla", 'b');
		break;
	case 2: question("What is the term for learning through rewards and punishments?",
		"Classical Conditioning", "Operant Conditioning", "Observational Learning", "Latent Learning", 'b');
		break;
	case 3: question("Which psychologist developed the theory of classical conditioning?",
		"B.F. Skinner", "Ivan Pavlov", "Jean Piaget", "Carl Rogers", 'b');
		break;
	case 4: question("What is the main focus of cognitive psychology?",
		"Emotions and Feelings", "Brain Structure", "Mental Processes", "Social Interactions", 'c');
		break;
	case 5: question("What is the term for a person's unique pattern of thoughts, feelings, and behaviors?",
		"Identity", "Personality", "Cognition", "Perception", 'b');
		break;
	case 6: question("Which psychological perspective focuses on unconscious drives and conflicts?",
		"Behavioral", "Humanistic", "Psychoanalytic", "Cognitive", 'c');
		break;
	case 7: question("What is the term for a mental shortcut used to make decisions quickly?",
		"Algorithm", "Heuristic", "Cognition", "Bias", 'b');
		break;
	case 8: question("What is Maslow’s highest level of need in his hierarchy?",
		"Esteem", "Love/Belonging", "Self-Actualization", "Safety", 'c');
		break;
	case 9: question("What is the phenomenon where individuals conform to group behavior?",
		"Obedience", "Social Facilitation", "Groupthink", "Conformity", 'd');
		break;
	}
	mark();
}
void history_quest(int num)
{
	switch (num) {
	case 0: question("What year did World War I begin?",
		"1912", "1914", "1918", "1923", 'b');
		break;
	case 1: question("Which alliance included Germany in WWI?",
		"Allies", "Central Powers", "Axis", "Triple Entente", 'b');
		break;
	case 2: question("Bulgaria joined WWI on which side?",
		"Allies", "Central Powers", "Neutral", "Switched sides", 'b');
		break;

	case 3: question("What did the Treaty of Neuilly (1919) do to Bulgaria?",
		"Gave it new lands", "Made it a world power",
		"Reduced its army and territory", "Ended communism", 'c');
		break;

	case 4: question("Where was the Western Front mainly fought?",
		"Russia", "France/Belgium", "Balkans", "Africa", 'b');
		break;

	case 5: question("What year did WWII begin?",
		"1935", "1939", "1941", "1945", 'b');
		break;

	case 6: question("Bulgaria joined WWII on which side?",
		"Allies", "Axis", "Neutral", "Switched sides", 'b');
		break;

	case 7: question("The Treaty of Neuilly punished Bulgaria after which war?",
		"Crimean War", "WWI", "WWII", "Balkan Wars", 'b');
		break;

	case 8: question("What territory did Bulgaria lose in Neuilly Treaty?",
		"Varna", "Thrace to Greece", "Sofia", "Danube River", 'b');
		break;

	case 9: question("What military restriction did Neuilly impose?",
		"No navy", "20,000 soldier limit", "No tanks", "No air force", 'b');
		break;
	}
	mark();
}
void geography_quest(int num)
{
	switch (num) {
	case 0: question("What is condensation in the water cycle?",
		"Water turning into vapor", "Vapor cooling into liquid water",
		"Rain falling from clouds", "Ice melting into water", 'b');
		break;
	case 1: question("Which process forms clouds?",
		"Evaporation", "Condensation", "Precipitation", "Infiltration", 'b');
		break;
	case 2: question("What is sublimation?",
		"Liquid turning to gas", "Solid turning directly to gas",
		"Gas turning to liquid", "Liquid turning to solid", 'b');
		break;
	case 3: question("What type of radiation do we call 'infrared rays'?",
		"Visible light", "Heat radiation",
		"Ultraviolet light", "X-rays", 'b');
		break;
	case 4: question("What is the main source of infrared radiation on Earth?",
		"The Moon", "Human technology",
		"The Sun", "Earth's core", 'c');
		break;
	case 5: question("Where does condensation typically occur in the atmosphere?",
		"In volcanic eruptions", "On cold surfaces or in clouds",
		"Only in the ocean", "Underground", 'b');
		break;

	case 6: question("Which activity belongs to the SECONDARY sector?",
		"Wheat farming", "Car manufacturing",
		"Teaching", "Banking", 'b');
		break;
	case 7: question("The PRIMARY sector includes:",
		"Coal mining", "Bread baking",
		"School education", "Internet services", 'a');
		break;
	case 8: question("The TERTIARY sector includes:",
		"Oil drilling", "Construction",
		"Healthcare services", "Steel production", 'c');
		break;
	case 9: question("What is the main greenhouse gas?",
		"Oxygen", "Nitrogen", "Carbon dioxide", "Argon", 'c');
		break;
	}
	mark();
}
void english_quest(int num)
{
	switch (num)
	{
	case 0: question("She  to school every day.",
		"go", "goes", "going", "gone", 'b');
		break;
	case 1: question("They  playing football now.",
		"is", "are", "am", "be", 'b');
		break;
	case 2: question("My brother  a new bike last week.",
		"buy", "buys", "bought", "buying", 'c');
		break;
	case 3: question("By the time we arrived, the movie .",
		"already started", "had already started", "has already started", "was already starting", 'b');
		break;
	case 4: question("If I  you, I would apologize immediately.",
		"am", "was", "were", "had been", 'c');
		break;
	case 5: question("She's the woman  helped me find my lost dog.",
		"which", "who", "whose", "whom", 'b');
		break;
	case 6: question("Despite  tired, he finished the project on time.",
		"being", "been", "be", "to be", 'a');
		break;
	case 7: question("Were  to postpone the event, we'd need to inform all participants immediately.",
		"we", "us", "our", "ours", 'a');
		break;
	case 8: question("The proposal was  convoluted that even the experts struggled to decipher it.",
		"so", "such", "too", "very", 'a');
		break;
	case 9: question(" his reputation as a recluse, he attended the gala with surprising enthusiasm.",
		"Nevertheless", "Notwithstanding", "Whereas", "However", 'b');
		break;
	}
	mark();
}