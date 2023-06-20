#ifndef IMAGE_H
#define IMAGE_H


typedef struct image_file_list ImageFileList;

typedef struct image_file_module ImageFileModule;

typedef struct locality_file_list LocalityFileList;

typedef struct locality_file_module LocalityFileModule;


void index_images(char * image_path[]);

void query_image(char * image_path[]);

ImageFileModule * compare_locality_files();

int is_similar(FILE * file1, FILE * file2);

#endif
