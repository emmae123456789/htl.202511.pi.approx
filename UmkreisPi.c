int main() {
    int n = 4;          // Start mit Quadrat
    double r = 1.0;     // Kreisradius
    double L, R, a, l, pi;
    int iterations = 15; // Anzahl der Verdopplungen der Seiten

    L = 2 * r;    // Seite des eingeschriebenen Quadrats


    for (int i = 0; i < iterations; i++) {
        R = sqrt(r * r + L * L / 4);
        a = R - r;
        l = (L * L - 4 * a * a) / (2 * L);
        // Umfang
        double U = n * l;

        // Pi-Ann�herung
        pi = U / (r);

        printf("n=%d, L=%.10f, R=%.10f, a=%.10f, l=%.10f, Pi approx=%.10f\n", n, L, R, a, l, pi);

        // Verdoppele die Anzahl der Seiten und halbieren die Polygon-Seite
        n *= 2;
        L = l; // neue Seitenl�nge f�r n�chstes Polygon
    }

    return 0;
}