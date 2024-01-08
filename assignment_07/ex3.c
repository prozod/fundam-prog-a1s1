#include <stdio.h>

float greutateBarbati(int inaltime, int varsta) {
    return inaltime - 100 - ((inaltime - 150) / 4) + ((varsta - 20) / 4);
}
float greutateFemei(int inaltime, int varsta) {
    return inaltime - 100 - ((inaltime - 150) / 2.5) + ((varsta - 20) / 6);
}

int main() {
    FILE *inputFile, *outputFile;
    char gen;
    int inaltime, varsta;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("eroare deschidere fisier input.txt");
        return -1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("eroare deschidere fisier output.txt");
        fclose(inputFile);
        return -1;
    }

    while (fscanf(inputFile, " %c", &gen) == 1) {
        fscanf(inputFile, "%d %d", &inaltime, &varsta);

        float greutateOptima = (gen == 'b') ? greutateBarbati(inaltime, varsta) : greutateFemei(inaltime, varsta);

        fprintf(outputFile, "%c %.2f\n", gen, greutateOptima);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
