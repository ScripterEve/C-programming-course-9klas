#ifndef TRANSFORMATION_H_
#define TRASFORMATION_H_
 struct Transformation{
    long result;
    char error[100];
};

struct Transformation transform(char string[]);

#endif