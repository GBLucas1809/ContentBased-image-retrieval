#include <stdio.h>
#include <stdlib.h>
#include "image.h"
#include <opencv4/opencv2/opencv.hpp>

int main(int argc, char *argv[]){
    
    if argv[1] == "index_image":
        index_images(argv[2]);

    else argv[1]== "query":
        if has_locality_file("") == 1:
            query_image(argv[2]);
        else:
            printf("Erro! Não há arquivos de localidade");


   
    return 0;
}
