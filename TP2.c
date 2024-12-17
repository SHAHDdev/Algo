#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to load a string of size N
char *ChargerChaine(int N) {
    char *chaine = (char *)malloc(N * sizeof(char));
    if (chaine == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Veuillez saisir la chaine de caracteres: ");
    scanf(" %[^\n]", chaine); // Read a line of text
    return chaine;
}

// Function to calculate the length of the string
int Longueur(char *ch) {
    return strlen(ch);
}

// Procedure to load the string into a character array
void ChargerTab(char *p, char Tab[]) {
    strcpy(Tab, p);
}

// Procedure to reverse the character array
void InverserTab(char Tab[], char T[], int m) {
    for (int i = 0; i < m; i++) {
        T[i] = Tab[m - 1 - i];
    }
    T[m] = '\0'; // Null-terminate the reversed string
}

// Procedure to display the character array as a string
void AfficherTab(char Tab[], int m) {
    printf("Le tableau de caracteres est: %.*s\n", m, Tab);
}

int main() {
    char *ch;
    int n;

    printf("Veuillez saisir la taille maximale de la chaine: \n");
    scanf("%d", &n);
    
    ch = ChargerChaine(n);
    int m = Longueur(ch);
    
    char Tab[m + 1]; // +1 for null terminator
    char T[m + 1];   // +1 for null terminator
    
    ChargerTab(ch, Tab);
    AfficherTab(Tab, m);
    
    InverserTab(Tab, T, m);
    AfficherTab(T, m);
    
    free(ch); // Free the allocated memory for the string
    return 0;
}