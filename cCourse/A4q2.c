#include <stdio.h>

#define true 1
#define false 0


struct point {
    int x;
    int y;
};

struct rectangle {
    struct point top_left;
    struct point bottom_right;
};

// print_window(window) prints the window in the specified format
// requires: window is not NULL
// effects: produces output
void print_window(const struct rectangle *window) {
    //assert(window);
    printf("Window: top_left = (%d, %d), bottom_right = (%d, %d)\n",
           window->top_left.x, window->top_left.y, 
           window->bottom_right.x, window->bottom_right.y);
}

// print(car) prints the coordinates of the car
// requires: car is not NULL
// effects: produces output
void print_car(const struct point *car) {
    //assert(car);
    printf("%d %d\n", car->x, car->y);
}


// constrain(car, environment) constrains the car's position to stay inside or on the border of the fixed environment
// Requires: car and environment are not null
bool constrain(struct point *car, const struct rectangle *environment) {
    int x = car->x;
    int y = car->y;
    int top = (environment->top_left).y;
    int left = (environment->top_left).x;
    int bottom = (environment->bottom_right).y;
    int right = (environment->bottom_right).x;
    bool res = false;
    if (x > right) {
        car->x = right;
        res = true;
    } else if (x < left) {
        car->x = left;
        res = true;
    } 
    if (y > top) {
        car->y = top;
        res = true;
    } else if (y < bottom) {
        car->y = bottom;
        res = true;
    } 
    return res;
}

// update_window(car, window) checks whether the car is inside the bounds of the tracking window
// and update window to center car in the window
// Requires: car and window are not null
bool update_window(const struct point *car, struct rectangle *window) {
    int x = car->x;
    int y = car->y;
    int top = (window->top_left).y;
    int left = (window->top_left).x;
    int bottom = (window->bottom_right).y;
    int right = (window->bottom_right).x;
    if (x < left || x > right || y < bottom || y > top){
        int width = right - left;
        int height = top - bottom;
        (window->top_left).y = y + height / 2;
        (window->top_left).x = x - width / 2;
        (window->bottom_right).y = y - height / 2;
        (window->bottom_right).x = x + width / 2;
        return true;
    } else {
        return false;
    }
}


// NEW structure for Part(b)
struct obstacles {
    struct rectangle obstacle1;
    struct rectangle obstacle2;
};

// NEW CONSTANTS
const char CMD_NORTH = 'N';
const char CMD_SOUTH = 'S';
const char CMD_EAST = 'E';
const char CMD_WEST = 'W';
const char CMD_DONE = 'D'; // Done driving

// cannot drive the car more than this global constant
// necessary so that we do not "jump" over obstacles 
const int MAX_TRAVEL_DISTANCE = 5; 

// constants for fixed dimension tracking window
const int WINDOW_WIDTH = 6;
const int WINDOW_HEIGHT = 4;

// avoid_obstacles(origin,destination, obs) checks whether the car's intended destination 
// collides with the area of either obstacle. 
// Requires: origin, destination, obs are not null
bool avoid_obstacles(struct point *origin, 
                     struct point *destination, 
                     const struct obstacles *obs) {
    //assert(origin);
    //assert(destination);
    //assert(obs);
    struct rectangle ob1 = obs->obstacle1;
    struct rectangle ob2 = obs->obstacle2;
    int x = destination->x;
    int y = destination->y;
    bool res = false;
    if (x <= ob1.bottom_right.x && x >= ob1.top_left.x && y >= ob1.bottom_right.y && y <= ob1.top_left.y) {
        res = true;
    } else if (x <= ob2.bottom_right.x && x >= ob2.top_left.x && y >= ob2.bottom_right.y && y <= ob2.top_left.y) {
        res = true;
    }
    if (res) {
        destination->x = origin->x;
        destination->y = origin->y;
    } else {
        origin->x = destination->x;
        origin->y = destination->y;
    }
    return res;
}


// drive_car(car, environment, obs, window, crashed, window_updates) drives 
//   the car by updating the *car based on the read input.
// effects: reads input, may generate output, may update *crashed, 
//          *window_updates, *window
// requires: *crashed is false 
void drive_car(struct point *car, const struct rectangle *environment, 
                 const struct obstacles *obs, struct rectangle *window,
                 bool *crashed, int *window_updates) {
    char direction = '\0';
    int distance = 0;
    while (! *crashed && 1 == scanf(" %c", &direction)) {
        scanf("%d", &distance);
        struct point dest = {0,0};
        if (distance > 5) {
            distance = 5;
        }
        if (direction == 'S'){
            dest.x = car->x;
            dest.y =  car->y - distance;
        } else if (direction == 'N') {
            dest.x = car->x;
            dest.y =  car->y + distance;
        } else if (direction == 'W') {
            dest.x = car->x - distance;
            dest.y =  car->y;
        } else if (direction == 'E') {
            dest.x = car->x + distance;
            dest.y =  car->y;
        } else {
            return;
        }
        if (avoid_obstacles(car,  &dest,  obs)) {
            printf("Not moving: Obstacle in way.\n");
            print_car(car);
        } else if (constrain(car, environment)) {
            print_car(car);
            *crashed = true;
        } else if (update_window(car, window)) {
            *window_updates += 1;
            print_window(window);
            print_car(car);
        } else {
            print_car(car);
        }
    }
}



int main(void) {
    // Environment boundaries
    const struct rectangle ENVIRONMENT = {{-10, 10}, {10, -10}}; 

    // obstacles
    const struct obstacles OBS = {
        {{-5, 4}, {-1, 0}},  // First obstacle
        {{4, -2}, {8, -6}}   // Second obstacle
    };

    // a car is just a point
    struct point car = {0, 0}; //Car's initial position
    // initial fixed dimension tracking window
    struct rectangle window = {{-3, 2}, {-3 + WINDOW_WIDTH, 2 - WINDOW_HEIGHT}}; 
    bool crashed = false;
    int window_updates = 0;
    drive_car(&car, &ENVIRONMENT, &OBS, &window, &crashed, &window_updates);
    if (crashed){
        printf("Crashed.\n");
    } else{
        printf("Not Crashed.\n");
    }
    printf("Window Updates: %d\n", window_updates);
}




// STACK:
// =========================================
// change:
//   rp : [addr3]
//   temp : [addr1]
//   temp_point : {40, 50} 
//   return address: main:54
// =========================================
// main:
//   p1 : {40, 50} [addr1]
//   p2 : {40, 50} [addr2]
//   r : {[addr2], [addr2]} [addr3]
//   return address: OS
// =========================================