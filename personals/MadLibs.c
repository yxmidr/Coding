#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <time.h>

int main(){

    // MADLIBS by yxmiii.dr (inspired by Bro Code)
    // w/ 3,125 Possible Combinations!

    srand(time(NULL));

    char adjective1[50] = "";
    char noun[50] = "";
    char adjective2[50] = "";
    char verb[50] = "";
    char adjective3[50] = ""; 

    char introsent[5][100] = { // adjective1
        "Yesterday, I went to a/an %s house.\n",
        "Last Friday, I strolled around a/an %s building.\n",
        "I explored a/an %s school with Lourd earlier.\n",
        "Last night, I jogged all around a/an %s park.\n",
        "I hid my money in a/an %s van.\n"
    };

    char fllwsent1[5][100] = { // noun
        "Then I saw a/an %s inside!\n",
        "And I heard the footsteps of a/an %s coming closer.\n",
        "Next, a wild %s appeared in front of me!\n",
        "But I was stopped by a/an %s.\n",
        "And a/an %s chased me!\n",
    };

    char fllwsent2[5][100] = { // adjective2
        "It was so %s that it made me glitch!\n",
        "I didn't move because of how %s it was!\n",
        "It looks so %s I thought it was fake!\n",
        "It looked more %s when it got near me.\n",
        "That thing, or whatever it is, is very %s.\n",
    };

    char fllwsent3[5][100] = { // verb
        "After seeing it, I started %s!\n",
        "My mind got into %s mode!\n",
        "My body went completely numb after %s away from it.\n",
        "I started %s the moment it moved again.\n",
        "My soul felt like it was %s out of my body after seeing that!\n",
    };

    char endsent[5][100] = { // adjective3
        "Then I realized, it was also %s.\n", 
        "I also saw that it was %s. Yikes!\n", 
        "That was both amazing and scary! It made my face %s!\n",
        "I literally sweated so much that it made my shirt %s!\n",
        "I'm never going back to that again. That thing made me %s.\n",
    };

    printf("Hello! Welcome to MadLibs! (by yxmiii.dr) ");
    getchar();
    printf("Press ENTER ");
    getchar();

    printf("Please enter an ADJECTIVE!: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Please enter a NOUN!: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Please enter another ADJECTIVE!: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Please enter a VERB (ending with -ing)!: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Please enter the last ADJECTIVE!: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("\n");

    printf(introsent[rand() % 5], adjective1);
    printf(fllwsent1[rand() % 5], noun);
    printf(fllwsent2[rand() % 5], adjective2);
    printf(fllwsent3[rand() % 5], verb);
    printf(endsent[rand() % 5], adjective3);

    return 0;
}