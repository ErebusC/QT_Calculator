#ifndef ADVANCED_MATH_H
#define ADVANCED_MATH_H

#include <QMainWindow>
#include <QWidget>
#include <included_headers.h>

extern double edp2_returned_val;
extern char edp2_c_op;

class advanced_math
{
public:
    advanced_math();

    //functions
    double edp2_add(double edp2_val_1, double edp2_val_2);
    double edp2_subtract(double edp2_val_1, double edp2_val_2);
    double edp2_multiply(double edp2_val_1, double edp2_val_2);
    double edp2_divide(double edp2_val_1, double edp2_val_2);
    double edp2_sin(double edp2_val_1);
    double edp2_cos(double edp2_val_1);
    double edp2_tan(double edp2_val_1);
    double edp2_log(double edp2_val_1);

private:

};

#endif // ADVANCED_MATH_H
