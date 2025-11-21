#include <stdio.h>
#include <math.h>

int main() {
    int n = 4;          // Start mit Quadrat
    double r = 8.0;     // Kreisradius
    double L, l, pi;
    int iterations = 4; // Anzahl der Verdopplungen der Seiten

    L = r * sqrt(2);    // Seite des eingeschriebenen Quadrats

    for (int i = 0; i < iterations; i++) {
        // Länge der Seite des n-Seiten-Polygons
        l = sqrt(2 * r * r - 2 * r * sqrt(r * r - (L / 2) * (L / 2)));

        // Umfang
        double U = n * l;

        // Pi-Annäherung
        pi = U / (2 * r);

        printf("n=%d, l=%.10f, Pi approx=%.10f\n", n, l, pi);

        // Verdoppele die Anzahl der Seiten und halbieren die Polygon-Seite
        n *= 2;
        L = l; // neue Seitenlänge für nächstes Polygon
    }

    return 0;
}
