#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list element
typedef struct element {
    int val;
    struct element *suivant;
} element;

// Function to create an empty list
element* creerListe() {
    return NULL; // An empty list is represented by a NULL pointer
}

// Function to load a list from an array of integers
element* chargerListe(int Tab[], int size, element* liste) {
    for (int i = 0; i < size; i++) {
        element* newElement = (element*)malloc(sizeof(element));
        newElement->val = Tab[i];
        newElement->suivant = liste; // Point to the current head
        liste = newElement; // Update the head to the new element
    }
    return liste; // Return the new head of the list
}

// Function to display the elements of the list
void afficherListe(element* L) {
    element* current = L;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->suivant;
    }
    printf("NULL\n");
}

// Function to remove the last element from the list
element* supprimerEnFin(element* L) {
    if (L == NULL) return NULL; // If the list is empty, return NULL

    if (L->suivant == NULL) { // If there's only one element
        free(L);
        return NULL;
    }

    element* current = L;
    while (current->suivant->suivant != NULL) {
        current = current->suivant; // Move to the second last element
    }
    free(current->suivant); // Free the last element
    current->suivant = NULL; // Set the second last element's next to NULL
    return L; // Return the modified list
}

// Function to add a new element at the beginning of the list
element* ajouterEnDebut(element* L1, int value) {
    element* newElement = (element*)malloc(sizeof(element));
    newElement->val = value;
    newElement->suivant = L1; // Point to the current head
    return newElement; // Return the new head of the list
}

// Function to free all elements in the list and print a message
void viderListe(element* L) {
    element* current = L;
    while (current != NULL) {
        element* next = current->suivant;
        free(current);
        current = next;
    }
    printf("La liste est vide.\n");
}

// Main function to demonstrate the linked list operations
int main() {
    int Tab[10] = {1, 3, 5, 7, 8, 10, 9, 11, 13, 20};
    element* liste = creerListe();
    element* L = chargerListe(Tab, 10, liste);
    afficherListe(L);
    
    element* L1 = supprimerEnFin(L);
    afficherListe(L1);
    
    element* L2 = ajouterEnDebut(L1, 40);
    afficherListe(L2);
    
    viderListe(L2);
    
    return 0;
}