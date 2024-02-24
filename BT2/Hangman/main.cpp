#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

#define START 0
#define GOOD_GUESS 1
#define BAD_GUESS 2
#define MAX_BAD_GUESSES 7

const std::string WORD_LIST[] = {"dog", "cat" , "human", "socialism"};
const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(std::string);

const std::string chooseWord(){
    int randomIndex = rand() % WORD_COUNT;
    return WORD_LIST[randomIndex];
}

struct HangMan {
    std::string secretWord;
    std::string guessedWord;

    int badGuesses;
    int hiddenLetters;
    int status = START;

    HangMan(){
    }

    void init(const std::string& secret){
        secretWord = secret;
        guessedWord = std::string(secretWord.length(), '_');
        hiddenLetters = secretWord.length();
        badGuesses = 0;
    }

    void update(char input){
        status = BAD_GUESS;
        for (int i = 0; i < secretWord.length(); i++){
            if (guessedWord[i] == '_' && secretWord[i] == input){
                guessedWord[i] = input;
                status = GOOD_GUESS;
                hiddenLetters--;
            }
        }
        if (status == BAD_GUESS){
            badGuesses++;
        }
    }

    bool isOver(){
        return (isWon() || isLost());
    }
    bool isWon(){
        return hiddenLetters == 0;
    }
    bool isLost(){
        return badGuesses >= MAX_BAD_GUESSES;
    }
    

};


char getInput(){
    char s;
    std::cout << "Make a guess: ";
    std::cin >> s;
    return s;
}
void renderGame(HangMan& game){
    if (game.status == GOOD_GUESS){
        std::cout << "GOOD JOB!" << std::endl;
    }else if (game.status == BAD_GUESS){
        std::cout << "Oh! Incorrect!" << std::endl;
    }

    std::cout << "Bad guessed: " << game.badGuesses << std::endl;
    std::cout << "Guessed word: " << game.guessedWord << std::endl;
    
    if (game.isOver()){
        std::cout << std::endl;
        if (game.isWon()){
            std::cout << "You've won this game!";
        }else if (game.isLost()){
            std::cout << "You've lost this game!";
        }
        std::cout << std::endl;
        std::cout << "The secret word is: " << game.secretWord;
    }

}



int main(int arg, char* argv[]){
    srand(time(0));

    HangMan game;
    game.init(chooseWord());
    renderGame(game);

    do {
        char input = getInput();
        game.update(input);
        renderGame(game);

    } while (!game.isOver());

    return 0;
}