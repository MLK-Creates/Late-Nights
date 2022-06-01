#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<string.h>

using namespace std;


//Matthew Kakareka, MLK-Creates
//C++ Internship Project turned Passion Project.
//Project Morning Light, now called 'Late Nights'
//Version: 0.5.1




//Define the function Main Menu.
void Main_Menu() {

	//Create a Main Menu to display.
	cout <<
		"\nMain Menu"
		"\n1. Start New Game with Tutorial (HIGHLY RECOMMENDED)"
		"\n2. Start New Game"
		"\n3. Exit Game"
		"\n"
		"\n>";

}

//Define the function Tutorial.
void Tutorial() {

	//Create a Tutorial screen to display.
	cout <<
		"\n-- Tutorial --"
		"\nHello and welcome to my first Text Adventure game!"
		"\nBelow I will discuss a few things that will make playing the game a lot easier."
		"\nI hope you have a good time!"
		"\n"
		"\n"
		"\n"
		"\nAs the game begins and continues, pay attention to the top of the screen."
		"\n-- The information in these dashes will tell you your point in the story --"
		"\n"
		"\nFrom here on out, if you see the phrase '(c)', then you will be prompted to enter"
		"\nthe exact same phrase to progress instances like this one. Yes, with parentheses."
		"\n"
		"\nIf at any point you are prompted to enter a number, please enter a number and not"
		"\na period along with it. For example, '1', not '1.'."
		"\n"
		"\nI've left other sets of instructions in other sections to make it easier to play."
		"\nThese are simply the basics."
		"\nPlease enter (c) to exit this screen and start the game!";

}

//Functions that handle the user's name
string user_name;
void set_user_name(string name)
{
	user_name = name;
}
string get_user_name()
{
	return user_name;
}


//Handles all content within Section 3.
class Section_Three {

	//Define member functions of the class.
public:

	//Section Three's Introduction. (3.0)
	void Introduction_3() {

		cout <<
			"-- The week after the Interview --"
			"\n"
			"\nThe time: Early Morning"
			"\nThe sun is shining ever brightly through the window of your apartment. With a tear of the cereal box, you open"
			"\nthe milk jug and pour them both into your pearl white bowl, simultaneously. After the first spoonful, you can't"
			"\nbut smile. It's been several days since your fateful interview with the talk show host Matty Fresh. No longer,"
			"\ndo you need worry about what you might wear or what you might say. It is all over now and you can set your"
			"\nnew and greater things. After you finish your delicious breakfast, you decide to go and check on the mail."
			"\nUnlocking the locks and opening the PO box, you look in to see a single newspaper sitting in the compartment."
			"\nAs you glance at it, your eyes widen as you realize what it is that you're reading.";
	}

	//Section Three Prepared Ending (Final)
	void Ending_Prepared() {

		cout <<
			"--  " << get_user_name() << ", the Prepared --"
			"\n"
			"\nEnding 1 of 5"
			"\n"
			"\nThe Newspaper:"
			"\nOn the most recent airing of, Late Nights With Matty Fresh, a new author was brought on and interview about his"
			"\nbook. Many fans may recognize them as the author of the smash hit, King of Aces. Esteemed host, Matty Fresh asked"
			"\nvarious questions of the author and their published work. It was clear that the interviewee was calm and collected."
			"\nThey gave smart and witty remarks and were an absolute joy. A charismatic icon, we should definitely keep a close"
			"\neye on them in the coming years. Perhaps we'll see more professional and impressive work from them again. The show"
			"\nwas a delight to watch."
			"\n"
			"\nAfter reading the newspaper, a big smile forms on your face. 'This has to be one of the best possible scenarios.'"
			"\nyou tell yourself, as you dance your way back into your apartment. As soon as you finish your breakfast, you sit"
			"\nback down at your desk in the study. Your trusted notebook lies open and your pencil, ready to write, is next to it.";
	}

	//Section Three Safe Ending (Final)
	void Ending_Safe() {

		cout <<
			"--  " << get_user_name() << ", the Safe --"
			"\n"
			"\nEnding 2 of 5"
			"\n"
			"\nThe Newspaper:"
			"\nIt has only been a few days since the last talk show, Late Nights With Matty Fresh, went live. The person who was"
			"\nlucky enough to get an interview with the beloved, Matty Fresh, turned out to be a startup author. As the show went"
			"\non, it was made apparent that the author was indeed not prepared for the interview at all. At some points, it was"
			"\nhard to watch. All of the questions were answered with vague replies as the interviewee appeared to be playing the"
			"\nmajorit of the show safe. As a fan of the book, I would like to think that there is hope for the series. I would"
			"\nlike to think that we will see other great books like it as well. Only time will tell though, but there is hope."
			"\n"
			"\nReading the newspaper, seems to have left you satisfied feeling. 'This didn't go the greatest, but it defintely"
			"\ncould have gone worse', you think to yourself. You enter your apartment once more and finish your breakfast and"
			"\nplop yourself on top of your bed. A gleam of sunlight breaks through the window and highlights something on the"
			"\nground. You notice this and find a pamphlet reading 'IMPORTANT. Talk Show Script'. You close your eyes and let out"
			"\na deep sigh.";
	}

	//Section Three Goofy Ending (Final)
	void Ending_Goofy() {

		cout <<
			"--  " << get_user_name() << ", the Goofy --"
			"\n"
			"\nEnding 3 of 5"
			"\n"
			"\nThe Newspaper:"
			"\nWith the latest episode of the hit show, Late Nights With Matty Fresh, viewers were treated with a theatrical"
			"\nexperience. The surprise guest and author of the popular book, King of Aces, put on the quite the show. It didn't"
			"\nmatter what question was hurled their way, the interviewee would answer it with fiery passion. It was hard to tell"
			"\nif the show was a part of a skit or if it was all improvised, but the audience was certainly entertained. I for"
			"\none would love to see more silly performances on this show. It provides us with a window into the personality"
			"\nbehind the celebrity, allowing us to connect with them further. My family at home says this has been one of their"
			"\nfavorite viewings yet!"
			"\n"
			"\nPutting down the newspaper, you realize you are still wide eyed. 'Is this real? Did they really like my quirky"
			"\nanswers?' You let out a chuckle as you return to your apartment, pondering these questions. After getting dressed"
			"\nyou wonder to what to do next. 'I know, I will venture to bountiful land of tasty and prescious commodities that"
			"\nis the grocery store!' you say as you stand up straight, elevating your voice. 'It is my knightly obligation to"
			"\ncomplete these errands, huzzah!'";
	}

	//Section Three Silent Ending (Final)
	void Ending_Silent() {

		cout <<
			"--  " << get_user_name() << ", the Silent --"
			"\n"
			"\nEnding 4 of 5"
			"\n"
			"\nThe Newspaper:"
			"\nPreviously on, Late Nights With Matty Fresh, a new and recent startup author was brought on set for promising"
			"\ninterview. What followed was anything but. A large amount of the questions the charming host, Matty Fresh,"
			"\nasked were answered with complete and utter silence. Mr. Fresh had his hands full with this one as he had to"
			"\nmake sure to continue the show even though the majority of the interview was one-sided. Many viewers watched in"
			"\nshock as the interviewee took little consideration on how they behaved on air. A lot of respect was lost for them"
			"\nand I highly doubt it will easy to reach that point again. We'll see how long fans will continue to support this"
			"\nauthor after this performance."
			"\n"
			"\nFinished with the newspaper, you run back into your apartment to throw it in the trash. 'I was so nervous, I made"
			"\n an absolute fool out of myself.' you tell yourself. You take a seat at the kichen table and begin to pout. Sitting"
			"\nthere alone, in a long moment of silence, as the warm rays of the morning sun shine on you from the window."
			"\n'I don't know if this could've gone any worse.' you mutter.";
	}

	//Section Three Multi-Personality Ending (Final)
	void Ending_Multi() {

		cout <<
			"--  " << get_user_name() << ", the Confused --"
			"\n"
			"\nEnding 5 of 5"
			"\n"
			"\nThe Newspaper:"
			"\nOn the latest installment of this season of, Late Nights With Matty Fresh, a surprise guest was brought on to be"
			"\ninterviewed once again. This time, however, was very different from all the rest. The guest for this show was an"
			"\nauthor who wrote the recent literary success, King of Aces. What fans were expecting from the show was an entertaining"
			"\nconversation between the lovable host, Matty Fresh, and his interviewee. Instead, we saw an awkward exchange as the"
			"\nauthor seemed to be changing their personality after each question. One moment they appeared to have been calm and"
			"\ncollected, the next moment, they were making a complete fool out of themselves. 'What a buffoon', one viewer said on"
			"\nthe show's socials. 'What is wrong with that person?' said another."
			"\n"
			"\nWhen finsihed with the paper, you decide to leave it in your PO box and lock the door. 'Well I can't say I'm too"
			"\nsurprised with that outcome.' you say to yourself. You walk back into your apartment and shut the door. 'I need to"
			"\nwatch some tv after reading that nonsense.' you tell yourself. 'No, you should go for a walk and clear your head.'"
			"\n'What are you talking about, instead...' You stand there in the center of your room having an arugment as if speaking"
			"\nto someone, but it's only you.";
	}

	//Section Three End Credits
	void End_Credits() {

		cout <<
			"-- End Credits and Special Thanks --"
			"\n"
			"\nProject Lead:"
			"\nMLK-Creates"
			"\n"
			"\nGameplay programmer:"
			"\nMLK-Creates"
			"\n"
			"\nProduced by:"
			"\nMLK-Creates"
			"\n"
			"\nBeta Testers:"
			"\nFriends and Family"
			"\n"
			"\n"
			"\nSpecial thanks to: "
			"\nMy Game Design professors for allowing me the opportunity to study C++ on my own, independently."
			"\n"
			"\nMy friends and family for supporting me and my passion for game design."
			"\n"
			"\nYou, dear user, for playing this game! It brings me joy that you were able to play my"
			"\ngame and make to the end. I hope you found it as entertaining as it was for me, building it from"
			"\nscratch.";
	}

	//Handles the functions within the Section 3 class.
	//The values of each answers have been passed and put into their respective variables.
	void Section_Three_Content(int value_prep, int value_safe, int value_goof, int value_sil) {

		//Create a single input variable to be used  in Section 1 when the user is asked to enter (c)
		char sec_three_continue[50];

		//Initialize a boolean variable to be used in tandem with while loops for input exceptions.
		bool sec_three_exception = true;


		//Begin Section 3, starting with the introduction. 
		Introduction_3();

		//Allow the user to read the intro and then ask them to enter "(c)".
		//Clear Screen/Proceed with beginning the story.
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_three_exception == true)
		{
			cin.getline(sec_three_continue, 50);
			if (string(sec_three_continue) == "(c)")
			{
				system("cls");
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}


		//Code that puts in all answer values from the previous section into an array.
		//After using bubble sort, place the corresponding to the value that is the highest.
		//If the last two values are the highest and the same number, play its respective ending.
		// 
		//Answer variables holding the answer values
		int prep = value_prep;
		int safe = value_safe;
		int goofy = value_goof;
		int silent = value_sil;

		//Decision value which is set to a base number of 4.
		int decision_value = 4;

		//Necessary variables that include the array creation and bubble sort
		int i, arr[4], j, temp;

		//The answer variables are placed within the array.
		arr[0] = prep;
		arr[1] = safe;
		arr[2] = goofy;
		arr[3] = silent;


		//Sorting the Array using Bubble Sort Technique
		for (i = 0; i < (decision_value - 1); i++)
		{
			for (j = 0; j < (decision_value - i - 1); j++)
			{
				//The indexes switch if the numbers compared this way.
				if (arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}


		//If the last two items in the array are the same, play the Multiple Personality ending.
		if (arr[3] == arr[2])
		{
			Ending_Multi();
		}

		//If the prepared variable is the last in the array, play the Prepared ending.
		else if (arr[3] == prep)
		{
			Ending_Prepared();
		}

		//If the safe variable is the last in the array, play the Safe ending.
		else if (arr[3] == safe)
		{
			Ending_Safe();
		}

		//If the goofy variable is the last in the array, play the Goofy ending.
		else if (arr[3] == goofy)
		{
			Ending_Goofy();
		}

		//If the silent variable is the last in the array, play the Silent ending.
		else
		{
			Ending_Silent();
		}


		//Allow the user to read their ending and then ask them to enter "(c)".   Thanks so much for playing!!!
		//Clear Screen display the credits.
		cout <<
			"\n"
			"\nPlease enter (c) one last time."
			"\n. . ."
			"\n>";

		while (sec_three_exception == true)
		{
			cin.getline(sec_three_continue, 50);
			if (string(sec_three_continue) == "(c)")
			{
				system("cls");
				End_Credits();
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}

		//Allow the user to read the end credits and end the game.
		cout <<
			"\n"
			"\n"
			"\nThanks so much for playing!!!"
			"\nAny input will end the program."
			"\n. . ."
			"\n>";

		//No matter what the user enters, end the program.
		cin.getline(sec_three_continue, 50);
		if (string(sec_three_continue) == "")
		{
			system("cls");
			exit(0);
		}
		else
		{
			system("cls");
			exit(0);
		}

	}

};


//Handles all content within Section 2.
class Section_Two {

	//Define member functions of the class.
public:

	//Section Two's Introduction. (2.0)
	void Introduction_2() {

		cout <<
			"-- The day of the Interview --"
			"\n"
			"\nThe time is 4:30 pm."
			"\nIt is the very next day and you have just arrived to the television studio and parked you car. Sweat beading"
			"\ndown your face as you realize that this is exactly what you have been waiting for. With a quick wipe of your"
			"\nhankerchief and a brush of your hair, you step out of the car into the cool evening air. Before you is"
			"\nthe Univision Radio broadcasting station. A tall and square shaped building with beige colored walls and"
			"\ntinted blue doors. This is the site where many of tv's most watched programs air. It is also where you will"
			"\nbe having your ever important interview with the well-liked and respected talk show host, Matty Fresh. The"
			"\nshow is scheduled to air in thirty minutes, now is the time to enter the building and get ready for the"
			"\ninterview.";
	}

	//Beginning story for Section Two (2.2)
	void Section_Beginning_2() {

		cout <<
			"-- Introductions before the Interview --"
			"\n"
			"\nThe time is 4:50 pm."
			"\nAfter checking in at the front desk, you are instructed to take the elevator to the side, up to the fifth"
			"\nfloor. As soon as the elevator doors open, you are blinded with bright lights. When the lights fade, a group"
			"\nof bustling crewmen rush left and right, trying to get everything ready for the show that airs in ten minutes."
			"\nYou glance to the left and see the prop area and director seats. Ahead of you are two black chairs, one hiding"
			"\nbehind a mahogany desk, the seat most-likely reserved for the host. Behind the chairs is set a of glass panes"
			"\nthat show the night sky, giving the scene a proper evening show look. Finally you notice to the right of you the"
			"\nmakeup booths and in farthest one away, the lead of the show, Matty Fresh. He looks to you and you lock eyes."
			"\n'Ah, you must be the one I'm to interview tonight,' You hear him say. 'Come on over, let us talk about how this"
			"\nwill go down.'";
	}

	//Section Two story (2.4)
	void Section_Beg_Continued_2() {

		cout <<
			"-- Preparation before the Interview --"
			"\n"
			"\nThe time: Moments before the show airs."
			"\n'So if I remember correctly then you must be the hot shot book author, " << get_user_name() << ", no?' You tell"
			"\nthe host that that is correct. 'Yes sir, and I'm happy to be here' you say. He looks at you and notices that you"
			"\nseem a bit nervous. 'Look friend, I know you're nervous, but everything will go fine. Don't worry!', says Matty"
			"\nFresh as he gives you a hard pat on the back. It almost knocks you over, but you regain your balance. 'So I know"
			"\nplenty of celebrities have arguably found their fame after appearing on my show.' Matty Fresh tells you. 'And I"
			"\nam sure you will do the same, so long as everything goes according to plan.' As long as you've read the script"
			"\nthat is...' He trails off and looks at you waiting for a response. Before you can mutter a word, you hear the"
			"\ndirector yell 'Alright places people, places! Late Nights With Matty Fresh is airing in one minute!' You and"
			"\nMatty Fresh lock eyes again. 'Well kid, I guess that's our cue.' He says to you with a wink as he gets up from"
			"\nhis booth and goes to sit down in his chair on set. You get up to do the same and within moments, the next thing"
			"\nyou know, all cameras are facing you.";
	}

	//Section Two story - interview (2.6)
	void Section_Beg_Interview() {

		cout <<
			"--The Interview has begun --"
			"\n"
			"\nThe time: 5:00 pm."
			"\n'Good evening America, this is Late Nights With Matty Fresh, and I am your devilishly handsome host.' Matty Fresh"
			"\ngives his token wink and smile, then continues to speak. 'Tonight, I have a very special guest with me.' You adjust"
			"\nyour posture, knowing that you will soon find yourself on camera. 'You may know them as the author of one of the"
			"\nmost popular books to come out in the past few months, King of Aces.' Matty Fresh turns his chair toward you. "
			"\n'America, I present to you the author extrordinaire!'. You notice a clapping track that begins to play as you see all"
			"\nthe cameras point to you. Matty Fresh stands up and faces you as well, clapping. Finally, he extends his hand and"
			"\nprompts you to stand as well and meet him half way. 'Yes that is me.' You say as you stand up as well to face Matty"
			"\nFresh. You extend your hand to meet his and you give it a shake. 'Thank you for having me.' You tell him, as you both"
			"\nsit down and take your seats. 'I'm so glad you could join us tonight. I have a few questions I would like to ask about"
			"\nyou and your book.' Matty Fresh says to you. 'I'm sure the audience wants to know more too.' says Matty Fresh has he"
			"\nlooks to the camera once more with a smile.";
	}

	//Section Two story - interview (2.65)
	void Section_Beg_Interview_TUT() {

		cout <<
			"-- Entering Interview Dialogue --"
			"\n"
			"\nThe time is 5:00 pm."
			"\nThe interview is about to begin and you are about to be asked a series of questions. These will pertain to"
			"\nthe book you have written and the thoughts and ideas behind it. Depending on the actions you made in the"
			"\nprevious section, you will have up to 4 answers to give to the question. The '1.' choice is to represent"
			"\na prepared answer. It will be available if you managed to find the script and gave it a read. The '2.' will"
			"\nrepresent your best guess or a safe answer to the question. The '3.' option will be a goofy remark,"
			"\nindicating that you don't know the answer or don't care. Lastly, the '4.' answer will allow you to simply"
			"\nremain silent and ignore the question. All answers will have their consequences, good and bad. These will"
			"\naffect the ending of the game. Good luck!"
			"\n"
			"\nThis begins the first 'interview dialogue' portion of the game. You will be asked a series of questions and"
			"\nthen you will be presented with a series of numbers, 1-4. Enter the number that corresponds to the answer you"
			"\nwant to give."
			"\nReminder: Enter a number without a period. For example, '1' not '1.'."
			"\n"
			"\nAdditional Instructions: After picking an answer, enter the command '(c)' when prompted, to continue to the next"
			"\nquestion and beyond. If you notice an answer is LOCKED, that means you missed an opportunity in an earlier section.";
	}

	//Section One Story (2.8)
	void Section_End_Interview() {

		cout <<
			"-- Exiting Interview Dialogue --"
			"\n"
			"\nAs soon as the interview ends, you notice a crewman off stage signal Matty Fresh that it's time to wrap"
			"\nthings up. 'Alright folks, that's all we have time for tonight.' says Matty Fresh to the camera. 'This has"
			"\nbeen quite the interview, one of the books!' You hear a laughing track play in the background. Matty Fresh"
			"\ndelivers his signature goodbye and farewell with one more smile and a wink. Once he finishes, the lights"
			"\nturn on and you notice the crew bustling around the set again, cleaning it up. Matty Fresh turns to you"
			"\nwhile you're both still sitting down. 'You did alright kid, I'm sure it certainly could've gone worse.'"
			"\nHe says this with a smile and pats you on the back before getting up stepping off stage. A feeling of relief"
			"\novercomes you as you realize the interview is finally done. The moment you've been waiting for all this time"
			"\nhas come and now passed. Your part is finished, all that's left to do now is wait for the reviews.";
	}


	//INTERVIEW QUESTION 1
	void Section_Interview_Q1() {

		cout <<
			"-- Question 1 --"
			"\n"
			"\n"
			"\nMatty Fresh:"
			"\n'So for all the audience members out there that don't know you, can you give us your name?"
			"\nMaybe tell us a little something about yourself too?'";
	}

	//INTERVIEW QUESTION 2
	void Section_Interview_Q2() {

		cout <<
			"-- Question 2 --"
			"\n"
			"\n"
			"\nMatty Fresh:"
			"\n'Now that we have introductions out of the way, I wanted to dive right in to the nitty gritty."
			"\nObviously this a heroic tale of action, adventure, and romance. Where did you get the inspiration"
			"\nfor this book, the King of Aces?'";
	}

	//INTERVIEW QUESTION 3
	void Section_Interview_Q3() {

		cout <<
			"-- Question 3 --"
			"\n"
			"\n"
			"\nMatty Fresh:"
			"\n'For the next question and for the curious veiwers at home...'"
			"\nMatty Fresh adjusts his posture and leans back in his chair."
			"\n'What was your personal, favorite moment in the book? Any aspect that you enjoyed writing about"
			"\nthe most?'";
	}

	//INTERVIEW QUESTION 4
	void Section_Interview_Q4() {

		cout <<
			"-- Question 4 --"
			"\n"
			"\n"
			"\nMatty Fresh:"
			"\n'It was very interesting hearing about your favorite part about your book.'"
			"\nMatty Fresh picks up a pen and starts twirling it in his hand."
			"\n'Next I wanted to ask a rather important question. The fans and I included would like to know,"
			"\nis it possible that we could see a sequel to this amazing story in the future?'";
	}

	//INTERVIEW QUESTION 5
	void Section_Interview_Q5() {

		cout <<
			"-- Question 5 --"
			"\n"
			"\n"
			"\nMatty Fresh:"
			"\nMatty Fresh stacks the script papers in his hand, before turning back to you."
			"\n'I'm glad I was able to fit that question in because I know a lot of us were dying to know about"
			"\na sequel. Before we end this interview though, do you have any parting words for the audience at"
			"\nhome?'";
	}



	//Handles the functions within the Section 2 class.
	//Note: "value" is the status of the script being chosen.
	void Section_Two_Content(bool value) {

		//Create a single input variable to be used  in Section 1 when the user is asked to enter (c)
		char sec_two_continue[50];

		//Initialize a boolean variable to be used in tandem with while loops for input exceptions.
		bool sec_two_exception = true;


		//Begin Section 2, starting with its introduction. 
		Introduction_2();

		//Allow the user to read the intro and then ask them to enter "(c)".
		//Clear Screen/Proceed with beginning the story.
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_two_exception == true)
		{
			cin.getline(sec_two_continue, 50);
			if (string(sec_two_continue) == "(c)")
			{
				system("cls");
				Section_Beginning_2();
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}

		//Allow the user to read the Section beginning and then ask them to enter "(c)".
		//Clear Screen/Proceed with telling the story.
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_two_exception == true)
		{
			cin.getline(sec_two_continue, 50);
			if (string(sec_two_continue) == "(c)")
			{
				cout <<
					"\nYou navigate the makeup booths and stylists there to reach Mr. Fresh. The"
					"\nhost pulls up a seat for you and you sit down to discuss the layout of the show."
					"\nTime is ticking though these will be the last moments of the calm before the storm...";
				Sleep(11 * 1000);
				system("cls");
				Section_Beg_Continued_2();
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}


		//Allow the user to read the Section Interview beginning and then ask them to enter "(c)".
		//Clear Screen/Proceed with telling the story.
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_two_exception == true)
		{
			cin.getline(sec_two_continue, 50);
			if (string(sec_two_continue) == "(c)")
			{
				cout <<
					"\nAs soon as the director signals the crew, he yells 'And we're live!'"
					"\nMatty Fresh turns to the camera and addresses the audience at home."
					"\nThe interview has begun...";
				Sleep(11 * 1000);
				system("cls");
				Section_Beg_Interview();
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}


		//Allow the user to read the Section Interview beginning text and then ask them to enter "(c)".
		//Clear Screen/Proceed with interview decision area of the story.
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_two_exception == true)
		{
			cin.getline(sec_two_continue, 50);
			if (string(sec_two_continue) == "(c)")
			{
				cout <<
					"\nAfter addressing the audience at home, Matty Fresh turns to you and pulls out"
					"\na sheet of paper. This is no doubt, the script for the show this evening.";
				Sleep(9 * 1000);
				system("cls");
				Section_Beg_Interview_TUT();
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}


		//Allow the user to read the Section Beginning Apartment text and then ask them to enter "(c)".
		//Clear Screen/Proceed with free-roam area of the story.
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_two_exception == true)
		{
			cin.getline(sec_two_continue, 50);
			if (string(sec_two_continue) == "(c)")
			{
				Sleep(5 * 1000);
				system("cls");
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}



		//The following code will handle the interview dialogue
		//and answer choosing portion.

		//Create a variable for the user to input their answer into.
		//Create another four variables for the strings to be compared to.
		char answer_chosen[50];


		//Initialize the variables that will count the different answers chosen.
		int answers_prepared = 0;
		int answers_safe = 0;
		int answers_goofy = 0;
		int answers_silence = 0;


		//Run the first question function and print the answer gui.
		//Determine which gui based on the script chosen value.
		Section_Interview_Q1();

		if (value == true)
		{
			//GUI ANSWER CODE FOR INTERVIEW QUESTION 1
			//Create a while loop to run until the user puts in useful input.
			bool answer_exception_q1 = true;
			while (answer_exception_q1 == true)
			{
				cout <<
					"\n"
					"\n"
					"\n"
					"\nAnswers"
					"\n~ ~ ~ ~"
					"\n1. [Prepared]"
					"\n2. [Safe]"
					"\n3. [Goofy]"
					"\n4. [Silence]"
					"\n"
					"\n. . ."
					"\n>";

				//Allow the user to enter an answer.
				cin.getline(answer_chosen, 50);

				//If the user enters a 1, add a prepared value, end the loop, and continue the interview.
				if (string(answer_chosen) == "1")
				{
					answers_prepared += 1;
					system("cls");
					cout <<
						"\nYou chose the [Prepared] answer."
						"\n"
						"\nYou:"
						"\n'My name is, " << get_user_name() << ", and I am the author of the book King of Aces.'"
						"\n'As you may know, I do like to write a lot in my spare time. I also like to hit the gym"
						"\nwhen I'm able to, and spend the night out with my friends.'"
						"\n"
						"\nMatty Fresh:"
						"\n'Ahh all great ways to spend your time. Well thanks again, " << get_user_name() << ", for"
						"\ncoming onto the show. I'm sure this will be a fun one.'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q2();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 2, add a safe value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "2")
				{
					answers_safe += 1;
					system("cls");
					cout <<
						"\nYou chose the [Safe] answer."
						"\n"
						"\nYou:"
						"\n'Uhh yes well my name is, " << get_user_name() << ", and I am the person who wrote King of Aces.'"
						"\n'I... like write in my spare time a lot. I listen to music and work out. What else do I like to do..."
						"\nYeah, that's about all I can think of right now.'"
						"\n"
						"\nMatty Fresh:"
						"\n'Hey that's fine, it sounds like you spend your free time well. I want to say thanks again, "
						"\n" << get_user_name() << ", for coming onto the show. I'm sure this talk will be just alright.'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q2();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 3, add a goofy value, end the loop, and continue the interview.
				//For extra flavor, change the user's name to Sir Adhemar, for picking this answer.
				else if (string(answer_chosen) == "3")
				{
					string new_username = "Sir Adhemar";
					set_user_name(new_username);

					answers_goofy += 1;
					system("cls");
					cout <<
						"\nYou chose the [Goofy] answer."
						"\n"
						"\nYou:"
						"\n'Of course, my name is Sir Adhemar of the Summer and I am on an epic quest to save the emerald queen.'"
						"\nYou look off to the distance at a crewmember manning a camera and begin gesturiung them."
						"\n'You there, squire! Fetch me the finest ale on tap. I must rest up before I am to set off my grand"
						"\nadventure!'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh makes a face, surprised, that you've decided to go completely off script. He smirks and tries"
						"\nto remedy the situation."
						"\n'Oh this must be one of your own portrayals of the main character from your book! Ahh bravo, good show, a"
						"\nvery good show. I wasn't expecting you to pull that out of your hat. This.. this should be an interesting'"
						"\nevening that's for sure."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q2();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 4, add a silence value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "4")
				{
					answers_silence += 1;
					system("cls");
					cout <<
						"\nYou chose the [Silence] answer."
						"\n"
						"\nYou:"
						"\nYou stare blankly into Matty Fresh's eyes, completely ignoring his question."
						"\n'........'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh clears his throat before beginning to speak."
						"\n'A little shy are we? That's ok, not everyone knows the amount of pressure you're going through. Especially"
						"\nas you sit here with the whole world watching you speak. Well, if you did speak.'"
						"\nHe says this with a smile, as a laughing track plays in the background in response to the joke."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q2();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters in invalid input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nPlease pick one of the numbers listed."
						"\n";
					continue;
				}
			}



			//GUI ANSWER CODE FOR INTERVIEW QUESTION 2
			//Create a while loop to run until the user puts in useful input.
			bool answer_exception_q2 = true;
			while (answer_exception_q2 == true)
			{
				cout <<
					"\n"
					"\n"
					"\n"
					"\nAnswers"
					"\n~ ~ ~ ~"
					"\n1. [Prepared]"
					"\n2. [Safe]"
					"\n3. [Goofy]"
					"\n4. [Silence]"
					"\n"
					"\n. . ."
					"\n>";

				//Allow the user to enter an answer.
				cin.getline(answer_chosen, 50);

				//If the user enters a 1, add a prepared value, end the loop, and continue the interview.
				if (string(answer_chosen) == "1")
				{
					answers_prepared += 1;
					system("cls");
					cout <<
						"\nYou chose the [Prepared] answer."
						"\n"
						"\nYou:"
						"\n'That's a very good question Mr. Fresh, you see...'"
						"\nYou adjust your posture and cross a leg over your knee."
						"\n'There's a nmumber of areas I drew inspiration form  for my book. Some of it, from aspects of my life."
						"\nSome characters are based off people I've encountered. Events that I have added may also reference some"
						"\ncommon forms of pop culture that are out there. Other than that, it's all stemmed from my imagination.'"
						"\n"
						"\nMatty Fresh:"
						"\n'Wow, " << get_user_name() << ", that was very well put. It's amazing to hear that this book served as an"
						"\ninspiration from many things. Perhaps that's why it's so likeable and easy to pick up.'"
						"\nMatty Fresh says this with a smile."
						"\n'I've read the book a little myself and I have defintely enjoyed the subtle references you've so carefully"
						"\nlaid out.'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q3();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 2, add a safe value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "2")
				{
					answers_safe += 1;
					system("cls");
					cout <<
						"\nYou chose the [Safe] answer."
						"\n"
						"\nYou:"
						"\n'Good question, so...'"
						"\nYou trail off and tilt your head up thinking about what to say next."
						"\n'I had this idea that wanted to tell this great story and I finally decided to act on it. The"
						"\nmain inspiration came from a variety of medieval books that I read over the years. I couldn't"
						"\ntell you the name of them off the top of my head. I also used my life as an inspiration, lots"
						"\nof stuff from there.'"
						"\n"
						"\nMatty Fresh:"
						"\n'I see, I might be a little confused though. Are you suggesting this book also serves as an"
						"\nautobiography of sorts as well? If that is correct, I like that is very profound.'"
						"\nMatty Fresh says this as he looks at you. You notice in his expression that he can tell you"
						"\nmay not have been prepared for this interview."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q3();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 3, add a goofy value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "3")
				{
					answers_goofy += 1;
					system("cls");
					cout <<
						"\nYou chose the [Goofy] answer."
						"\n"
						"\nYou:"
						"\nYou look at Matty Fresh with a puzzled expression on your face."
						"\n'Well that's a strange question that you have asked. What do you mean what was my inspiration? The"
						"\nemerald queen is the fairest lady in all the land. It is my knightly responsiblity...'"
						"\nYou stand up, make a fist, and place it on your chest."
						"\n'to save her grace and rid the evil that plagues this sacred land.'"
						"\nAfter your grand peformance, you take your seat and sit back down."
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh looks to the camera with his eyes widened and then turns back to you."
						"\n'Of course, just like how it's written in the book! I guess the inspiration stemmed from a personal"
						"\nsense of chivalry then? Is that it?'"
						"\nMatty Fresh asks you this while giving you a stern look. From his body language, he's questioning"
						"\nwhat it is that you're doing."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q3();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 4, add a silence value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "4")
				{
					answers_silence += 1;
					system("cls");
					cout <<
						"\nYou chose the [Silence] answer."
						"\n"
						"\nYou:"
						"\nAfter Matty Fresh asks his question, you break eye contact and start looking aimlessly around the"
						"\nroom."
						"\n'........'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh tugs his shirt collar and tries to think of something to clever to say."
						"\n'Silence hmm. I wonder, is this some sort message. Are you trying to tell us the answer by not"
						"\nsaying anything? Does that mean that there is no inspiration, that the narrative just came to be?'"
						"\nHe says this with a curious look in his eyes. It's clear that to him that you're either tugging his"
						"\nleg, or you're at a complete loss of words."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q3();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters invalid input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nPlease pick one of the numbers listed."
						"\n";
					continue;
				}
			}



			//GUI ANSWER CODE FOR INTERVIEW QUESTION 3
			//Create a while loop to run until the user puts in useful input.
			bool answer_exception_q3 = true;
			while (answer_exception_q3 == true)
			{
				cout <<
					"\n"
					"\n"
					"\n"
					"\nAnswers"
					"\n~ ~ ~ ~"
					"\n1. [Prepared]"
					"\n2. [Safe]"
					"\n3. [Goofy]"
					"\n4. [Silence]"
					"\n"
					"\n. . ."
					"\n>";

				//Allow the user to enter an answer.
				cin.getline(answer_chosen, 50);

				//If the user enters a 1, add a prepared value, end the loop, and continue the interview.
				if (string(answer_chosen) == "1")
				{
					answers_prepared += 1;
					system("cls");
					cout <<
						"\nYou chose the [Prepared] answer."
						"\n"
						"\nYou:"
						"\n'A favorite moment, hmm, that's a tough one as there's so many to pick from.'"
						"\nYou say this with a smile as you stroke your chin."
						"\n'Perhaps it's the point where the adventure first begins, the rising action of my story. The emerald"
						"\nqueen is missing and there is panic in the streets. No one knows what to do until one man stands above"
						"\nall others. When the hero is revealed and then the action that follows.'"
						"\n"
						"\nMatty Fresh:"
						"\n'I have to say, " << get_user_name() << ", that is a great choice. It was such a great moment as you said"
						"\nbecause it really sets the tone for the rest of the book. Certainly, it makes for a powerful story.'"
						"\nMatty Fresh says as he nods to you in appreciation."
						"\n'Mine might have to be when the knight and the queen reunite once again. I'm a hopeless romantic you see"
						"\nso that kind of stuff gets me.'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q4();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 2, add a safe value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "2")
				{
					answers_safe += 1;
					system("cls");
					cout <<
						"\nYou chose the [Safe] answer."
						"\n"
						"\nYou:"
						"\n'My favorite part of the whole book? Uhhh..'"
						"\nYou dart your eyes to the ceiling as you ponder the question."
						"\n'It's honestly really tough, I love the story as a whole. I couldn't tell you if I had a favorite"
						"\npoint. I've written the story from beginning to end and it's all been a wild ride up to this point."
						"\nSorry if that doesn't answer your question.'"
						"\nYou say as you scratch the bnack of your head."
						"\n"
						"\nMatty Fresh:"
						"\n'That's ok, I suppose that's understandable. I was just curious and I know many others were as well"
						"\nif there was one part in particular or not.'"
						"\nSays Matty Fresh as he lets out a slight sigh."
						"\nYou may not have given a specific part, but you did answer the question."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q4();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 3, add a goofy value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "3")
				{
					answers_goofy += 1;
					system("cls");
					cout <<
						"\nYou chose the [Goofy] answer."
						"\n"
						"\nYou:"
						"\n'Hmm, that's a trivial question you ask, peasant.'"
						"\nYou adjust your posture to be as straight as can be in your chair. You look off to the distance in"
						"\nthought."
						"\n'I'm not sure if I have a favorite moment, but there is an interesting one that fascinates me so. At one"
						"\npoint in my journey I came across an evil, eldritch knight. We were at a crossroads and battle was"
						"\ninevitable. As the duel finally broke out, my blade struck true and I chopped my opponent's arm clean off!"
						"\nBlood everywhere and to my surprise, he kept fighting. He told me it was but a flesh wound!'."
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh with his jaw open, looks at you in bewilderment, before closing it again."
						"\n'That's... that's very discriptive, " << get_user_name() << ". Thank you for telling us in such great detail."
						"\nThat was... wow.'"
						"\nMatty Fresh breaks eye contact with you and turns to the camera. He grimaces before speaking"
						"\n'Well you heard it here first folks, straight from the horse's mouth. Shall we move on to next question?'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q4();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 4, add a silence value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "4")
				{
					answers_silence += 1;
					system("cls");
					cout <<
						"\nYou chose the [Silence] answer."
						"\n"
						"\nYou:"
						"\nAfter Matty Fresh asks you the question, you close your eyes and refuse to open them until the next"
						"\nquestion."
						"\n'........'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh notices your odd behavior and after waiting a little bit, attempts to get your attention again. He"
						"\ntaps his desk, whistles, and snaps his fingers before giving up."
						"\n'Well this is unusual. I didn't know if you were thinking of a specific moment or perhaps not.'"
						"\nMatty Fresh who is beginning to sweat nervously, turns to the camera."
						"\n'Well it appears that I have stumped our guest, it looks they may not be able to answer. Anyways, moving on...'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q4();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters in invalid input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nPlease pick one of the numbers listed."
						"\n";
					continue;
				}
			}


			//GUI ANSWER CODE FOR INTERVIEW QUESTION 4
			//Create a while loop to run until the user puts in useful input.
			bool answer_exception_q4 = true;
			while (answer_exception_q4 == true)
			{
				cout <<
					"\n"
					"\n"
					"\n"
					"\nAnswers"
					"\n~ ~ ~ ~"
					"\n1. [Prepared]"
					"\n2. [Safe]"
					"\n3. [Goofy]"
					"\n4. [Silence]"
					"\n"
					"\n. . ."
					"\n>";

				//Allow the user to enter an answer.
				cin.getline(answer_chosen, 50);

				//If the user enters a 1, add a prepared value, end the loop, and continue the interview.
				if (string(answer_chosen) == "1")
				{
					answers_prepared += 1;
					system("cls");
					cout <<
						"\nYou chose the [Prepared] answer."
						"\n"
						"\nYou:"
						"\n'With how the story itself, ended, it's difficult to say. There is certianly a possibility that there'"
						"\nmay be a sequel. I wouldn't be opposed to the main character's epic adventure.'"
						"\nYou say this as you turn to the camera and give the audience a wink."
						"\n'We'll see where the story takes our character next, should that be the case."
						"\nall others. When the hero is revealed and then the action that follows.'"
						"\n"
						"\nMatty Fresh:"
						"\n'Well I'll be.'"
						"\nMatty Fresh says this with a big grin."
						"\n'I think you've said all you've needed to say. The audience and I have heard you loud and clear, my friend.'"
						"\nMatty Fresh turns to the camera with a happy expression."
						"\n'That's right folks, there is yet hope.'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q5();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 2, add a safe value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "2")
				{
					answers_safe += 1;
					system("cls");
					cout <<
						"\nYou chose the [Safe] answer."
						"\n"
						"\nYou:"
						"\n'Is there a possiblity of a sequel? Uhh... I'm not sure, I've not given it much thought.'"
						"\nYou appear to be caught off guard, but recompose yourself."
						"\n'I guess it's possible I could write another book, we'd honestly have to see.'"
						"\nYou say this with a nervous chuckle."
						"\n'I really like the story so I think I'd be ok with continuing it.'"
						"\n"
						"\nMatty Fresh:"
						"\n'You've got a lot of confidence it seems...'"
						"\nMatty Fresh says this with a sarcastic tone. Afterwards, he turns to the camera and lets out"
						"\na disappointed sigh."
						"\n'From what it sounds like, I wouldn't get your hopes up too high for a sequel.'"
						"\nMatty Fresh turns back to you."
						"\nI think I can speak for the thousands watching, we all really like the story, that's for sure."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q5();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 3, add a goofy value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "3")
				{
					answers_goofy += 1;
					system("cls");
					cout <<
						"\nYou chose the [Goofy] answer."
						"\n"
						"\nYou:"
						"\nAfter hearing the question, you give Matty Fresh a smirk."
						"\nWill there be a sequel to my quest? Of course there will be."
						"\nYou raise your tone, almost to the point of yelling."
						"\n'Wherever there might be evil, I " << get_user_name() << ", will be there to vanquish it! A knight's duty is"
						"\nto protect those who may not be able to protect themselves. As such a knight, this is my duty. I will always"
						"\nprevail!'"
						"\nYou lean back in your chair after announcing your declaration."
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh tries to clear his throat while attempting to make sense of your outburst."
						"\n'That's something. I'm assuming by your speech, that means that a sequel could very well be in the works? Very"
						"\nexciting, very exciting indeed.'"
						"\nMatty Fresh wipes the nervous sweat off his forehead before turning to the camera."
						"\n'I'm sure none of us were expecting to hear that this evening. What a surprise that was...'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q5();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 4, add a silence value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "4")
				{
					answers_silence += 1;
					system("cls");
					cout <<
						"\nYou chose the [Silence] answer."
						"\n"
						"\nYou:"
						"\nOnce Matty Fresh finishes the question, you take the pen off his desk and start playing around with it."
						"\n'........'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh is visibly confused, wondering why you've decided to not pay attention to the question."
						"\nHe opens his mouth as if to say something then closes it again briefly."
						"\n'Alrigh then, well I'm not sure what that's supposed to mean. Is this fumbling with my pen, a sign that you'"
						"\nwould still like to continue writing?'"
						"\nMatty Fresh turns to the camera, it's obvious that he's trying his best to handle your silence."
						"\n'Your guess is as good as mine folks. Whether there is a sequel or not, it seems only time will tell."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q5();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters in invalid input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nPlease pick one of the numbers listed."
						"\n";
					continue;
				}
			}



			//GUI ANSWER CODE FOR INTERVIEW QUESTION 5
			//Create a while loop to run until the user puts in useful input.
			bool answer_exception_q5 = true;
			while (answer_exception_q5 == true)
			{
				cout <<
					"\n"
					"\n"
					"\n"
					"\nAnswers"
					"\n~ ~ ~ ~"
					"\n1. [Prepared]"
					"\n2. [Safe]"
					"\n3. [Goofy]"
					"\n4. [Silence]"
					"\n"
					"\n. . ."
					"\n>";

				//Allow the user to enter an answer.
				cin.getline(answer_chosen, 50);

				//If the user enters a 1, add a prepared value, end the loop, and continue the interview.
				if (string(answer_chosen) == "1")
				{
					answers_prepared += 1;
					system("cls");
					cout <<
						"\nYou chose the [Prepared] answer."
						"\n"
						"\nYou:"
						"\n'Well first I want to thank you, Mr. Fresh, for inviting me here. The crew did a fantastic job as well. In regards"
						"\nto final words..."
						"\nYou turn to the camera and put a sincere expression on your face."
						"\n'This may sound cheesy, but never give up. There were a lot of times when I didn't have the drive to continue"
						"\nwriting. I thought the book was too ambitious of an idea and I often thought about quitting. Then I thought how"
						"\nproud of myself I'd be for finishing, and how proud others around me would as well.'"
						"\nYou raise your hand and point to the camera."
						"\n'You, you can do it.'"
						"\n"
						"\nMatty Fresh:"
						"\n'What great words to end on my friend, very inspirational. I think I got goosebumps there in the end.'"
						"\nYou and Matty Fresh share a chuckle before he continues."
						"\n'There's no doubt you touched the heart of thousands with those words, thank you for sharing them.'"
						"\nMatty Fresh gives you a smile and a nod of respect."
						"\nYou're very welcome for the invitation as too, I'm really happy we could have you."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_End_Interview();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 2, add a safe value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "2")
				{
					answers_safe += 1;
					system("cls");
					cout <<
						"\nYou chose the [Safe] answer."
						"\n"
						"\nYou:"
						"\n'Final words, I wish I had something clever to say, but sadly I don't.'"
						"\nYou say this with a shrug of the shoulders."
						"\n'Uhh.. Don't let your dreams be dreams kids and.. stay and school my friends!'"
						"\nYou say this and than give Matty Fresh a nod, letting him know you're finished."
						"\n"
						"\nMatty Fresh:"
						"\n'I see, perhaps cliche things to say, but important ones nonetheless.'"
						"\nMatty Fresh quickly gets his things together on his desk in preparation to end the interview before"
						"\nlooking back to you."
						"\n'Well listen, I " << get_user_name() << ", it's been a pleasure having you on the show. I'm so glad you"
						"\ncould make it."
						"\nHe says this in monotone and you sense he's disappointed in your reply."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_End_Interview();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 3, add a goofy value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "3")
				{
					answers_goofy += 1;
					system("cls");
					cout <<
						"\nYou chose the [Goofy] answer."
						"\n"
						"\nYou:"
						"\n'What final words could I offer the townspeople that listen so intently?'"
						"\nYou say this before looking off into the distance and elevating the tone of your voice."
						"\n'Doth the morning dove not weep when the bewitching light of the sunrise overcomes the cold, harsh cage"
						"\nthat is the dead of night?'"
						"\nYou then look to Matty Fresh as if to expect that he has an answer to your question."
						"\n'The answer, dear people... The answer is yes, and so should all of you do as the dove does."
						"\nLife, my friends, life is beautiful.'"
						"\n"
						"\nMatty Fresh:"
						"\nA single tear escapes Matty Fresh's eye before quickly brushes it away and adjusts himsefl accordingly"
						"\n'That in itself was beautiful, " << get_user_name() << ". Your message was rather poetic. While it might"
						"\nnot have been what any of us expected, it was a perfect choice of words. Thank you for telling us that and"
						"\nthank you for coming on to the show.'"
						"\nMatty Fresh blinks his eyes so that he may stop any other tears from appearing. He gives you a thumbsup"
						"\nfor your unexpected response."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_End_Interview();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 4, add a silence value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "4")
				{
					answers_silence += 1;
					system("cls");
					cout <<
						"\nYou chose the [Silence] answer."
						"\n"
						"\nYou:"
						"\nYou stroke your chin as if you're thinking about what to say, but you never open your mouth to speak."
						"\n'........'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh waits a few minutes in case you do speak and then takes it upon himself to end the questioning."
						"\n'I was wondering if you were going to say something or if you just had an irresistable itch on your chin.'"
						"\nYou hear a laughing track playing in the background as Matty Fresh rolls his eyes."
						"\n'If you don't have any final words for the audience, that is alright too. It was still very nice to have you"
						"\nfor an interview. Even if you decided to not give me an answer.'"
						"\nMatty Fresh taps his pen on his desk and gives you a look of disappointment for leaving him hanging like that."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_End_Interview();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters in invalid input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nPlease pick one of the numbers listed."
						"\n";
					continue;
				}
			}

		}

		//If the script was NOT chosen in the previous section, run this block of code.
		//Replace all Prepared answers with [LOCKED] 
		//Do not let the user pick a locked answer.
		else
		{
			//GUI ANSWER CODE FOR INTERVIEW QUESTION 1
			//Create a while loop to run until the user puts in useful input.
			bool answer_exception_q1 = true;
			while (answer_exception_q1 == true)
			{
				cout <<
					"\n"
					"\n"
					"\n"
					"\nAnswers"
					"\n~ ~ ~ ~"
					"\n1. [LOCKED]"
					"\n2. [Safe]"
					"\n3. [Goofy]"
					"\n4. [Silence]"
					"\n"
					"\n. . ."
					"\n>";

				//Allow the user to enter an answer.
				cin.getline(answer_chosen, 50);

				//If the user enters a 1, send the user back to the answer list and continue the loop.
				if (string(answer_chosen) == "1")
				{

					cout <<
						"\nYou chose a [LOCKED] answer."
						"\nThis answer is unavailable, please choose a different one.";
					continue;

				}

				//If the user enters a 2, add a safe value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "2")
				{
					answers_safe += 1;
					system("cls");
					cout <<
						"\nYou chose the [Safe] answer."
						"\n"
						"\nYou:"
						"\n'Uhh yes well my name is, " << get_user_name() << ", and I am the person who wrote King of Aces.'"
						"\n'I... like write in my spare time a lot. I listen to music and work out. What else do I like to do..."
						"\nYeah, that's about all I can think of right now.'"
						"\n"
						"\nMatty Fresh:"
						"\n'Hey that's fine, it sounds like you spend your free time well. I want to say thanks again, "
						"\n" << get_user_name() << ", for coming onto the show. I'm sure this talk will be just alright.'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q2();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 3, add a goofy value, end the loop, and continue the interview.
				//For extra flavor, change the user's name to Sir Adhemar, for picking this answer.
				else if (string(answer_chosen) == "3")
				{
					string new_username = "Sir Adhemar";
					set_user_name(new_username);

					answers_goofy += 1;
					system("cls");
					cout <<
						"\nYou chose the [Goofy] answer."
						"\n"
						"\nYou:"
						"\n'Of course, my name is Sir Adhemar of the Summer and I am on an epic quest to save the emerald queen.'"
						"\nYou look off to the distance at a crewmember manning a camera and begin gesturiung them."
						"\n'You there, squire! Fetch me the finest ale on tap. I must rest up before I am to set off my grand"
						"\nadventure!'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh makes a face, surprised, that you've decided to go completely off script. He smirks and tries"
						"\nto remedy the situation."
						"\n'Oh this must be one of your own portrayals of the main character from your book! Ahh bravo, good show, a"
						"\nvery good show. I wasn't expecting you to pull that out of your hat. This.. this should be an interesting'"
						"\nevening that's for sure."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q2();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 4, add a silence value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "4")
				{
					answers_silence += 1;
					system("cls");
					cout <<
						"\nYou chose the [Silence] answer."
						"\n"
						"\nYou:"
						"\nYou stare blankly into Matty Fresh's eyes, completely ignoring his question."
						"\n'........'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh clears his throat before beginning to speak."
						"\n'A little shy are we? That's ok, not everyone knows the amount of pressure you're going through. Especially"
						"\nas you sit here with the whole world watching you speak. Well, if you did speak.'"
						"\nHe says this with a smile, as a laughing track plays in the background in response to the joke."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q2();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters invalid input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nPlease pick one of the numbers listed."
						"\n";
					continue;
				}
			}



			//GUI ANSWER CODE FOR INTERVIEW QUESTION 2
			//Create a while loop to run until the user puts in useful input.
			bool answer_exception_q2 = true;
			while (answer_exception_q2 == true)
			{
				cout <<
					"\n"
					"\n"
					"\n"
					"\nAnswers"
					"\n~ ~ ~ ~"
					"\n1. [LOCKED]"
					"\n2. [Safe]"
					"\n3. [Goofy]"
					"\n4. [Silence]"
					"\n"
					"\n. . ."
					"\n>";

				//Allow the user to enter an answer.
				cin.getline(answer_chosen, 50);

				//If the user enters a 1, send the user back to the answer list and continue the loop.
				if (string(answer_chosen) == "1")
				{

					cout <<
						"\nYou chose a [LOCKED] answer."
						"\nThis answer is unavailable, please choose a different one.";
					continue;

				}

				//If the user enters a 2, add a safe value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "2")
				{
					answers_safe += 1;
					system("cls");
					cout <<
						"\nYou chose the [Safe] answer."
						"\n"
						"\nYou:"
						"\n'Good question, so...'"
						"\nYou trail off and tilt your head up thinking about what to say next."
						"\n'I had this idea that wanted to tell this great story and I finally decided to act on it. The"
						"\nmain inspiration came from a variety of medieval books that I read over the years. I couldn't"
						"\ntell you the name of them off the top of my head. I also used my life as an inspiration, lots"
						"\nof stuff from there.'"
						"\n"
						"\nMatty Fresh:"
						"\n'I see, I might be a little confused though. Are you suggesting this book also serves as an"
						"\nautobiography of sorts as well? If that is correct, I like that is very profound.'"
						"\nMatty Fresh says this as he looks at you. You notice in his expression that he can tell you"
						"\nmay not have been prepared for this interview."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q3();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 3, add a goofy value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "3")
				{
					answers_goofy += 1;
					system("cls");
					cout <<
						"\nYou chose the [Goofy] answer."
						"\n"
						"\nYou:"
						"\nYou look at Matty Fresh with a puzzled expression on your face."
						"\n'Well that's a strange question that you have asked. What do you mean what was my inspiration? The"
						"\nemerald queen is the fairest lady in all the land. It is my knightly responsiblity...'"
						"\nYou stand up, make a fist, and place it on your chest."
						"\n'to save her grace and rid the evil that plagues this sacred land.'"
						"\nAfter your grand peformance, you take your seat and sit back down."
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh looks to the camera with his eyes widened and then turns back to you."
						"\n'Of course, just like how it's written in the book! I guess the inspiration stemmed from a personal"
						"\nsense of chivalry then? Is that it?'"
						"\nMatty Fresh asks you this while giving you a stern look. From his body language, he's questioning"
						"\nwhat it is that you're doing."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q3();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 4, add a silence value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "4")
				{
					answers_silence += 1;
					system("cls");
					cout <<
						"\nYou chose the [Silence] answer."
						"\n"
						"\nYou:"
						"\nAfter Matty Fresh asks his question, you break eye contact and start looking aimlessly around the"
						"\nroom."
						"\n'........'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh tugs his shirt collar and tries to think of something to clever to say."
						"\n'Silence hmm. I wonder, is this some sort message. Are you trying to tell us the answer by not"
						"\nsaying anything? Does that mean that there is no inspiration, that the narrative just came to be?'"
						"\nHe says this with a curious look in his eyes. It's clear that to him that you're either tugging his"
						"\nleg, or you're at a complete loss of words."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q3();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters invalid input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nPlease pick one of the numbers listed."
						"\n";
					continue;
				}
			}



			//GUI ANSWER CODE FOR INTERVIEW QUESTION 3
			//Create a while loop to run until the user puts in useful input.
			bool answer_exception_q3 = true;
			while (answer_exception_q3 == true)
			{
				cout <<
					"\n"
					"\n"
					"\n"
					"\nAnswers"
					"\n~ ~ ~ ~"
					"\n1. [LOCKED]"
					"\n2. [Safe]"
					"\n3. [Goofy]"
					"\n4. [Silence]"
					"\n"
					"\n. . ."
					"\n>";

				//Allow the user to enter an answer.
				cin.getline(answer_chosen, 50);

				//If the user enters a 1, send the user back to the answer list and continue the loop.
				if (string(answer_chosen) == "1")
				{

					cout <<
						"\nYou chose a [LOCKED] answer."
						"\nThis answer is unavailable, please choose a different one.";
					continue;

				}

				//If the user enters a 2, add a safe value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "2")
				{
					answers_safe += 1;
					system("cls");
					cout <<
						"\nYou chose the [Safe] answer."
						"\n"
						"\nYou:"
						"\n'My favorite part of the whole book? Uhhh..'"
						"\nYou dart your eyes to the ceiling as you ponder the question."
						"\n'It's honestly really tough, I love the story as a whole. I couldn't tell you if I had a favorite"
						"\npoint. I've written the story from beginning to end and it's all been a wild ride up to this point."
						"\nSorry if that doesn't answer your question.'"
						"\nYou say as you scratch the bnack of your head."
						"\n"
						"\nMatty Fresh:"
						"\n'That's ok, I suppose that's understandable. I was just curious and I know many others were as well"
						"\nif there was one part in particular or not.'"
						"\nSays Matty Fresh as he lets out a slight sigh."
						"\nYou may not have given a specific part, but you did answer the question."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q4();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 3, add a goofy value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "3")
				{
					answers_goofy += 1;
					system("cls");
					cout <<
						"\nYou chose the [Goofy] answer."
						"\n"
						"\nYou:"
						"\n'Hmm, that's a trivial question you ask, peasant.'"
						"\nYou adjust your posture to be as straight as can be in your chair. You look off to the distance in"
						"\nthought."
						"\n'I'm not sure if I have a favorite moment, but there is an interesting one that fascinates me so. At one'"
						"\nin my journey I came across an evil, eldritch knight. We were at a crossroads and battle was inevitable."
						"\nAs the duel finally broke out, my blade struck true and I chopped my opponent's arm clean off! Blood"
						"\neverywhere and to my surprise, he kept fighting. He told me it was but a flesh wound!'."
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh with his jaw open, looks at you in bewilderment, before closing it again."
						"\n'That's... that's very discriptive, " << get_user_name() << ". Thank you for telling us in such great detail."
						"\nThat was... wow.'"
						"\nMatty Fresh breaks eye contact with you and turns to the camera. He grimaces before speaking"
						"\n'Well you heard it here first folks, straight from the horse's mouth. Shall we move on to next question?'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q4();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 4, add a silence value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "4")
				{
					answers_silence += 1;
					system("cls");
					cout <<
						"\nYou chose the [Silence] answer."
						"\n"
						"\nYou:"
						"\nAfter Matty Fresh asks you the question, you close your eyes and refuse to open them until the next"
						"\nquestion."
						"\n'........'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh notices your odd behavior and after waiting a little bit, attempts to get your attention again. He"
						"\ntaps his desk, whistles, and snaps his fingers before giving up."
						"\n'Well this is unusual. I didn't know if you were thinking of a specific moment or perhaps not.'"
						"\nMatty Fresh who is beginning to sweat nervously, turns to the camera."
						"\n'Well it appears that I have stumped our guest, it looks they may not be able to answer. Anyways, moving on...'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q4();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters invalid input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nPlease pick one of the numbers listed."
						"\n";
					continue;
				}
			}


			//GUI ANSWER CODE FOR INTERVIEW QUESTION 4
			//Create a while loop to run until the user puts in useful input.
			bool answer_exception_q4 = true;
			while (answer_exception_q4 == true)
			{
				cout <<
					"\n"
					"\n"
					"\n"
					"\nAnswers"
					"\n~ ~ ~ ~"
					"\n1. [LOCKED]"
					"\n2. [Safe]"
					"\n3. [Goofy]"
					"\n4. [Silence]"
					"\n"
					"\n. . ."
					"\n>";

				//Allow the user to enter an answer.
				cin.getline(answer_chosen, 50);

				//If the user enters a 1, send the user back to the answer list and continue the loop.
				if (string(answer_chosen) == "1")
				{

					cout <<
						"\nYou chose a [LOCKED] answer."
						"\nThis answer is unavailable, please choose a different one.";
					continue;

				}

				//If the user enters a 2, add a safe value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "2")
				{
					answers_safe += 1;
					system("cls");
					cout <<
						"\nYou chose the [Safe] answer."
						"\n"
						"\nYou:"
						"\n'Is there a possiblity of a sequel? Uhh... I'm not sure, I've not given it much thought.'"
						"\nYou appear to be caught off guard, but recompose yourself."
						"\n'I guess it's possible I could write another book, we'd honestly have to see.'"
						"\nYou say this with a nervous chuckle."
						"\n'I really like the story so I think I'd be ok with continuing it.'"
						"\n"
						"\nMatty Fresh:"
						"\n'You've got a lot of confidence it seems...'"
						"\nMatty Fresh says this with a sarcastic tone. Afterwards, he turns to the camera and lets out"
						"\na disappointed sigh."
						"\n'From what it sounds like, I wouldn't get your hopes up too high for a sequel.'"
						"\nMatty Fresh turns back to you."
						"\nI think I can speak for the thousands watching, we all really like the story, that's for sure."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q5();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 3, add a goofy value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "3")
				{
					answers_goofy += 1;
					system("cls");
					cout <<
						"\nYou chose the [Goofy] answer."
						"\n"
						"\nYou:"
						"\nAfter hearing the question, you give Matty Fresh a smirk."
						"\nWill there be a sequel to my quest? Of course there will be."
						"\nYou raise your tone, almost to the point of yelling."
						"\n'Wherever there might be evil, I " << get_user_name() << ", will be there to vanquish it! A knight's duty is"
						"\nto protect those who may not be able to protect themselves. As such a knight, this is my duty. I will always"
						"\nprevail!'"
						"\nYou lean back in your chair after announcing your declaration."
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh tries to clear his throat while attempting to make sense of your outburst."
						"\n'That's something. I'm assuming by your speech, that means that a sequel could very well be in the works? Very"
						"\nexciting, very exciting indeed.'"
						"\nMatty Fresh wipes the nervous sweat off his forehead before turning to the camera."
						"\n'I'm sure none of us were expecting to hear that this evening. What a surprise that was...'"
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q5();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 4, add a silence value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "4")
				{
					answers_silence += 1;
					system("cls");
					cout <<
						"\nYou chose the [Silence] answer."
						"\n"
						"\nYou:"
						"\nOnce Matty Fresh finishes the question, you take the pen off his desk and start playing around with it."
						"\n'........'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh is visibly confused, wondering why you've decided to not pay attention to the question."
						"\nHe opens his mouth as if to say something then closes it again briefly."
						"\n'Alrigh then, well I'm not sure what that's supposed to mean. Is this fumbling with my pen, a sign that you'"
						"\nwould still like to continue writing?'"
						"\nMatty Fresh turns to the camera, it's obvious that he's trying his best to handle your silence."
						"\n'Your guess is as good as mine folks. Whether there is a sequel or not, it seems only time will tell."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_Interview_Q5();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters invalid input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nPlease pick one of the numbers listed."
						"\n";
					continue;
				}
			}



			//GUI ANSWER CODE FOR INTERVIEW QUESTION 5
			//Create a while loop to run until the user puts in useful input.
			bool answer_exception_q5 = true;
			while (answer_exception_q5 == true)
			{
				cout <<
					"\n"
					"\n"
					"\n"
					"\nAnswers"
					"\n~ ~ ~ ~"
					"\n1. [LOCKED]"
					"\n2. [Safe]"
					"\n3. [Goofy]"
					"\n4. [Silence]"
					"\n"
					"\n. . ."
					"\n>";

				//Allow the user to enter an answer.
				cin.getline(answer_chosen, 50);

				//If the user enters a 1, send the user back to the answer list and continue the loop.
				if (string(answer_chosen) == "1")
				{

					cout <<
						"\nYou chose a [LOCKED] answer."
						"\nThis answer is unavailable, please choose a different one.";
					continue;

				}

				//If the user enters a 2, add a safe value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "2")
				{
					answers_safe += 1;
					system("cls");
					cout <<
						"\nYou chose the [Safe] answer."
						"\n"
						"\nYou:"
						"\n'Final words, I wish I had something clever to say, but sadly I don't.'"
						"\nYou say this with a shrug of the shoulders."
						"\n'Uhh.. Don't let your dreams be dreams kids and.. stay and school my friends!'"
						"\nYou say this and than give Matty Fresh a nod, letting him know you're finished."
						"\n"
						"\nMatty Fresh:"
						"\n'I see, perhaps cliche things to say, but important ones nonetheless.'"
						"\nMatty Fresh quickly gets his things together on his desk in preparation to end the interview before"
						"\nlooking back to you."
						"\n'Well listen, I " << get_user_name() << ", it's been a pleasure having you on the show. I'm so glad you"
						"\ncould make it."
						"\nHe says this in monotone and you sense he's disappointed in your reply."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_End_Interview();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 3, add a goofy value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "3")
				{
					answers_goofy += 1;
					system("cls");
					cout <<
						"\nYou chose the [Goofy] answer."
						"\n"
						"\nYou:"
						"\n'What final words could I offer the townspeople that listen so intently?'"
						"\nYou say this before looking off into the distance and elevating the tone of your voice."
						"\n'Doth the morning dove not weep when the bewitching light of the sunrise overcomes the cold, harsh cage"
						"\nthat is the dead of night?'"
						"\nYou then look to Matty Fresh as if to expect that he has an answer to your question."
						"\n'The answer, dear people... The answer is yes, and so should all of you do as the dove does."
						"\nLife, my friends, life is beautiful.'"
						"\n"
						"\nMatty Fresh:"
						"\nA single tear escapes Matty Fresh's eye before quickly brushes it away and adjusts himsefl accordingly"
						"\n'That in itself was beautiful, " << get_user_name() << ". Your message was rather poetic. While it might"
						"\nnot have been what any of us expected, it was a perfect choice of words. Thank you for telling us that and"
						"\nthank you for coming on to the show.'"
						"\nMatty Fresh blinks his eyes so that he may stop any other tears from appearing. He gives you a thumbsup"
						"\nfor your unexpected response."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_End_Interview();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters a 4, add a silence value, end the loop, and continue the interview.
				else if (string(answer_chosen) == "4")
				{
					answers_silence += 1;
					system("cls");
					cout <<
						"\nYou chose the [Silence] answer."
						"\n"
						"\nYou:"
						"\nYou stroke your chin as if you're thinking about what to say, but you never open your mouth to speak."
						"\n'........'"
						"\n"
						"\nMatty Fresh:"
						"\nMatty Fresh waits a few minutes in case you do speak and then takes it upon himself to end the questioning."
						"\n'I was wondering if you were going to say something or if you just had an irresistable itch on your chin.'"
						"\nYou hear a laughing track playing in the background as Matty Fresh rolls his eyes."
						"\n'If you don't have any final words for the audience, that is alright too. It was still very nice to have you"
						"\nfor an interview. Even if you decided to not give me an answer.'"
						"\nMatty Fresh taps his pen on his desk and gives you a look of disappointment for leaving him hanging like that."
						"\n"
						"\n"
						"\n(c) to continue."
						"\n. . ."
						"\n>";

					//Use the exception framework for (c) input for transition
					while (sec_two_exception == true)
					{
						cin.getline(sec_two_continue, 50);
						if (string(sec_two_continue) == "(c)")
						{
							Sleep(5 * 1000);
							system("cls");
							Section_End_Interview();
							break;
						}

						else
						{
							//If the user does not enter suitable input, loop back.
							cout <<
								"\n"
								"\nI'm sorry that is not a valid input option."
								"\nPlease enter (c) to continue."
								"\n"
								"\n>";
							continue;
						}
					}
					//Break out of the first while loop for the next question.
					break;
				}

				//If the user enters invalid input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nPlease pick one of the numbers listed."
						"\n";
					continue;
				}
			}
		}

		//CODE FOR ENDING SECTiON TWO AND BEGINNING SECTION 3
		//Don't forget to pass all 4 answer values to be used for the ending!
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_two_exception == true)
		{
			cin.getline(sec_two_continue, 50);
			if (string(sec_two_continue) == "(c)")
			{
				cout <<
					"\nYou stand up from your chair and you notice a cold feeling under your arms. You had been"
					"\nsweating the entire time up there. After collecting your things, you head back down to the"
					"\nparking lot and reach your gray sedan. With a turn of the keys, the car turns on, and you"
					"\nmake your way back home...";
				Sleep(13 * 1000);
				system("cls");
				Section_Three().Section_Three_Content(answers_prepared, answers_safe, answers_goofy, answers_silence);
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}

	}

};


//Handles all content within Section 1.
class Section_One {

	//Define member functions of the class.
public:

	//Section One Free Roam - Easter Egg Additional Text
	void Free_Roam_EE() {

		cout <<
			"\n"
			"\nYou finally login to your computer and open the browser. What seems like thousands of news"
			"\narticles and advertisements appear and overwhelm you. After a brief glance nothing seems"
			"\nto pop out, except for one thing."
			"\n"
			"\n'Soup's Soups!"
			"\nCome on down to your local Soup's Soups store and try one of our amazing flavors!"
			"\nWe're sure you'll be Souprised by our selection!'"
			"\n"
			"\n"
			"\nThe advertisement makes you chuckle with as you close your laptop and get up off the floor..."
			"\n"
			"\n";
	}

	//Section One's Introduction. (1.0)
	void Introduction() {

		cout <<
			"~ Main Character Information ~"
			"\nName: " << get_user_name() <<
			"\nProfession: Book Author"
			"\nLevel of Fame: Very High"
			"\n"
			"\nAdditional Information:"
			"\nYou're a young adult who just recently released a book that was a smash hit."
			"\nIt has allowed you to gain so much fame, that one of the most well-known,"
			"\nlate night talk show hosts has invited you to a live interview."
			"\nThe story begins one night before your big evening...";
	}

	//Beginning story for Section One (1.2)
	void Section_Beginning() {

		cout <<
			"-- One night before the Interview --"
			"\n"
			"\nThe time is 10:15 pm."
			"\nYou have just finished spending your evening with some of your friends. To celebrate your accomplishments,"
			"\nyour buddy Silas wanted to treat you and the guys to a popular pub that's opened recently."
			"\nIt was called 'The End of The Lime'. Since you drove alone though, the only drinks you had were virgins."
			"\nAfter a night of merriment and revelry, you decided to leave a little early."
			"\nYour friends told you they understood, especially since you had your big evening the next night."
			"\nA one on one interview with the devilishly handsome and charismatic, Matty Fresh."
			"\nThis event has been on your mind for weeks and this one of the last moments of free time"
			"\nyou'll have left before it."
			"\n"
			"\nThe question is, how will you spend your last evening?";
	}

	//Section One Story (1.4)
	void Section_Beg_Continued() {

		cout <<
			"-- One night before the Interview --"
			"\n"
			"\nThe time is 10:30 pm."
			"\nAfter a calm drive home, you pull up to a rustic-looking brick building. The sign outside says"
			"\n'Artisan Acres'. It's not the most lavish place you could be staying, but it's what you can afford."
			"\nFor now at least, with the recent success of your book, things could begin to turn up for you."
			"\nAs you exit your trusty gray sedan, you walk into the apartment building and up the rickety stairs"
			"\nto your room. Upon climbing the stairs, you stand before a door labeled '#212', your own room.";
	}

	//Section One Story (1.6)
	void Section_Beg_Apartment() {

		cout <<
			"-- Entering Free Roam --"
			"\n"
			"\nThe time is 10:35 pm."
			"\nAfter unlocking the door, you step into your room and close the door behind you."
			"\nBefore you STRAIGHT ahead, you see your queen-sized bed at the back of your room, next to an open window."
			"\nTo the RIGHT, you see your desk with a lit lamp, that acts as your study. From a brief glimpse,"
			"\nyou see a newspaper placed on the center of the desk, glowing in the light from the lamp."
			"\nTo your LEFT, you see a short hallway to your kitchen, with another door on the right of said hallway,"
			"\nleading to your bathroom. BELOW you, you notice your laptop laying to the side of the wall on the ground."
			"\n"
			"\nThis begins the first 'free roam' portion of the game. You are free to explore your apartment and find things"
			"\nthat may provide extra context to the story, or help you later on."
			"\n"
			"\nInstructions: In order to move around the room, specify the direction you want to go."
			"\nWhen you approach things that you can inspect, enter the necessary command to inspect them."
			"\nHINT: Interactable objects are marked with (*)";
	}

	//Section One Story (1.8)
	//Primary Section One Free Roam Exit
	void Section_End_Apartment() {

		cout <<
			"\n-- Exiting Free Roam --"
			"\n"
			"\nThe time: Unknown"
			"\nAfter roaming around your room for a bit, you decide you've stayed up long enough and want"
			"\nto go to bed. As you finish slipping into your pjs, you lay in your bed, pulling the covers"
			"\nand blue bedspread over your body. It's rather warm but there's cool gusts of wind from the"
			"\nopen window that occasionally blow against your face. The cool breeze makes it perfectly"
			"\ncomfortable for you to close your eyes, and drift into a deep sleep. After about 7 minutes"
			"\nor so, you're out like a light.";
	}

	//Section One Story (1.8)
	//Alternate Section One Free Roam Exit - Sleep action chosen
	void Section_End_Apartment_Sleep() {

		cout <<
			"\n-- Exiting Free Roam --"
			"\n"
			"\nThe time is 11:15 pm."
			"\nAfter an evening out with your friends, you decide to head to have an early night and"
			"\nhead to bed. Tomorrow is the moment you've been waiting for. An interview with the esteemed"
			"\npresenter, Matty Fresh. People who have appeared on the show have had their careers boom not"
			"\nlong after. The thought of this stays in your mind as you climb into bed and turn off the"
			"\nlight. Finally, you slowly drift into a quiet slumber.";
	}


	//Handles the functions within the Section 1 class.
	void Section_One_Content() {

		//Create a single input variable to be used  in Section 1 when the user is asked to enter (c)
		char sec_one_continue[50];

		//Initialize a boolean variable to be used in tandem with while loops for input exceptions.
		bool sec_one_exception = true;


		//Begin Section 1, starting with the introduction. 
		Introduction();

		//Allow the user to read the intro and then ask them to enter "(c)".
		//Clear Screen/Proceed with beginning the story.
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_one_exception == true)
		{
			cin.getline(sec_one_continue, 50);
			if (string(sec_one_continue) == "(c)")
			{
				system("cls");
				Section_Beginning();
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}


		//Allow the user to read the Section beginning and then ask them to enter "(c)".
		//Clear Screen/Proceed with telling the story.
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_one_exception == true)
		{
			cin.getline(sec_one_continue, 50);
			if (string(sec_one_continue) == "(c)")
			{
				cout <<
					"\nYou exit the pub and get into your gray sedan."
					"\nWith a turn of the keys, you begin the drive home...";
				Sleep(9 * 1000);
				system("cls");
				Section_Beg_Continued();
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}


		//Allow the user to read the Section beginning cont. and then ask them to enter "(c)".
		//Clear Screen/Proceed with beginning the free-roam area of the story.
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_one_exception == true)
		{
			cin.getline(sec_one_continue, 50);
			if (string(sec_one_continue) == "(c)")
			{
				cout <<
					"\nYou jumble the mess of keys that you pulled from your pocket."
					"\nAfter managing to find the right key, the lock is unlocked. You enter your room.";
				Sleep(9 * 1000);
				system("cls");
				Section_Beg_Apartment();
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}


		//Allow the user to read the Section Beginning Apartment text and then ask them to enter "(c)".
		//Clear Screen/Proceed with free-roam area of the story.
		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_one_exception == true)
		{
			cin.getline(sec_one_continue, 50);
			if (string(sec_one_continue) == "(c)")
			{
				Sleep(5 * 1000);
				system("cls");
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}


		//The following code handles the actions that the user may use
		//while in the free roam apartment section.

		//Create a variable to be used restricting the user to go below only one time. 
		bool below_available = true;

		//Create a variable to handle the direction the user wants to go in the room.
		//Create another variable to handle the action that the user wants to make.
		char direction_went[50];
		string directions_right("right");
		string directions_straight("straight");
		string directions_left("left");
		string directions_below("below");


		char action_chosen[50];
		string actions_note("notebook");
		string actions_news("newspaper");
		string actions_sleep("sleep");
		string actions_pamp("pamphlet");
		string actions_kit("kitchen");
		string actions_bath("bathroom");
		string actions_login("login");


		//Variables necessary to story development.
		string sleep_chosen;
		bool script_chosen = false;


		//Use a For loop to cycle through each possible action.
		//After each action, a variable will count the total actions made.
		for (int actions_made = 0; actions_made < 10; actions_made++) {
			//If user does each action once/num actions runs out, then proceed with Section 2 of game.
			//If user uses the "sleep" action, then proceed with Section 2 of game.
			cout <<
				"\n"
				"-- Free Roam --"
				"\n"
				"\nCurrent Position: Center of Room."
				"\nYou stand at the center of the room. What would you like to do?"
				"\n"
				"\nPossible directions to go include:"
				"\nStraight, Left, Right, and Below"
				"\n"
				"\nReminder: Enter a [verb] then a [direction]"
				"\nie. Go straight, check below, etc."
				"\nThis goes for interacting with objects(*) too."
				"\n"
				"\n. . ."
				"\n>";

			//Allow the user to enter a direction.
			cin.ignore();
			cin.getline(direction_went, 50);
			//for_each(direction_went.begin(), direction_went.end(), to_lowercase);


			//The following code handles the right side of the room.
			if (string(direction_went).find(directions_right) != string::npos)
			{
				cout <<
					"\n"
					"\nCurrent Position: Study, in front of your desk."
					"\nYou are now facing your desk, the very work area that you drafted and created your literary"
					"\nmasterpiece. Before you lies the newspaper(*) on the center of your desk, that you collected from"
					"\nearlier in the week. It details your accomplishment and the public's current view of it."
					"\nTo the right, hanging off your desk, is your notebook(*) in which you wrote all your plot twists"
					"\nand story ideas."
					"\n"
					"\n. . ."
					"\n>";

				cin.getline(action_chosen, 50);

				//Code for if the user wants to look at the notebook.
				if (string(action_chosen).find(actions_note) != string::npos)
				{
					cout <<
						"\n"
						"\nYou reach for your notebook and pick it up from your desk. It has a leather bound cover with"
						"\na design etched in on the front. A pencil and pen crossed, over a piece of paper. Upon opening"
						"\nthe notebook there's a dusty smell that's released, almost causing you to sneeze. Scrolling through"
						"\nthe pages, it's clear you spent a lot of time drafting and coming up with ideas for your story."
						"\nEventually you stop at random, at page 87, it contains a list of names you'd considered to title"
						"\nyour book. There's a large number of them, but it looks like one of them is circled in black ink."
						"\n'King of Aces'. It seemed like a good a good title and judging by the success of your book,"
						"\nit seems the population agrees. After reminiscing a little longer in your notebook, you decide to"
						"\nfind it a nice place on a nearby bookshelf."
						"\n"
						"\n"
						"\nAfter putting away your notebook, you return to the center of the room to do something new..."
						"\n"
						"\n";
				}
				//Code for if the user wants to look at the newspaper
				else if (string(action_chosen).find(actions_news) != string::npos)
				{
					cout <<
						"\n"
						"\nYou reach for the newspaper and pick it up from the center of your desk. You decide to open it up"
						"\nand read paper over once again. As your eyes move left to right, searching for your spot, you see a"
						"\ncouple other articles that you didn't realize were there. 'Crazed Woman RUINS Pie Eating Contest'."
						"\nAnother one that catches your eye, 'Lioness FIRST to Leave Litter of 9 Cubs, Pictures Included!'"
						"\nDespite how interesting they might be, you decide to look past them as you finally find the article"
						"\nyou're looking for. 'Unknown Author Writes/Publishes a Poetic Gem!' The text talks about young writer"
						"\npreviously unknown to the world. After creating and sharing their story with millions, they are now"
						"\nunder the spotlight. So begins their path to fame, the world waits to see what they might do next."
						"\nReading the paper another time, brings a smile to your face. As much as you'd like to read on, you"
						"\nnotice it's getting late and decide to place the newspaper back on the desk."
						"\n"
						"\n"
						"\nAfter putting away the newspaper, you return to the center of the room to do something new..."
						"\n"
						"\n";
				}
				//If the user enters unacceptable input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nYou decide to return to the center of the room."
						"\n";
					continue;
				}
			}

			//The following code handles the part of the room, straight from the center.
			else if (string(direction_went).find(directions_straight) != string::npos)
			{
				cout <<
					"\n"
					"\nCurrent Position: Sleeping area, in front of your bed."
					"\nYou are now facing your queen-sized bed, the place in which you sleep(*)."
					"\nIt is is conveniently placed next to the open window for a nice breeze. You've had this bed for awhile,"
					"\nit's quite comfy. Upon it is a colorful, velvety, patchwork bedspread with 2 white fluffy pillows"
					"\non each side. At the foot of your bed, you see a small pamphlet(*) of papers with the top page labled"
					"\n'IMPORTANT. Talk Show Script'."
					"\n"
					"\n. . ."
					"\n>";

				cin.getline(action_chosen, 50);

				//Code for if the user considers going to bed.
				if (string(action_chosen).find(actions_sleep) != string::npos)
				{
					//Ask the user if they are sure they'd like to sleep now.
					cout <<
						"\n"
						"\nAre you sure you'd like to fall asleep?"
						"\n(y for yes/n for no)"
						"\n"
						"\n. . ."
						"\n>";

					cin >> sleep_chosen;

					if (sleep_chosen == "y" || sleep_chosen == "Y")
					{

						//End the action loop and begin running Section 2 content.
						//Send the value of script_chosen so Section 2 can access it.
						Section_End_Apartment_Sleep();

						cout <<
							"\n"
							"\n(c)"
							"\n. . ."
							"\n>";

						//Ignore the input of the previous input variable.
						cin.ignore();
						while (sec_one_exception == true)
						{
							cin.getline(sec_one_continue, 50);
							if (string(sec_one_continue) == "(c)")
							{
								cout <<
									"\nThe next evening is your interview with the esteemed host, Matty Fresh. Your reputation as a"
									"\nnew, famous author could hang in the balance. For now though, all that matters is getting a good"
									"\nnight's rest...";
								Sleep(11 * 1000);
								system("cls");
								Section_Two().Section_Two_Content(script_chosen);
								break;
							}

							else
							{
								//If the user does not enter suitable input, loop back.
								cout <<
									"\n"
									"\nI'm sorry that is not a valid input option."
									"\nPlease enter (c) to continue."
									"\n"
									"\n>";
								continue;
							}
						}

					}
					//If the user says no to sleep or enters invalid input.
					else
					{
						cout <<
							"\n"
							"\n"
							"\nYou decide you want to stay up a little bit longer and return to the center of the room"
							"\n"
							"\n"
							"\n";
					}
				}
				//Code for if the user wants to look at the script.
				else if (string(action_chosen).find(actions_pamp) != string::npos)
				{
					cout <<
						"\n"
						"\nYou bend over your bed and pick up the pamphlet, laying on your bedspread. Upon close examination,"
						"\nit appears to be the script that the late night show sent you to look over. You decide to sit down"
						"\non your bed and read over the script. It contains a list of questions and suitable answers to reply"
						"\nwith. There's an estimation of how long the interview will last and when the commercial breaks will"
						"\nbe held. Flipping through the pages, a part of you thinks it was definitely worth picking up the"
						"\nscript. You now have a better idea of how the interview is designed to go. To make sure you"
						"\ndon't lose it, you place the script with your belongings, next to the door for tomorrow."
						"\n"
						"\n~ You have a feeling you made an important decision. ~"
						"\n"
						"\nAfter tucking away the pamphlet, you return to the center of the room to do something new..."
						"\n"
						"\n";

					//Changed the script_chosen status as True.
					script_chosen = true;

				}
				//If the user enters unacceptable input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nYou decide to return to the center of the room."
						"\n";
					continue;
				}
			}

			//The following code handles left part of the room.
			else if (string(direction_went).find(directions_left) != string::npos)
			{
				cout <<
					"\n"
					"\nCurrent Position: Left Hallway, leading to your kitchen and bathroom."
					"\nYou are now standing in the small hallway to the left that goes two ways. The first way leads"
					"\ntoward the kitchen(*) where you can perhaps grab a bite to eat before bed. The second way"
					"\nleads toward the bathroom(*) to your right should you need to answer Nature's calling."
					"\n"
					"\n. . ."
					"\n>";

				cin.getline(action_chosen, 50);

				//Code for if the user decides to enter the kitchen.
				if (string(action_chosen).find(actions_kit) != string::npos)
				{
					cout <<
						"\n"
						"\nYou begin walking to the left, through the short hallway and past the bathroom, and into the"
						"\nkitchen. There's a small grumbling sound and you suddenly feel your stomach vibrating. It seems"
						"\nyou weren't full after your time at the bar. A brief glimpse in your rugged, white refigerator"
						"\nreveals a few empty shelves except for large pizza box. You pull the box out and find that there's"
						"\ntwo Hawaiian slices of pizza left. There's a smile on your face as you think to yourself, Hawaiian"
						"\nis your favorite kind of pizza. After finding a proper plate and heating up pizza, you pull up a chair"
						"\nat the kitchen table. It only takes a few minutes until the delicious, warm pizza is missing from"
						"\nyour plate, and loud belch escapes your mouth. As soon as you're finished, you pile your dishes in"
						"\nto your sink for later. 'What a hearty meal,' you think to yourself."
						"\n"
						"\n"
						"\nAs you turn off the lights in the kitchen, you return to the center of the room for something new..."
						"\n"
						"\n";
				}
				//Code for if the user decides to enter the bathroom.
				else if (string(action_chosen).find(actions_bath) != string::npos)
				{
					cout <<
						"\n"
						"\nAs you start to walk through the short hallway to the left, you stop before the kitchen and turn right."
						"\nIn front of you is the door to the bathroom. After the events of the bar, there is a part of you that"
						"\nfeels the need to answer Nature's call. It only takes a few moments, but you feel much more refreshed"
						"\nwhen you finish. Washing your hands, you get yourself a squeeze of coconut scented hand-soap on the"
						"\ncorner of your sink. As soon as you're done with that, the only thing left is to brush your teeth."
						"\nWith your rainbow toothbrush in one hand, and a dollop of Crest mint flavored toothpaste, you're good"
						"\nto go. A few minutes later, you leave the bathroom closing the door behind you. You smile to yourself"
						"\nrevealing your clean white teeth, thinking 'I really, really needed that.'"
						"\n"
						"\n"
						"\nWhen you're finished in the bathroom, you return to the center of the room for something new..."
						"\n"
						"\n";
				}
				//If the user enters unacceptable input.
				else
				{
					cout <<
						"\n"
						"\nInvalid entry."
						"\nYou decide to return to the center of the room."
						"\n";
					continue;
				}
			}

			//EASTER EGG
			//The following code handles the below area of the room.
			else if (string(direction_went).find(directions_below) != string::npos)
			{
				if (below_available == true)
				{
					cout <<
						"\n"
						"\nCurrent Position : The floor, sitting with your laptop on your lap."
						"\nYou now sit with your legs crossed with the light of your computer shining on you."
						"\nTo login(*), all that would be required is the correct username and password to be"
						"\nentered."
						"\n"
						"\n. . ."
						"\n>";

					cin.getline(action_chosen, 50);

					//Code for if the user decides to login to the laptop.
					if (string(action_chosen).find(actions_login) != string::npos)
					{
						//Change the value to false, banning the user from doing this action again. 
						below_available = false;
						char username_picked[50];
						cout <<
							"\n"
							"\nYou attempt to login, but as you try, something happens..."
							"\n"
							"\nERROR: Username does not exist."
							"\n"
							"\nYou sit in disbelief. Could all this stress you're going through have caused you to forget"
							"\nyour login? The thought dwells in your head as you click the 'Forgot Username?' button at"
							"\nthe bottom."
							"\n"
							"\nThinking of a new clever username, you look around your room. Something that catches your eye is the"
							"\npatchwork blanket you have on your bed. 'Patch' you think to yourself. 'Wouldn't that be a neat name?'"
							"\nYou enter the name 'Patch' into the provided text box and a series of other suggested uernames appear."
							"\n"
							"\n"
							"\nPossible Username Choices"
							"\n1. Patches"
							"\n2. Pumpkin Patch"
							"\n3. Patchy the Pirate"
							"\n"
							"\n"
							"\nWhich do you choose?"
							"\nDo you know?"
							"\n. . ."
							"\n>";

						cin.getline(username_picked, 50);

						//After receiving username input, allow the user to choose an option.
						//Then run the Free Roam - Easter Egg Additional Text
						if (string(username_picked).find("1") != string::npos)
						{
							cout <<
								"\n"
								"\nYou chose to go with the username 'Patches'"
								"\n"
								"\n-- The Internet --";
							Free_Roam_EE();
							continue;
						}
						else if (string(username_picked).find("2") != string::npos)
						{
							cout <<
								"\n"
								"\nYou chose to go with the username 'Pumpkin Patch'"
								"\n"
								"\n-- The Internet --";
							Free_Roam_EE();
							continue;
						}
						else if (string(username_picked).find("3") != string::npos)
						{
							cout <<
								"\n"
								"\nYou chose to go with the username 'Patchy the Pirate'"
								"\n"
								"\n-- The Internet --";
							Free_Roam_EE();
							continue;
						}
						else if (string(username_picked).find("no") != string::npos)
						{
							cout <<
								"\n"
								"\nYou chose to go with the username 'Patchidk'"
								"\n"
								"\n-- The Internet --";
							Free_Roam_EE();
							continue;
						}

						//If the user enters unacceptable input.
						else
						{
							cout <<
								"\n"
								"\nInvalid entry."
								"\nYou give up on logging in and return to the center of the room."
								"\n";
							continue;
						}
					}

					//If the user enters unacceptable input.
					else
					{
						{
							cout <<
								"\n"
								"\nInvalid entry."
								"\nYou decide to get up and return to the center of the room."
								"\n";
							continue;
						}
					}
				}

				//If the user has already accessed the laptop, then do not let them use it again.
				else
				{
					cout <<
						"\n"
						"\nYou think to yourself that you're done on the computer for now."
						"\nYou decide to remain in the center of the room."
						"\n";
					continue;
				}

			}

			//If the user enters unacceptable input.
			else
			{
				cout <<
					"\n"
					"\nInvalid entry."
					"\nYou decide to remain in the center of the room."
					"\n";
				continue;
			}

		}

		//If the user goes through all the allocated action attempts.
		//Before ending Section 1, pass status of script_chosen to Section 2.
		//Run Section_End_Apartment, then begin Section 2.
		Section_End_Apartment();

		cout <<
			"\n"
			"\n(c)"
			"\n. . ."
			"\n>";

		while (sec_one_exception == true)
		{
			cin.getline(sec_one_continue, 50);
			if (string(sec_one_continue) == "(c)")
			{
				cout <<
					"\nThe next evening is your interview with the esteemed host, Matty Fresh. Your reputation as a"
					"\nnew, famous author could hang in the balance. For now though, all that matters is getting a good"
					"\nnight's rest...";
				Sleep(11 * 1000);
				system("cls");
				Section_Two().Section_Two_Content(script_chosen);
				break;
			}

			else
			{
				//If the user does not enter suitable input, loop back.
				cout <<
					"\n"
					"\nI'm sorry that is not a valid input option."
					"\nPlease enter (c) to continue."
					"\n"
					"\n>";
				continue;
			}
		}

	}
};


int main() {

	//Set the title of the game window. 
	SetConsoleTitle(TEXT("Late Nights"));


	//Creat an instance of the first Section class.
	Section_One s_one;


	//Add a brief disclaimer mentioning this is a WIP game.
	cout <<
		"NOTE: This is a Work In Progress Game in its Beta Stage"
		"\nVersion: 0.5.1"
		"\n"
		"\nI hope you enjoy!"
		"\n"
		"\n"
		"\n";

	//Acquire the user's name before, greeting and beginning the program.
	//Update the public username function so the whole game has access.
	char user_name[50];
	cout <<
		"Please enter your name:"
		"\n>";
	cin.getline(user_name, 50);
	set_user_name(user_name);
	system("cls");


	//Greet the player and welcome them to the game.
	cout <<
		"Hello " << user_name << " and welcome to Late Nights."
		"\nPlease select an option from the menu."
		"\n";

	//Call the Main Menu function to display main menu for the game.
	Main_Menu();

	//Get and handle user input.
	char user_input[50];

	bool menu_exception = true;
	while (menu_exception == true)
	{
		cin.getline(user_input, 50);

		if (string(user_input) == "1")
			//If user picks 1, display the tutorial screen.
			//After the user is finished, start the game and clear screen.
			//Sleep is used to simulate the game loading.
		{
			Tutorial();
			cout <<
				"\n"
				"\n. . ."
				"\n>";

			bool tut_exception = true;
			while (tut_exception == true)
			{

				cin.getline(user_input, 50);
				if (string(user_input) == "(c)")
				{
					cout << "Starting game...";
					Sleep(5 * 1000);
					system("cls");
					s_one.Section_One_Content();
					break;
				}

				else
				{
					//If the user does not enter suitable input, loop back.
					cout <<
						"\n"
						"\nI'm sorry that is not a valid input option."
						"\nPlease enter (c) to continue."
						"\n"
						"\n>";
					continue;
				}

			}
			break;

		}

		else if (string(user_input) == "2")
			//If user picks 2, start game and clear screen of text.
		{
			cout << "Starting game...";
			Sleep(5 * 1000);
			system("cls");
			s_one.Section_One_Content();
			break;
		}

		else if (string(user_input) == "3")
			//If user picks 3, terminate program.
		{
			cout << "Exiting game...";
			cout << "\nProgram has terminated.";
			cout << "\n";
			return 0;
		}

		else
		{
			//If the user does not enter suitable input, loop back.
			cout <<
				"\n"
				"\nI'm sorry that is not a valid input option."
				"\nPlease pick one of the numbers listed."
				"\n"
				"\n>";
			continue;
		}
	}


	_getch();
	return 0;
}