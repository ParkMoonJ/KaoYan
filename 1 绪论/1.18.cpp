#include <iostream>
using namespace std;

#define MAXSIZE 100

typedef enum {A, B, C, D, E} SchoolName;
typedef enum {FEMALE, MALE} Gender;

typedef struct {
    char event[3];
    Gender gender;
    SchoolName school;
    int score;
    int point;
} Component;

typedef struct {
    int maleSum;
    int femaleSum;
    int totalSum;
} Sum;

for (int i = 0; i < MAXSIZE; ++i) {
    result[report[i].school].totalSum += report[i].point;
    switch (report[i].gender) {
        case 0:
            result[report[i].school].femaleSum += report[i].point;
        case 1:
            result[report[i].school].maleSum += report[i].point;
    }
}

for (int i = A; i < E; ++i) {
    cout << ...
}
