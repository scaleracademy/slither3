#include "snake.h"

int x, y;
// snake - array of coordinates
// will array work fine here?
// No i can't use array
// 10 , 10
// 10 , 11
vector < pair<int , int > > body; // x - body[i][0] , y - body[i][1]
// {1 , 2}    body[0]
// { 2 , 3 }    body[1]
// {10 , 10}    body[2]
// ###
/*
    ###### ->
    #
  ###  
*/

// ###
void init_snake(){
    body.clear();
    body.push_back({10,10});        
    body.push_back({10,11});
    body.push_back({10,12});
}

void paint_snake(){
    for(int i =0 ; i < body.size(); i ++){
        pair < int , int > location = body[i];
        move(location.first, location.second);

        // move(body[i].first , body[i].second);
        addch('#');
    }
}
 
 
void move_snake(int direction){
    if(direction == UP){
       x--;
    } else if (direction == DOWN){
        x++;
    } if(direction == LEFT){
        y--;
    } else if (direction == RIGHT){
        y++;
    }
}