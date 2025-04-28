#include <stdio.h>
#include <math.h>

typedef struct {
  double x, y, z;
} Point;

double distance(Point p1, Point p2) {
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

int main() {
  Point points[3];

  for (int i = 0; i < 3; i++) {
    printf("Type the coordinates for point %d (x y z): ", i + 1);
    scanf("%lf %lf %lf", &points[i].x, &points[i].y, &points[i].z);
  }

  double side1 = distance(points[0], points[1]);
  double side2 = distance(points[1], points[2]);
  double side3 = distance(points[2], points[0]);

  printf("Side of a triangle: %.2lf, %.2lf, %.2lf\n", side1, side2, side3);

  return 0;
}
