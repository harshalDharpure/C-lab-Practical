#include <stdio.h>

int main() {
    float u, g = 10.0;
    float H, t, T;

    printf("Enter the initial velocity of the ball (in m/s): ");
    scanf("%f", &u);

    H = (u * u) / (2 * g);
    t = u / g;
    T = 2 * t;

    printf("The maximum height reached is %.2f m\n", H);
    printf("The time required to reach maximum height is %.2f s\n", t);
    printf("The total time to return back is %.2f s\n", T);

    return 0;
}
