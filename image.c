#include <stdlib.h>
#include <stdio.h>
#include "image.h"

struct image_file_list{

    ImageFileModule * first_image;
    int qtd_images;

}ImageFileList;


struct image_file_module{

    FILE * image_file;
    ImageFileModule * next_image;

}ImageFileModule;

struct locality_file_list{

    LocalityFileModule * first_file;
    int file_qtd;

}LocalityFileList;

struct locality_file_module{

    FILE * locality_file;
    LocalityFileModule * next_file;

}LocalityFileModule;


/*
O compilador, ao selecionar os arquivos a serem compilados, verifica primeiramente os headers(arquivos .h), 
onde deverão ter as definições e declarações dos TADS, estruturas e funções da aplicação
*/
