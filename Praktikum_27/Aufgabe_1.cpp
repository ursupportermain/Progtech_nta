#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    char vorname[20];
    char nummer[20];
};

struct Person Personen[10];

void init() {
    for (int i = 0; i < 10; i++) {
        strcpy(Personen[i].name, "");
        strcpy(Personen[i].vorname, "");
        strcpy(Personen[i].nummer, "");
    }
}

void testnamen() {
    strcpy(Personen[0].name, "Mustermann");
    strcpy(Personen[0].vorname, "Max");
    strcpy(Personen[0].nummer, "123456789");

    strcpy(Personen[9].name, "Musterfrau");
    strcpy(Personen[9].vorname, "Maria");
    strcpy(Personen[9].nummer, "987654321");
}

char* get_Eintrag(int index) {
    char* eintrag = malloc(60); // Speicherplatz für Name, Vorname und Nummer (jeweils 20 Zeichen)
    sprintf(eintrag, "%s, %s, %s", Personen[index].name, Personen[index].vorname, Personen[index].nummer);
    return eintrag;
}

void list() {
    for (int i = 0; i < 10; i++) {
        char* eintrag = get_Eintrag(i);
        printf("Eintrag %d: %s\n", i, eintrag);
        free(eintrag); // Speicher freigeben, da get_Eintrag dynamisch allozierten Speicher verwendet
    }
}

int main() {
    init();
    testnamen();
    list();
    
    return 0;
}
