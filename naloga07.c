
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga.h"

int poisciStudenta(Student** studentje, int stStudentov, int vpisna) {
    for (int i = 0; i < stStudentov; i++) {
        if (studentje[i]->vpisna == vpisna)
            return i;
    }
    return -1;
}

int poisciPO(Student* student, char* predmet) {
    
    int i = 0;
    while((student->po)[i].predmet[0] != '\0') {
        int j = 0;
        int a = 1;
        char* str = (student->po)[i].predmet;
        
        while (str[j] != '\0' && predmet[j] != '\0') {
            if (str[j] != predmet[j]) {
                a = 0;
                break;
            }
            j++;
                
        }
        if (a == 1 && str[j] == '\0' && predmet[j] == '\0')
        return i;
        i++;
    }
    
    return -1;
}

int dodaj(Student** studentje, int stStudentov, int vpisna, char* predmet, int ocena) {
    int a = 0;
    for (int i = 0; i < stStudentov; i++) {
        
        if (studentje[i]->vpisna == vpisna) {
            int ind = -1;
            for (int j = 0; j < studentje[i]->stPO; j++) {
                if (strcmp(studentje[i]->po[j].predmet, predmet) == 0) {
                    studentje[i]->po[j].ocena = ocena;
                    ind = 1;
                    break;

                }
            }
            if (ind == -1) {
            strcpy((studentje[i]->po)[studentje[i]->stPO].predmet, predmet);
            (studentje[i]->po)[studentje[i]->stPO].ocena = ocena;
            studentje[i]->stPO++;
            }
            a = 1;
            break;
        }
    }
    if (a == 0) {
        Student* student = malloc(sizeof(Student));
        student->vpisna = vpisna;
        student->stPO = 1;
        student->po = malloc(sizeof(PO) * 10);
        strcpy(student->po[0].predmet, predmet);
        student->po[0].ocena = ocena;
        studentje[stStudentov] = student;
        stStudentov++;
        
    }
    return stStudentov;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}
