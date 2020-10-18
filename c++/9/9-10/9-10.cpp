#include <iostream>
#include <ctime>
using namespace std;

string get_rand_str();
string replace_vowel_to_underscore(string str);

int main() {
    string in = "start!";
    cout << "the vowel of the word is hidden\ntype in the word you guess!" << endl;
    int times = 0;
    // loop for begin the game
    while(true) {
        string target = get_rand_str();
        cout << replace_vowel_to_underscore(target) << endl; 
        times = 0;
        // loop for guessing word
        while(true) {
            cin >> in;
            // if the player get bored
            if(in == "quit") {
                break;
            }
            times++;
            // if the player successed
            if(in == target) {
                cout << "Congratulation! You've tried " << times << " times" <<endl;
                break;
            }
            cout << "try again" << endl;
        }
        if(in == "quit") {
            break;
        }
        cout << "play again? [y/n]" << endl;
        cin >> in;
        if(in == "n" || in == "N") {
            break;
        }
    }
    cout << "Good bye!" << endl;
    return 0;
}

/*
    returns the 'vowel underscored' type of parameter str
*/
string replace_vowel_to_underscore(string str) {
    string vowel = "aeiou";
    for(int i = 0; i < (int)str.size(); i++) {
        for(int j = 0; j < 5; j++) {
            if(str[i] == vowel[j]) {
                str[i] = '_'; // <- watch! a cute face!
            }
        }
    }
    return str;
}

/*
    returns a string randomly from the 17 strings
*/
string get_rand_str() {
    string words[] = {"computer", "keyboard", "television", "laptop", "mouse",
    "liberty", "love", "fraternity", "peace", "guitar", "letter",
    "photography", "art", "philosophy", "home", "poem", "post"};
    srand(static_cast<unsigned int>(time(0)));
    int randNum = rand() % 17;
    return words[randNum];
}

/*
    an interesting comment!!!
*/
