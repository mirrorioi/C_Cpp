#include "cs136.h"

#define true 1;
#define false 0;
// Struct Definitions
struct point {
  int x;
  int y;
};

struct battery {
  int current_level; // must be >= 0
  int max_level;  // must be >= 0, >= current_level
};

struct robot {
  struct point coordinates; // x, y coordinates of the robot
  struct battery *battery;  // battery details
  int max_speed;            // maximum speed, > 0
  int weight;               // robot's weight, > 0
  int volume;               // robot's volume, > 0
};


// print_robot(r) prints the different fields of the robot in a specific format
// requires: r is not null
void print_robot(const struct robot *r) {
  assert(r);
  printf("Location: (%d, %d), Battery: (%d/%d), Max Speed: %d, "
    "Weight: %d, Volume: %d\n",
    r->coordinates.x, r->coordinates.y,
    r->battery->current_level, r->battery->max_level,
    r->max_speed, r->weight, r->volume);
}


// read_robot(struct robot *r) reads a robot's information from standard input
// requires: r is not null
bool read_robot(struct robot *r) {
  assert(r);
  int tmp;
  int x,y,bc,bm,s,w,v;
  int n = 0;
  while (1 == scanf("%d", &tmp)) {
    if (n == 0) {
      x = tmp;
    } else if (n == 1){
      y = tmp;
    } else if (n == 2){
      bc = tmp;
    } else if (n == 3){
      bm = tmp;
    } else if (n == 4){
      s = tmp;
    } else if (n == 5){
      w = tmp;
    } else if (n == 6){
      v = tmp;
    }
    n += 1;
  } 
  if (n == 7 && bc >= 0 && bm >= bc && s > 0 && w > 0 && v > 0) {
    struct point coord = {.x = x, .y = y};
    r->coordinates = coord;
    assert(r->battery);
    r->battery->current_level = bc;
    r->battery->max_level = bm;
    r->max_speed = s;
    r->volume = v;
    r->weight = w;
    return true;
  } else {
    return false;
  }
}

// robot_equal(const struct robot *r0, const struct robot *r1) that returns true if two robots are equal and false otherwise.
// requires: r0, r1 are not null
bool robot_equal(const struct robot *r0, const struct robot *r1) {
  assert(r0);
  assert(r1);
  bool equal_max_battery = (r0->battery->max_level == r1->battery->max_level);
  bool equal_max_speed = (r0->max_speed == r1->max_speed);
  bool equal_weight = (r0->weight == r1->weight);
  bool equal_volume = (r0->volume == r1->volume);
  int sum = equal_max_battery + equal_max_speed + equal_weight + equal_volume;
  return (sum == 4);
}


// The structure definitions have all been moved to robot.h 
// Correct but hidden implementations of the functions you were
// asked to implement in Part a are also available in this code block.

// Accessor Functions

// robot_battery_current(r) return the robot's current battery level
// requires: r is not null
int robot_battery_current(const struct robot *r) {
  assert(r);
  return r->battery->current_level;
}

// robot_battery_capabity(r) return the robot's maximum battery capacity
// requires: r is not null
int robot_battery_capacity(const struct robot *r) {
  assert(r);
  return r->battery->max_level;
}

// robot_max_speed(r) return the robot's maximum speed
// requires: r is not null
int robot_max_speed(const struct robot *r) {
  assert(r);
  return r->max_speed;
}

// robot_weight(r) return the robot's weight
// requires: r is not null
int robot_weight(const struct robot *r) {
  assert(r);
  return r->weight;
}

// robot_volume(r) return the robot's volume
// requires: r is not null
int robot_volume(const struct robot *r) {
  assert(r);
  return r->volume;
}

// Comparison functions

// compare_greater(a, b) returns true if a is greater than b, false otherwise
bool compare_greater(int a, int b) {
  return a > b;
}

// compare_less(a, b) returns true if a is less than b, false otherwise
bool compare_less(int a, int b) {
  return a < b;
}

////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
///////////// DO NOT CHANGE CODE ABOVE THIS LINE ///////////////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

// select_preference(r0, r1, metric, compare) compares two robots based on a metric (e.g., weight, max speed)
// and a comparison function passed as function pointers.
// Requires: r0 and r1 are not null, metric is a pointer to a function that returns the robot's certain element
// compare points to a function that returns the greater of the two integer arguments.
void select_preference(struct robot * const r0,
                       struct robot * const r1,
                       int (*metric)(const struct robot *),
                       bool (*compare)(int, int)) {
  assert(r0);
  assert(r1);
  assert(r0->battery);
  assert(r1->battery);
  int m0 = metric(r0);
  int m1 = metric(r1);
  if (compare(m0, m1)) {
    r0->coordinates = r1->coordinates;
    r0->battery = r1->battery;
    r0->max_speed = r1->max_speed;
    r0->weight = r1->weight;
    r0->volume = r1->volume;
  } else if (compare(m1, m0)) {
    r1->coordinates = r0->coordinates;
    r1->battery = r0->battery;
    r1->max_speed = r0->max_speed;
    r1->weight = r0->weight;
    r1->volume = r0->volume;
  }
}

// find_preferable_robot(best, metric, compare) finds the best robot from an arbitrary number of robots that it reads.
// Requires: best is not null metric is a pointer to a function that returns the robot's certain element
// compare points to a function that returns the greater of the two integer arguments. first input N is positive followed by
// N not-null inputs.
bool find_preferable_robot(struct robot *best,
                           int (*metric)(const struct robot *),
                           bool (*compare)(int, int)) {
    int N;
    scanf("%d",&N);
    struct robot tmp;
    struct robot start;
    read_robot(&start);
    for (int i = 0; i < N-1; i++){
      if (read_robot(&tmp)) {
        select_preference(&start, &tmp, metric, compare);
      } else {
        return false;
      }
    }
    select_preference(best, &start, metric, compare);
    return true;
}

/////////////////////////////////////////////////////////
/////////// DO NOT MODIFY ANY CODE BELOW THIS ///////////
/////////////////////////////////////////////////////////

// This is the test harness for this question
// Be sure to understand the expected format as explained on edX
int main(void) {
  test_harness(); // hidden implementation
  return 0;
}