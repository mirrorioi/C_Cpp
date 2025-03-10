#include "stdio.h"

// Question 2A: ADD STRUCTURES
struct coord {
  int row;
  int col;
};

struct arena {
  int rows;
  int cols;
  struct coord robot;
  struct coord obstacle1;
  struct coord obstacle2;
};

// check_bound(struct arena my_arena, struct coord posn) checks if posn in arena
// also checks if posn is at the corners
bool check_bound(struct arena my_arena, struct coord posn) {
  int row = posn.row;
  int col = posn.col;
  int rmax = my_arena.rows;
  int cmax = my_arena.cols;
  if (row > rmax || col > cmax || row < 1 || col < 1){
    return 0;
  } else if (row == 1 && (col == 1 || col == cmax)) {
    return 0;
  } else if (row == rmax && (col == 1 || col == cmax)) {
    return 0;
  } else {
    return 1;
  }
}

// create_arena(rows, cols) creates a robot arena with number of rows and columns
// requires: rows and cols are > 0
struct arena create_arena(int rows, int cols) {
  struct arena a1;
  a1.rows = rows;
  a1.cols = cols;
  return a1;
}

// place_robot(my_arena, posn) returns an arena structure with the new 
//   robot coordinates if they are valid, or returns an unchanged
//   arena structure if they are invalid or an obstacle is at
//   those coordinates
struct arena place_robot(struct arena my_arena, struct coord posn) {
  int my_row = posn.row;
  int my_col = posn.col;
  struct coord ob1 = my_arena.obstacle1;
  struct coord ob2 = my_arena.obstacle2;
  if (!check_bound(my_arena, posn)) {
    return my_arena;
  } else if (ob1.row == my_row && ob1.col == my_col) {
    return my_arena;
  } else if (ob2.row == my_row && ob2.col == my_col) {
    return my_arena;
  } else {
    my_arena.robot.row = my_row;
    my_arena.robot.col = my_col;
    return my_arena;
  }
}

// place_obstacle(my_arena, posn, num) returns an arena structure with the
//   obstacle<num> coordinates if they are valid, or returns an unchanged
//   arena structure if they are invalid or if a bot or another obstacle is at 
//   those coordinates
//   Requires: num is either 1 or 2
struct arena place_obstacle(struct arena my_arena, struct coord posn, int num) {
  int my_row = posn.row;
  int my_col = posn.col;
  struct coord ob;
  if (num == 1){
    ob = my_arena.obstacle2;
  } else {
    ob = my_arena.obstacle1;
  }
  struct coord robot = my_arena.robot;
  if (!check_bound(my_arena, posn)){
    return my_arena;
  } else if (ob.row == my_row && ob.col == my_col) {
    return my_arena;
  } else if (robot.row == my_row && robot.col == my_col) {
    return my_arena;
  } else if (num == 1) {
    my_arena.obstacle1.row = my_row;
    my_arena.obstacle1.col = my_col;
    return my_arena;
  } else {
    my_arena.obstacle2.row = my_row;
    my_arena.obstacle2.col = my_col;
    return my_arena;
  }
}

// move_robot(my_arena, direction) returns an arena structure with the new 
//   bot coordinates by adding add 1 in the provided direction ('n', 's', 'w', 'e')
//   if the new coordinates are valid and if there is no obstacle at those coordinates. 
//   Otherwise, the function should return an unchanged arena structure.
// Requires: direction is one of 'n', 's', 'w', 'e'
struct arena move_robot(struct arena my_arena, char direction) {
  int rob_row = my_arena.robot.row;
  int rob_col = my_arena.robot.col;
  if (direction == 'n') {
    rob_row -= 1;
  } else if (direction == 's') {
    rob_row += 1;
  } else if (direction == 'w') {
    rob_col -= 1;
  } else if (direction == 'e') {
    rob_col += 1;
  }
  struct coord new_posn = {.row = rob_row, .col = rob_col};
  return place_robot(my_arena, new_posn);
}

// Question 2C: ADD PRINT_ARENA FUNCTION AND DOCUMENTATION
// Helpful string literals for printf:
// "Key"
// "==="
// "# = Out-of-Bounds"
// "R = Robot Position"
// "O = Obstacle Position"
void print_arena(struct arena my_arena) {
  int rows = my_arena.rows;
  int cols = my_arena.cols;
  int rob_row = my_arena.robot.row;
  int rob_col = my_arena.robot.col;
  int ob1_row = my_arena.obstacle1.row;
  int ob1_col = my_arena.obstacle1.col;
  int ob2_row = my_arena.obstacle2.row;
  int ob2_col = my_arena.obstacle2.col;
  printf("%d x %d Arena\n", rows, cols);
  for (int i = 0; i < rows; i++) {
    printf("+-+-+-+-+\n");
    for (int j = 0; j < cols; j++){
      printf("|");
      if (i == 0 && (j == 0 || j == cols - 1)){
        printf("#");
      } else if (i == rows - 1 && (j == 0 || j == cols - 1)) {
        printf("#");
      } else if (i == rob_row - 1 && j == rob_col - 1){
        printf("R");
      } else if (i == ob1_row - 1 && j == ob1_col - 1){
        printf("O");
      } else if (i == ob2_row - 1 && j == ob2_col - 1){
          printf("O");
      } else {
        printf(" ");
      }
    } 
    printf("|\n");
  }
  printf("+-+-+-+-+\n");
  printf("Key\n");
  printf("===\n");
  printf("# = Out-of-Bounds\n");
  printf("R = Robot Position\n");
  printf("O = Obstacle Position\n");
  printf("\n");
}

int main(void) {
  // Question 2D: ADD I/O TEST HARNESS
  char cmd;
  int rows;
  int cols;
  int row;
  int col;
  int num;
  char direction;
  struct arena my_arena;
  while (1 == (scanf(" %c", &cmd))) {
    if (cmd == 'c') {
      scanf(" %d", &rows);
      scanf(" %d", &cols);
      my_arena = create_arena(rows, cols);
    } else if (cmd == 'r') {
      scanf(" %d", &row);
      scanf(" %d", &col);
      struct coord posn_rob = {.row = row, .col = col};
      my_arena = place_robot(my_arena, posn_rob);
    } else if (cmd == 'o') {
      scanf(" %d", &row);
      scanf(" %d", &col);
      scanf(" %d", &num);
      struct coord posn_ob = {.row = row, .col = col};
      my_arena = place_obstacle(my_arena, posn_ob, num);
    } else if (cmd == 'm') {
      scanf(" %c", &direction);
      my_arena = move_robot(my_arena, direction);
    } else if (cmd == 'p') {
      print_arena(my_arena);
    }
  }  
}
