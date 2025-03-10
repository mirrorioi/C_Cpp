#include <stdio.h>
#include <string.h>
#include <time.h>


struct gstudent
{
    char name[20];
    int height;
    float weight;
    long schols;
};

// typedef struct {
//     char name[20];
//     int height;
//     float weight;
//     long schols;
// } gstudent;

// is okay to use: Sanaka = Hans

void put_time(void){
    time_t cur;
    time(&cur);
    struct tm *a = localtime(&cur);
    printf("%d h,%d m,%d s\n",a->tm_hour,a->tm_min,a->tm_sec);
    
}

int main(void)
{

    // initialize
    struct gstudent sanaka;
    strcpy(sanaka.name, "Sanaka");
    sanaka.height = 175;
    sanaka.weight = 60.5;
    sanaka.schols = 70000;
    // struct student sanaka = ("Sanaka", 175, 60.5);

    printf("name:%s\n", sanaka.name);
    printf("height:%d\n", sanaka.height);

    struct gstudent *std = &sanaka;
    printf("name:%s\n",(*std).name);
    printf("name:%s\n",std->name);

    // time_t time (time_t *timer) // current time
    time_t current;
    time_t t = time(&current);
    printf("%lu\n",t); // from 1970.1.1

    // struct tm *Localtime(const time t *timer)
    struct tm *a = localtime(&current);
    printf("%d s\n",a->tm_sec);

    put_time();
    
}