/*
 *    SPDX-FileCopyrightText: 2021 Monaco F. J. <monaco@usp.br>
 *    SPDX-FileCopyrightText: 2024 Guichiarotto <guichiarotto10@gmail.com>
 *   
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative work from SYSeg (https://gitlab.com/monaco/syseg)
 *  and contains modifications carried out by the following author(s):
 *  Guichiarotto <guichiarotto10@gmail.com>
 */

//Fiz uma função para detectar se a sua palavra é um isograma, ou seja, não tem caracteres repetidos
//Continua com o exemplo do Help

#include "bios.h"
#include "utils.h"

#define SIZE 20         

char buffer[SIZE];       

int is_isogram(const char *str) {
    while (*str != '\0') {
        const char *ptr = str + 1;
        while (*ptr != '\0') {
            if (*str == *ptr && *str != ' ') {
                return 0;
            }
            ptr++;
        }
        str++;
    }
    return 1;
}


int main() {
    while (1) {
        readln(buffer);     
        if (strcmp(buffer, "help")){
            if(is_isogram(buffer)){
                println("isograma");
            }else{
                println("nao isograma");
            }
        }else{
            println("A Beattles's song.");
        }
    }

    return 0;
}

