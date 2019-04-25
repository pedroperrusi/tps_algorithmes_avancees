#include "recalage/Image.h"

void Image::readImageFromFile(char* filename)
{
    FILE *in_file;
    char ch;
    int row, col, type;
    int ch_int;
    double ch_double;

    in_file = fopen(filename, "r");
    if (in_file == NULL)
    {
        fprintf(stderr, "Error: Unable to open file %s\n\n", filename);
        exit(8);
    }

    /*determine pgm image type (only type three can be used)*/
    ch = getc(in_file);
    if(ch != 'P')
    {
        printf("ERROR(1): Not valid pgm/ppm file type\n");
        exit(1);
    }

    ch = getc(in_file);
    /*convert the one digit integer currently represented as a character to
        an integer(48 == '0')*/
    type = ch - 48;
    if((type != 2) && (type != 3) && (type != 5) && (type != 6))
    {
        printf("ERROR(2): Not valid pgm/ppm file type\n");
        exit(1);
    }

    fscanf(in_file,"%d", &(this->width));
    fscanf(in_file,"%d", &(this->height));
    fscanf(in_file,"%d", &(this->maxVal));

    // printf("\n width  = %d",this->width);
    // printf("\n height = %d",this->height);
    // printf("\n maxVal = %d",this->maxVal);
    // printf("\n");

    this->resize(width, height);

    if ((this->width > MAX_PGM) || (this->height > MAX_PGM))
    {
        printf("\n\n***ERROR - image too big for current image structure***\n\n");
        exit(1);
    }

    if(type == 2) /*uncompressed ascii file (B/W)*/
    {
        for (row = this->height-1; row >= 0; row--)
            for (col = 0; col < this->width; col++)
            {
                fscanf(in_file," %d", &ch_int);
                ch_double = double(ch_int);
                this->setValue(col, row, ch_double);
            }
    }
    fclose(in_file);
    // printf("\nDone reading file.\n");
  }
  
  
  void Image::writeImageToFile(char* filename)
  {
    int i, j, nr, nc, k;
    FILE *iop;

    nr = this->height;
    nc = this->width;
    
    iop = fopen(filename, "w");
    fprintf(iop, "P2 ");
    fprintf(iop, "%d %d", nc, nr);
    fprintf(iop, "255\n");
    
    for(i = nr - 1; i  >= 0; i--)
    {
        for(j = 0; j <  nc; j++)
        {
            fprintf(iop, " %d", int(this->getValue(j,i)));
        }
        fprintf(iop, "\n");
    }
    fclose(iop);
  }