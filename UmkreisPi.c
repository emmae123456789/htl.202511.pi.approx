#include <stdio.h>
#include <math.h>
int main() {
    int n = 4;          // Start mit Quadrat
    double r = 1.0;     // Kreisradius
    double L, R, a, l, pi;
    int iterations = 15; // Anzahl der Verdopplungen der Seiten

    L = 2 * r;    // Seite des Quadrats im Kreis


    for (int i = 0; i < iterations; i++) {  // Startzahl ist 0, die Schleife geht
                                            // wenn i kleiner als iterations ist und so lange bis sie den iterations-Wert hat dann wird nochmal um den iterations-Wert wiederholt
                                            // i++ erhöht den Wert um 1
        R = sqrt(r * r + L * L / 4);
        a = R - r;
        l = (L * L - 4 * a * a) / (2 * L); // Umfang
        double U = n * l; // double= Nachkommazahl; int=Ganze Zahlen

        // Pi-Annäherung
        pi = U / (r);

        printf("n=%d, L=%.10f, R=%.10f, a=%.10f, l=%.10f, Pi approx=%.10f\n", n, L, R, a, l, pi); // %d=ganze Zahl; %.10f=Zahl mit genau 10 Nachkommastellen

        // Verdoppele die Anzahl der Seiten und halbieren die Polygon-Seite
        n *= 2;
        L = l; // neue Seitenlänge für nächstes Polygon
    }

    return 0;
}