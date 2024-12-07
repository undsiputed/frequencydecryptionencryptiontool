#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <ctime> 
using namespace std;

int main() {

 int i;
 int j;
 int choice;

 cout << "Do you want a Decryption of the given text with frequency analysis" << endl; // giving the use option for part 1 or 2
 cout << "Type 1 for yes" << " Type 2 for Encryption" << endl;
    
 cin >> choice; // the user will give their choice
    
 // if user picks choice number one
 if (choice == 1) {
    vector <char> storeletters; // this will store the letters
    char letter;
    for (letter = 'a'; letter <= 'z'; ++letter) { // this for loop was made to give the vector the value of letter a-z.
        storeletters.push_back(letter);
    }
    string phrase = "alen pxysv aeglv dzlw nzax ewsmt dwese iytn vrtlp rstap ivlxh psmnp zsflo enodv ieain tuxh pjsry lvszm xhpz xrplx seoig chxiy nwoqa lehpr dzdwt slfay pwtpy woqal edaip dalel uxeyu eezmx hpsmg sariy nvooz xhpw slpzs feoif whksp cirjz igxlr txhvk pkmne bvnhp xhdjv aejle dprdp uxaep sndzg rzsps";
    
    /* Used chatgpt: for the vector I had it with a value of just (26) but I used chatgpt to give me 
    some advice it told me to make it (26,0) as this would give the vector 26 values with the
    starting value of 0 for each.*/
   
    vector <int> frequency(26,0); // this will store the frequency for every letter (Used chatgpt to help ^ explination above)
    for (int i = 0; i < phrase.size(); ++i) { // this loop will go through each chracter in the phrase given.
     
        /*For char ch and the if statement I did not have this at first. Using chatgpt to help impove
        my code it told me i needed to acces the charcters and that is why I created the char ch and made it
        equal to phrase.at(i) also for the if statment it told me this would help make sure that there
        are no other chracter being counted for frequency as before there was some errors with the output. */

        char ch = phrase.at(i); // this will get the chracters from the phrase to be able to check them for frequency.
        if (ch >= 'a' && ch<= 'z') { // this will make sure that there is a letter and not a space that could harm the code when checking for frequency
            for (int j = 0; j < storeletters.size(); ++j){ // this loop will go through each letter stored in storeletters.
                if (ch == storeletters.at(j)) { // this will check that the chracter matches the letter making this true and then incrmenting the frequency
                    frequency.at(j)++;   // this will increase the frequency for the letter if found
                }
            }
        }
    }
    cout << "Letter frequencies:" << endl;
    for(int i=0; i <storeletters.size(); ++i){ // this look is made to get the output for freqeuncy of the letters
        cout << storeletters.at(i) << ":" << frequency.at(i) << endl;; // outputs the letter and frequency
    }
    
    // FREQUENCY ENDS HERE

    // Encoded text
    string encodedText = "alenpxysvaeglvdzlwnzaxewsmtdweseiytnvrtlprstapivlxhpsmnpzsfloenodvieaintuxhpjsrylvszmxhpzxrplxseoigchxiynwoqalehprdzdwtslfaypwtpywoqaledaipdaleluxeyueezmxhpsmgsariynvoozxhpwslpzsfeoifwhkspcirjzigxlrtxhvkpkmnebvnhpxhdjvaejledprdpuxaepsndzgrzsps";

    // Keys list
    string keys[] = {
        "utter", "descriptive", "caring", "pies", "drawer", "station", "soothe", "year",
        "agreeable", "seemly", "button", "encourage", "reduce", "bed", "wave", "nosy",
        "zoo", "hateful", "flaky", "work", "ear", "uneven", "cumbersome", "languid", 
        "box", "devilish", "yawn", "ablaze", "lake", "harbor", "legs", "glow", 
        "glossy", "cruel", "warn", "hard", "unique", "card", "hug", "tangible", 
        "hook", "label", "exotic", "account", "imagine", "grain", "tranquil", 
        "book", "pickle", "whistle", "sack", "scissors", "trashy", "puzzled", 
        "bottle", "smile", "neighborly", "eatable", "admit", "picayune", "type", 
        "fast", "shy", "anger", "open", "add", "curly", "free", "aftermath", 
        "cherry", "daily", "heal", "rose", "abhorrent", "short", "fine", "guarded", 
        "vase", "fascinated", "fresh", "chickens", "mine", "stare"
    };
    
    // Loop through each key
    for (i = 0; i < 83; i++) {
        // Convert the encoded text to lowercase
        string lowerEncodedText = encodedText;
        for (j = 0; j < lowerEncodedText.length(); j++) {
            lowerEncodedText[j] = tolower(lowerEncodedText[j]);
        }

        string individualKey = keys[i];

        // Repeat the key to match the length of the encoded text
        string repeatedKey = "";
        for (j = 0; j < lowerEncodedText.length(); j++) {
            repeatedKey += individualKey[j % individualKey.length()];
        }
        //The expression j % individualKey.length() ensures that the index wraps around if it exceeds the length of individualKey.
        // use chatgpt for that 

        // Decode the text using the Vigenère cipher
        string decodedText = "";
        for (j = 0; j < lowerEncodedText.length(); j++) {
                int decodedInt = (((lowerEncodedText[j] - 'a') - (repeatedKey[j] - 'a') + 26) % 26)+'a'; // gives the numerical value of the decrypted character
                // used chatgpt to "explain the equation above" because it wasn't outputting the correct letters
                // chatgpt suggested subtracting 'a' from repeatedKey[] as well as shown above
                char decodedChar = decodedInt;
                decodedText += decodedChar;
        }

        // Output the decoded text for the current key
        cout << "Decoded Text with key \"" << keys[i] << "\": " << decodedText << endl << endl;
        
    }
    cout << "Key: heal" << endl << "Decrypted Text: the city however does not tell its past but contains it like the lines of a hand written in the corners of the streets the gratings of the windows the banisters of the steps the antennae of the lightning rods the poles of the flags every segment marked in turn with scratches indentations scrolls" << endl;
 }

 else if (choice == 2) {
    cin.ignore(); /* chatgpt was used and also help from a classmate: Our code for 
    the second part would not get the text input from the user and would only get the number input.
    chatgpt recommended to use cin.ignore() as this would clear the input buffer after reading an 
    integer (in this case, the user's choice). */
    string userText; // text that the user desires to encrypt
    cout << "***What text would you like to encrypt?***" << endl;
    getline(cin, userText);

    int userKey; // will be used to create a pseudo-random generator
    cout << endl << "***Enter a positive number between 1 and 100***" << endl; 
    cin >> userKey;
    cout << endl;
       
   int shift; // shift will hold the pseudo-random generator output
   char character; // will temporarily hold encrypted characters
   int charNumerical; // holds the numerical value of a character
   vector<char> encryptText(userText.size()); // encrypted characters will be inserted in this vector
   vector<int> encryptTextKey; // holds the shift value for each encrypted letter
   
   long unsigned int i;
   shift = userKey; // shift is intialized for the purpose of the psuedo-random generator
   cout << "Encrypting..." << endl;
   for (i = 0; i < userText.size(); i++) {
       cout << ".";
       //spaces are inserted into the encryptText vector as they are
       if (isspace(userText.at(i))) {
           encryptText.at(i) = userText.at(i);
       }
       //alphabetic characters will be encrypted and inserted into vector
       else {
           sleep(1); // chatgpt was used asked "how can I use sleep function" for syntax purposes
           shift = (((shift+userKey)*time(0))%26); // shift ultimately holds output of psuedo-random generator
                                                   // shift values will be any value from 0-25
           encryptTextKey.push_back(shift); // store the shift value in encryptTextKey vector
           charNumerical = (userText.at(i) + shift); // the ASCII number of the encrypted character is stored
           
           // what if the ASCII number is out of the range of the letters we want...
           // we use the ascii table to wrap around
           if ((isupper(userText.at(i))) && (charNumerical > 90)) { 
               character = ((charNumerical - 90) + 64); // character holds the modified encrypted character
           }
           else if ((islower(userText.at(i))) && (charNumerical > 122)) {
               character = ((charNumerical - 122) + 96); // character holds the modified encrypted character 
           }
           // in all other cases, the encrypted character value of charNumerical will not be modified
           else {
               character = charNumerical; 
           }
           encryptText.at(i) = character;
           userKey++; // userKey will be incremented to impact pseudo-random generator with greater variation in output
       }
   }
   cout << endl;
   
    // output encrypted message
    cout << "Encryted Message: ";
    for (i = 0; i < userText.size(); i++) {
       cout << encryptText.at(i);
    }
    cout << endl;
   
    // output encrypted message key
   cout << "Key: ";
   for (i = 0; i < encryptTextKey.size(); i++) {
       cout << encryptTextKey.at(i) << " ";
   }
   cout << endl;
 }
   return 0;
}