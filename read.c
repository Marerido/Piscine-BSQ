/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:42:31 by tunglaub          #+#    #+#             */
/*   Updated: 2024/03/04 16:43:01 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    char rows[MAX_ROWS][MAX_COLS + 1]; // +1 für das Nullterminierungszeichen
    FILE *file = fopen("map.txt", "r");
    if (file == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return 1;
    }

    int i = 0;
    while (fgets(rows[i], MAX_COLS + 1, file) != NULL && i < MAX_ROWS) {
        // Entfernen des Newline-Zeichens am Ende der Zeile, falls vorhanden
        rows[i][strcspn(rows[i], "\n")] = '\0';
        i++;
    }
    fclose(file);

    // Zugriff auf ein Element in einer bestimmten Zeile
    printf("%c\n", rows[1][0]); // Dies sollte 'o' ausgeben

    // Zugriff auf alle Elemente in einer bestimmten Zeile
    printf("%s\n", rows[2]); // Dies sollte '.oo...o.o.' ausgeben

    return 0;
}

