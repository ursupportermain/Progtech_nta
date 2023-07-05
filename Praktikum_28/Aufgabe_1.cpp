#include <stdio.h>
#include <stdbool.h>

struct Auto {
    char marke[20];
    double maximalgeschwindigkeit;
    bool eurowagen;
    int tuerenanzahl;
};

struct Auto auto_konstruktion(char marke[20], double maximalgeschwindigkeit, bool eurowagen, int tuerenanzahl) {
    struct Auto neuesAuto;
    strcpy(neuesAuto.marke, marke);
    neuesAuto.maximalgeschwindigkeit = maximalgeschwindigkeit;
    neuesAuto.eurowagen = eurowagen;
    neuesAuto.tuerenanzahl = tuerenanzahl;
    return neuesAuto;
}

double berechne_autopreis(struct Auto auto) {
    double preis = auto.maximalgeschwindigkeit * 50 * auto.tuerenanzahl;
    if (!auto.eurowagen) {
        preis += 4000;
    }
    if (strcmp(auto.marke, "Mercedes") == 0) {
        preis *= 1.5;
    }
    return preis;
}

int main() {
    struct Auto autos[3];

    autos[0] = auto_konstruktion("VW", 200.0, true, 4);
    autos[1] = auto_konstruktion("Toyota", 180.0, false, 2);
    autos[2] = auto_konstruktion("Mercedes", 250.0, true, 4);

    double gesamtPreis = 0.0;
    for (int i = 0; i < 3; i++) {
        double einzelpreis = berechne_autopreis(autos[i]);
        printf("Auto %d - Einzelpreis: %.2f Euro\n", i+1, einzelpreis);
        gesamtPreis += einzelpreis;
    }

    printf("\nGesamtpreis aller Autos: %.2f Euro\n", gesamtPreis);

    return 0;
}
