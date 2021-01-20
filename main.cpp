#include <iostream>
#include <curses.h>

using namespace std;


int main(){
    // ncurses put things on a temp screen
    initscr();
    move(10,10);
    // cout << "#" << endl;
    addch('#');
    getch();
    // addstr();
    endwin();
    // ncurses
    // sudo apt-get install libncurses6 libncurses6-dev
    // brew install ncurses
    return 0;
}




 // /*
    // #############
    // #           #
    // #           #
    // #           #
    // #           #
    // #############
    // */
    // int width = 20;
    // int height = 20;
    // for(int i = 0; i < width; i ++){
    //     cout << "#";
    // }
    // cout << endl;
    // for(int i = 1 ; i < height - 1; i++){
    //     cout << "#";
    //     for(int j = 1 ; j < width - 1; j ++){
    //         cout << " ";
    //     }
    //     cout << "#";
    //     cout << endl;
    // }
    // //cout << endl;
    // for(int i = 0; i < width; i ++){
    //     cout << "#";
    // }
    // cout << endl;