#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%.0f, Perimeter=%.0f", area, perimeter);

    return 0;
}




