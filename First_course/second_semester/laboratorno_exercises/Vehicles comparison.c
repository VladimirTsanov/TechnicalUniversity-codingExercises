#include <stdio.h>

typedef struct {
  char model[50];
  int year;
  double speed;
} VehicleType;

typedef struct {
  VehicleType common;
  int passengers;
  int engine_power;
  double altitude;
} Car, Motorboat, Plane;


int main(){
    Car car;
    Motorboat motorboat;
    Plane plane;

    printf("Type the characteristics for a car(model, year, speed, passengers): ");
    scanf("%s %d %lf %d", &car.common.model, &car.common.year, &car.common.speed, &car.passengers);

    printf("Type the characteristics for a motorboat(model, year, speed, enginepower): ");
    scanf("%s %d %lf %d", &motorboat.common.model, &motorboat.common.year, &motorboat.common.speed, &motorboat.engine_power);

    printf("Type the characteristics for a car(model, year, speed, altitude): ");
    scanf("%s %d %lf %lf", &plane.common.model, &plane.common.year, &plane.common.speed, &plane.altitude);

    printf("Comparing speed!\n");

    if (car.common.speed > motorboat.common.speed && car.common.speed > plane.common.speed){
        printf("The car is the fastest");

    } else if (motorboat.common.speed > car.common.speed && motorboat.common.speed > plane.common.speed){
        printf("The motorboat is the fastest");
    } else {
        printf("The plane is the fastest");
    }
  
    return 0;
}
