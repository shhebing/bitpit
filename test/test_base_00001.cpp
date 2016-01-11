// ================================================================================== //
//                         OPERATORS - EXAMPLES OF USAGE -                            //
//                                                                                    //
// Examples of Operators usage.                                                       //
// ================================================================================== //
// INFO                                                                               //
// ================================================================================== //
// Author     : Alessandro Alaia                                                      //
// Version    : v3.0                                                                  //
//                                                                                    //
// All rights reserved.                                                               //
// ================================================================================== //

// ================================================================================== //
// INCLUDES                                                                           //
// ================================================================================== //
# include "test_base_00001.hpp"

// ================================================================================== //
// IMPLEMENTATIONS                                                                    //
// ================================================================================== //

// ---------------------------------------------------------------------------------- //
void vectorOperators_Ex(
    void
) {

// ================================================================================== //
// void vectorOperators_Ex(                                                           //
//     void)                                                                          //
//                                                                                    //
// Examples of usage of operators for vectors                                         //
// ================================================================================== //
// INPUT                                                                              //
// ================================================================================== //
// - none                                                                             //
// ================================================================================== //
// OUTPUT                                                                             //
// ================================================================================== //
// - none                                                                             //
// ================================================================================== //

// ================================================================================== //
// VARIABLES DECLARATION                                                              //
// ================================================================================== //

// Local variables
// none

// Counters
// none

// ================================================================================== //
// OPERATOR "+"                                                                       //
// ================================================================================== //
{

    // Output message
    cout << "** operator+ for std::vector" << endl;

    // Scope variables
    double              a = 1, b = 2;
    dvector1D           x, y, z;
    dvector2D           X, Y, Z;

    // Initialize vectors
    x.resize(3, 1.0);
    x[0] = 1.0;    x[1] = 2.0;    x[2] = 3.0;
    y = x;
    X.resize(3, dvector1D(2, 0.0));
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Sum between vectors
    cout << "  sum between 1D vectors" << endl;
    cout << "    x + y = ";
    z = x+y;
    display(cout, z) << endl;
    cout << "  sum between 2D vectors" << endl;
    cout << "    X + Y = ";
    Z = X + Y;
    display(cout, Z) << endl;
    cout << "  sum between 1D/2D vectors" << endl;
    cout << "    x + Y = ";
    Z = x + Y;
    display(cout, Z) << endl;
    cout << "    X + y = ";
    Z = X + y;
    display(cout, Z) << endl;
    cout << "  sum between const and 1D vectors" << endl;
    cout << "    a + x = ";
    z = a + x;
    display(cout, z) << endl;
    cout << "    y + b = ";
    z = y + b;
    display(cout, z) << endl;
    cout << "  sum between const and 2D vectors" << endl;
    cout << "  a + X = ";
    Z = a + X;
    display(cout, Z) << endl;
    cout << "  Y + b = ";
    Z = Y + b;
    display(cout, Z) << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "+="                                                                      //
// ================================================================================== //
{

    // Output message
    cout << "** operator+= for std::vector" << endl;

    // Scope variables
    double              a = 1, b = 2;
    dvector1D           x, y, z;
    dvector2D           X, Y, Z;

    // Initialize vectors
    x.resize(3, 1.0);
    x[0] = 1.0;    x[1] = 2.0;    x[2] = 3.0;
    y = x;
    X.resize(3, dvector1D(2, 0.0));
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Increment vectors
    cout << "  Increment of 1D vector with 1D vector" << endl;
    cout << "    x += y, x = ";
    x += y;
    display(cout, x) << endl;
    cout << "  Increment of 2D vector with 2D vector" << endl;
    cout << "    X += Y, X = ";
    X += Y;
    display(cout, X) << endl;
    cout << "  Increment of 2D vector with 1D vector" << endl;
    cout << "    X += y, X = ";
    X += y;
    display(cout, X) << endl;
    cout << "  Increment of 1D vector with constant" << endl;
    cout << "    x += a, x = ";
    x += a;
    display(cout, x) << endl;
    cout << "  Increment of 2D vector with constant" << endl;
    cout << "    X += a, X = ";
    X += a;
    display(cout, X) << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "-"                                                                       //
// ================================================================================== //
{
    // Output message
    cout << "** operator- for std::vector" << endl;

    // Scope variables
    double              a = 1, b = 2;
    dvector1D           x, y, z;
    dvector2D           X, Y, Z;

    // Initialize vectors
    x.resize(3, 1.0);
    x[0] = 1.0;    x[1] = 2.0;    x[2] = 3.0;
    y = x;
    X.resize(3, dvector1D(2, 0.0));
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Sum between vectors
    cout << "  diff between 1D vectors" << endl;
    cout << "    x - y = ";
    z = x - y;
    display(cout, z) << endl;
    cout << "  diff between 2D vectors" << endl;
    cout << "    X - Y = ";
    Z = X - Y;
    display(cout, Z) << endl;
    cout << "  diff between 1D/2D vectors" << endl;
    cout << "    x - Y = ";
    Z = x - Y;
    display(cout, Z) << endl;
    cout << "    X - y = ";
    Z = X - y;
    display(cout, Z) << endl;
    cout << "  diff between const and 1D vectors" << endl;
    cout << "    a - x = ";
    z = a - x;
    display(cout, z) << endl;
    cout << "    y - b = ";
    z = y - b;
    display(cout, z) << endl;
    cout << "  diff between const and 2D vectors" << endl;
    cout << "    a - X = ";
    Z = a - X;
    display(cout, Z) << endl;
    cout << "    Y - b = ";
    Z = Y - b;
    display(cout, Z) << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "-="                                                                      //
// ================================================================================== //
{
    // Output message
    cout << "** operator-= for std::vector" << endl;

    // Scope variables
    double              a = 1, b = 2;
    dvector1D           x, y, z;
    dvector2D           X, Y, Z;

    // Initialize vectors
    x.resize(3, 1.0);
    x[0] = 1.0;    x[1] = 2.0;    x[2] = 3.0;
    y = x;
    X.resize(3, dvector1D(2, 0.0));
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Negative increment of vectors
    cout << "  Increment of 1D vector with 1D vector" << endl;
    cout << "    x -= y, x = ";
    x -= y;
    display(cout, x) << endl;
    cout << "  Increment of 2D vector with 2D vector" << endl;
    cout << "    X -= Y, X = ";
    X -= Y;
    display(cout, X) << endl;
    cout << "  Increment of 2D vector with 1D vector" << endl;
    cout << "    X -= y, X = ";
    X -= y;
    display(cout, X) << endl;
    cout << "  Increment of 1D vector with constant" << endl;
    cout << "    x -= a, x = ";
    x -= a;
    display(cout, x) << endl;
    cout << "  Increment of 2D vector with constant" << endl;
    cout << "    X -= a, X = ";
    X -= a;
    display(cout, X) << endl;
}

// ================================================================================== //
// OPERATOR "*"                                                                       //
// ================================================================================== //
{

    // Output message
    cout << "** operator* for std::vector" << endl;

    // Scope variables
    double              a = 1, b = 2;
    dvector1D           x, y, z;
    dvector2D           X, Y, Z;

    // Initialize vectors
    x.resize(3, 1.0);
    x[0] = 1.0;    x[1] = 2.0;    x[2] = 3.0;
    y = x;
    X.resize(3, dvector1D(2, 0.0));
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Sum between vectors
    cout << "  prod between 1D vectors" << endl;
    cout << "    x * y = ";
    z = x * y;
    display(cout, z) << endl;
    cout << "  prod between 2D vectors" << endl;
    cout << "    X * Y = ";
    Z = X * Y;
    display(cout, Z) << endl;
    cout << "  prod between 1D/2D vectors" << endl;
    cout << "    x * Y = ";
    Z = x * Y;
    display(cout, Z) << endl;
    cout << "    X * y = ";
    Z = X * y;
    display(cout, Z) << endl;
    cout << "  prod between const and 1D vectors" << endl;
    cout << "    a * x = ";
    z = a * x;
    display(cout, z) << endl;
    cout << "    y * b = ";
    z = y * b;
    display(cout, z) << endl;
    cout << "  prod between const and 2D vectors" << endl;
    cout << "    a * X = ";
    Z = a * X;
    display(cout, Z) << endl;
    cout << "    Y * b = ";
    Z = Y * b;
    display(cout, Z) << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "/"                                                                       //
// ================================================================================== //
{

    // Output message
    cout << "** operator/ for std::vector" << endl;

    // Scope variables
    double              a = 1, b = 2;
    dvector1D           x, y, z;
    dvector2D           X, Y, Z;

    // Initialize vectors
    x.resize(3, 1.0);
    x[0] = 1.0;    x[1] = 2.0;    x[2] = 3.0;
    y = x;
    X.resize(3, dvector1D(2, 0.0));
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = " << endl;
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Sum between vectors
    cout << "  div between 1D vectors" << endl;
    cout << "    x / y = ";
    z = x / y;
    display(cout, z) << endl;
    cout << "  div between 2D vectors" << endl;
    cout << "    X / Y = ";
    Z = X / Y;
    display(cout, Z) << endl;
    cout << "  div between 1D/2D vectors" << endl;
    cout << "    x / Y = ";
    Z = x / Y;
    display(cout, Z) << endl;
    cout << "    X / y = ";
    Z = X / y;
    display(cout, Z) << endl;
    cout << "  div between const and 1D vectors" << endl;
    cout << "    a / x = ";
    z = a / x;
    display(cout, z) << endl;
    cout << "    y / b = ";
    z = y / b;
    display(cout, z) << endl;
    cout << "  div between const and 2D vectors" << endl;
    cout << "    a / X = ";
    Z = a / X;
    display(cout, Z) << endl;
    cout << "    Y / b = ";
    Z = Y / b;
    display(cout, Z) << endl;
    cout << endl;
}

// ================================================================================== //
// OUTPUT MESSAGE                                                                     //
// ================================================================================== //
{
    cout << endl;
}

return; };

// ---------------------------------------------------------------------------------- //
void vectorMathFunct_Ex(
    void
) {

// ================================================================================== //
// void vectorMathFunct_Ex(                                                           //
//     void)                                                                          //
//                                                                                    //
// Examples of usage of operators for vectors                                         //
// ================================================================================== //
// INPUT                                                                              //
// ================================================================================== //
// - none                                                                             //
// ================================================================================== //
// OUTPUT                                                                             //
// ================================================================================== //
// - none                                                                             //
// ================================================================================== //

// ================================================================================== //
// VARIABLES DECLARATION                                                              //
// ================================================================================== //

// Local variables
// none

// Counters
// none

// ================================================================================== //
// OPERATOR "min"                                                                     //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function min()" << endl;

    // Scope variables -------------------------------------------------------------- //
    double                       a = 1.5;
    dvector1D                    x(3), t(3);
    dvector2D                    y(3, dvector1D(3)), z(3, dvector1D(3));

    // Initialize scope variables --------------------------------------------------- //
    x[0] = 3.0; x[1] = 3.0; x[2] = 3.0;
    t[0] = 1.0; t[1] = 4.0; t[2] = 2.0;
    y[0][0] = 0.0; y[0][1] = 1.0; y[0][2] = 2.0;
    y[1][0] = 3.0; y[1][1] = 4.0; y[1][2] = 5.0;
    y[2][0] = 6.0; y[2][1] = 7.0; y[2][2] = 8.0;
    z[0][0] = 2.0; z[0][1] = 2.0; z[0][2] = 2.0;
    z[1][0] = 2.0; z[1][1] = 2.0; z[1][2] = 2.0;
    z[2][0] = 2.0; z[2][1] = 2.0; z[2][2] = 2.0;
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    t = ";
    display(cout, t) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    z = ";
    display(cout, z) << endl;

    // min between scalar and 1D array ---------------------------------------------- //
    cout << "  min(t, a) = ";
    display(cout, min(t, a)) << endl;

    // min between 1D arrays -------------------------------------------------------- //
    cout << "  min(x, t) = ";
    display(cout, min(x, t)) << endl;

    // min between scalar and 2D array ---------------------------------------------- //
    cout << "  min(y, a) = ";
    display(cout, min(y, a)) << endl;

    // min between 1D array and 2D array -------------------------------------------- //
    cout << "  min(y, x) = ";
    display(cout, min(y, x)) << endl;

    // min between 2D arrays -------------------------------------------------------- //
    cout << "  min(y, z) = ";
    display(cout, min(y, z)) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "minval"                                                                  //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function minval()" << endl;

    // Scope variables -------------------------------------------------------------- //
    int                nn = 0;
    double             a = 3.0, mm;
    dvector1D          x(3, 0.0);
    ivector1D          i(3, 1);
    ivector2D          y(3, ivector1D(3, 0));

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    i[0] = 4;   i[1] = 1;   i[2] = 4;
    y[0] = 2*i;
    y[1] = i;
    y[2] = 2*i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;

    // Minval of double ------------------------------------------------------------- //
    minval(a,mm);
    cout << "  minval(a) = " << mm << endl;

    // Minval of 1D vector ---------------------------------------------------------- //
    minval(x,mm);
    cout << "  minval(x) = " << mm << endl;

    // Minval of 2D vector ---------------------------------------------------------- //
    minval(y,nn);
    cout << "  minval(y) = " << nn << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "max"                                                                     //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function max()" << endl;

    // Scope variables -------------------------------------------------------------- //
    double                       a = 1.5;
    dvector1D                    x(3), t(3);
    dvector2D                    y(3, dvector1D(3)), z(3, dvector1D(3));

    // Initialize scope variables --------------------------------------------------- //
    cout << "  Declared:" << endl;
    x[0] = 3.0; x[1] = 3.0; x[2] = 3.0;
    t[0] = 1.0; t[1] = 4.0; t[2] = 2.0;
    y[0][0] = 0.0; y[0][1] = 1.0; y[0][2] = 2.0;
    y[1][0] = 3.0; y[1][1] = 4.0; y[1][2] = 5.0;
    y[2][0] = 6.0; y[2][1] = 7.0; y[2][2] = 8.0;
    z[0][0] = 2.0; z[0][1] = 2.0; z[0][2] = 2.0;
    z[1][0] = 2.0; z[1][1] = 2.0; z[1][2] = 2.0;
    z[2][0] = 2.0; z[2][1] = 2.0; z[2][2] = 2.0;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    t = ";
    display(cout, t) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    z = ";
    display(cout, z) << endl;

    // min between scalar and 1D array ---------------------------------------------- //
    cout << "  max(t, a) = ";
    display(cout, max(t,a)) << endl;

    // min between 1D arrays -------------------------------------------------------- //
    cout << "  max(x, t) = ";
    display(cout, max(x, t)) << endl;

    // min between scalar and 2D array ---------------------------------------------- //
    cout << "  max(y, a) = ";
    display(cout, max(y, a)) << endl;

    // min between 1D array and 2D array -------------------------------------------- //
    cout << "  max(y, x) = ";
    display(cout, max(y, x)) << endl;

    // min between 2D arrays -------------------------------------------------------- //
    cout << "  max(y, z) = ";
    display(cout, max(y, z)) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "maxval"                                                                  //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function maxval()" << endl;

    // Scope variables -------------------------------------------------------------- //
    int                nn = 0;
    double             a = 3.0, mm;
    dvector1D          x(3, 0.0);
    ivector1D          i(3, 1);
    ivector2D          y(3, ivector1D(3, 0));

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    i[0] = 1;   i[1] = 2;   i[2] = 4;
    y[0] = i;
    y[1] = 2*i;
    y[2] = 3*i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;

    // Minval of double ------------------------------------------------------------- //
    maxval(a,mm);
    cout << "  maxval(a) = " << mm << endl;

    // Minval of 1D vector ---------------------------------------------------------- //
    maxval(x,mm);
    cout << "  maxval(x) = " << mm << endl;

    // Minval of 2D vector ---------------------------------------------------------- //
    maxval(y,nn);
    cout << "  maxval(y) = " << nn << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "sum"                                                                     //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function sum()" << endl;

    // Scope variables -------------------------------------------------------------- //
    int                nn = -5;
    double             a = 3.0, mm;
    dvector1D          x(3, 0.0);

    uint32_t           su;
    vector<uint32_t>   u(3, 0);
    ivector1D          i(3, 1);
    ivector2D          y(3, ivector1D(3, 0));

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    u[0] = 1;    u[1] = 2;   u[2] = 3  ;
    i[0] = 1;    i[1] = 2;   i[2] = 4;
    y[0] = i;
    y[1] = 2*i;
    y[2] = 3*i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    u = ";
    display(cout, u) << endl;
    cout << "    y = ";
    display(cout, y) << endl;

    // Minval of double ------------------------------------------------------------- //
    sum(a,mm);
    cout << "  sum(a) = " << mm << endl;

    // Minval of 1D vector ---------------------------------------------------------- //
    sum(x,mm);
    cout << "  sum(x) = " << mm << endl;

    // Minval of 1D vector ---------------------------------------------------------- //
    sum(u,su);
    cout << "  sum(u) = " << su << endl;


    // Minval of 2D vector ---------------------------------------------------------- //
    sum(y,nn);
    cout << "  sum(y) = " << nn << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "abs"                                                                     //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function abs()" << endl;

    // Scope variables -------------------------------------------------------------- //
    double             a = 3.0;
    dvector1D          x(3, 0.0);
    ivector1D          i(3, 1);
    ivector2D          y(3, ivector1D(3, 0));

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = -1.1; x[2] = 3.0;
    i[0] = 1;   i[1] = 2;   i[2] = 4;
    y[0] = i;
    y[1] = 2*i;
    y[2] = -1*i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;

    // Minval of double ------------------------------------------------------------- //
    cout << "  abs(a) = " << abs(a) << endl;

    // Minval of 1D vector ---------------------------------------------------------- //
    cout << "  abs(x) = ";
    display(cout, abs(x)) << endl;

    // Minval of 2D vector ---------------------------------------------------------- //
    cout << "  abs(y) = ";
    display(cout, abs(y)) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "pow"                                                                     //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function pow()" << endl;

    // Scope variables -------------------------------------------------------------- //
    double             a = 3.0;
    dvector1D          x(3, 0.0);
    ivector1D          i(3, 1);
    ivector2D          y(3, ivector1D(3, 0));

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    i[0] = 1;   i[1] = 2;   i[2] = 4;
    y[0] = i;
    y[1] = 2*i;
    y[2] = 3*i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;

    // Minval of double ------------------------------------------------------------- //
    cout << "  pow(a,2) = " << pow(a,2.0) << endl;

    // Minval of 1D vector ---------------------------------------------------------- //
    cout << "  pow(x,2) = ";
    display(cout, pow(x,2.0)) << endl;

    // Minval of 2D vector ---------------------------------------------------------- //
    cout << "  pow(y,2) = ";
    display(cout, pow(y,2.0)) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "norm"                                                                    //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function norm()" << endl;

    // Scope variables -------------------------------------------------------------- //
    dvector1D          x(3, 0.0);
    ivector1D          i(3, 1);

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    i[0] = 1;   i[1] = -2;   i[2] = -4;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    i = ";
    display(cout, i) << endl;

    // norm of vector< double > ----------------------------------------------------- //
    cout << "  norm(x,2) = " << norm(x,2) << endl;
    cout << "  norm(x,3) = " << norm(x,3) << endl;
    cout << "  norm_inf(x) = " << norm_inf(x) << endl;

    // norm of vector< int > -------------------------------------------------------- //
    cout << "  norm(i,2) = " << norm(i,2) << endl;
    cout << "  norm(i,3) = " << norm(i,3) << endl;
    cout << "  norm_inf(i) = " << norm_inf(i) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "Dot_Product"                                                             //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function Dot_Product()" << endl;

    // Scope variables -------------------------------------------------------------- //
    dvector1D          x(3, 0.0), y(3, 0.0);
    ivector1D          i(3, 1), j(3, 0);

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    y = x;
    i[0] = 1;   i[1] = -2;   i[2] = 4;
    j = i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    i = ";
    display(cout, i) << endl;
    cout << "    j = ";
    display(cout, j) << endl;

    // Dot_Product of vector< double > ---------------------------------------------- //
    cout << "  Dot_Product(x,y) = " << Dot_Product(x,y) << endl;

    // Dot_Product of vector< int > ------------------------------------------------- //
    cout << "  Dot_Product(i,j) = " << Dot_Product(i,j) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "Cross_Product"                                                           //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function Cross_Product()" << endl;

    // Scope variables -------------------------------------------------------------- //
    dvector1D          x(3, 0.0), y(3, 0.0);
    ivector1D          i(3, 1), j(3, 0);

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 0.0; x[2] = 0.0;
    y[0] = 0.00; y[1] = 2.1; y[2] = 0.0;
    i[0] = 0;   i[1] = -2;   i[2] = 0;
    j[0] = 4;   j[1] =  0;   j[2] = 0;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    i = ";
    display(cout, i) << endl;
    cout << "    j = ";
    display(cout, j) << endl;

    // Dot_Product of vector< double > ---------------------------------------------- //
    cout << "  Cross_Product(x,y) = ";
    display(cout, Cross_Product(x,y)) << endl;
    cout << "  Cross_Product(x,x) = ";
    display(cout, Cross_Product(x,x)) << endl;

    // Dot_Product of vector< int > ------------------------------------------------- //
    cout << "  Cross_Product(i,j) = ";
    display(cout, Cross_Product(i,j)) << endl;
    cout << "  Cross_Product(i,i) = ";
    display(cout, Cross_Product(i,i)) << endl;
    cout << endl;

}

// ================================================================================== //
// OUTPUT MESSAGE                                                                     //
// ================================================================================== //
{
    cout << endl;
}

return; };

// ---------------------------------------------------------------------------------- //
void arrayOperators_Ex(
    void
) {

// ================================================================================== //
// void arrayOperators_Ex(                                                            //
//     void)                                                                          //
//                                                                                    //
// Examples of usage of operators for arrays                                          //
// ================================================================================== //
// INPUT                                                                              //
// ================================================================================== //
// - none                                                                             //
// ================================================================================== //
// OUTPUT                                                                             //
// ================================================================================== //
// - none                                                                             //
// ================================================================================== //

// ================================================================================== //
// VARIABLES DECLARATION                                                              //
// ================================================================================== //

// Local variables
// none

// Counters
// none

// ================================================================================== //
// OPERATOR "+"                                                                       //
// ================================================================================== //
{

    // Output message
    cout << "** operator+ for std::array" << endl;

    // Scope variables
    double                      a = 1, b = 2;
    array<double, 2>            x, y, z;
    array<array<double, 2>, 2>  X, Y, Z;

    // Initialize arrays
    x[0] = 1.0;    x[1] = 2.0;
    y = x;
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Sum between arrays
    cout << "  sum between 1D arrays" << endl;
    cout << "    x + y = ";
    z = x+y;
    display(cout, z) << endl;
    cout << "  sum between 2D arrays" << endl;
    cout << "    X + Y = ";
    Z = X + Y;
    display(cout, Z) << endl;
    cout << "  sum between 1D/2D arrays" << endl;
    cout << "    x + Y = ";
    Z = x + Y;
    display(cout, Z) << endl;
    cout << "    X + y = ";
    Z = X + y;
    display(cout, Z) << endl;
    cout << "  sum between const and 1D arrays" << endl;
    cout << "    a + x = ";
    z = a + x;
    display(cout, z) << endl;
    cout << "    y + b = ";
    z = y + b;
    display(cout, z) << endl;
    cout << "  sum between const and 2D arrays" << endl;
    cout << "    a + X = ";
    Z = a + X;
    display(cout, Z) << endl;
    cout << "    Y + b = ";
    Z = Y + b;
    display(cout, Z) << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "+="                                                                      //
// ================================================================================== //
{

    // Output message
    cout << "** operator+= for std::array" << endl;

    // Scope variables
    double                              a = 1, b = 2;
    array<double, 2>                    c, d;
    array<double, 3>                    x, y, z;
    array<array<double, 2>, 3>          X, Y, Z;

    // Initialize arrays
    c[0] = 1.0;    c[1] = 2.0;
    d = c;
    x[0] = 1.0;    x[1] = 2.0;    x[2] = 3.0;
    y = x;
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Increment of arrays
    cout << "  Increment of 1D array with 1D array" << endl;
    cout << "    x += y, x = ";
    x += y;
    display(cout, x) << endl;
    cout << "  Increment of 2D array with 2D array" << endl;
    cout << "    X += Y, X = ";
    X += Y;
    display(cout, X) << endl;
    cout << "  Increment of 2D array with 1D array" << endl;
    cout << "    X += y, X = ";
    X += c;
    display(cout, X) << endl;
    cout << "  Increment of 1D array with constant" << endl;
    cout << "    x += a, x = ";
    x += a;
    display(cout, x) << endl;
    cout << "  Increment of 2D array with constant" << endl;
    cout << "    X += a, X = ";
    X += a;
    display(cout, X) << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "-"                                                                       //
// ================================================================================== //
{

    // Output message
    cout << "** operator- for std::array" << endl;

    // Scope variables
    double                      a = 1, b = 2;
    array<double, 2>            x, y, z;
    array<array<double, 2>, 2>  X, Y, Z;

    // Initialize vectors
    x[0] = 1.0;    x[1] = 2.0;
    y = x;
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared: " << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Sum between arrays
    cout << "  diff between 1D arrays" << endl;
    cout << "    x - y = ";
    z = x - y;
    display(cout, z) << endl;
    cout << "  diff between 2D arrays" << endl;
    cout << "    X - Y = ";
    Z = X - Y;
    display(cout, Z) << endl;
    cout << "  diff between 1D/2D arrays" << endl;
    cout << "    x - Y = ";
    Z = x - Y;
    display(cout, Z) << endl;
    cout << "    X - y = ";
    Z = X - y;
    display(cout, Z) << endl;
    cout << "  diff between const and 1D arrays" << endl;
    cout << "    a - x = ";
    z = a - x;
    display(cout, z) << endl;
    cout << "    y - b = ";
    z = y - b;
    display(cout, z) << endl;
    cout << "  diff between const and 2D arrays" << endl;
    cout << "    a - X = ";
    Z = a - X;
    display(cout, Z) << endl;
    cout << "    Y - b = ";
    Z = Y - b;
    display(cout, Z) << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "-="                                                                      //
// ================================================================================== //
{
    // Output message
    cout << "** operator-= for std::array" << endl;

    // Scope variables
    double                      a = 1, b = 2;
    array<double, 2>            c, d;
    array<double, 3>            x, y, z;
    array<array<double, 2>, 3>  X, Y, Z;

    // Initialize arrays
    c[0] = 1.0;    c[1] = 2.0;
    d = c;
    x[0] = 1.0;    x[1] = 2.0;    x[2] = 3.0;
    y = x;
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Negative increment of arrays
    cout << "  Increment of 1D array with 1D array" << endl;
    cout << "    x -= y, x = ";
    x -= y;
    display(cout, x) << endl;
    cout << "  Increment of 2D array with 2D array" << endl;
    cout << "    X -= Y, X = ";
    X -= Y;
    display(cout, X) << endl;
    cout << "  Increment of 2D array with 1D array" << endl;
    cout << "    X -= y, X = ";
    X -= c;
    display(cout, X) << endl;
    cout << "  Increment of 1D array with constant" << endl;
    cout << "    x -= a, x = ";
    x -= a;
    display(cout, x) << endl;
    cout << "  Increment of 2D array with constant" << endl;
    cout << "    X -= a, X = ";
    X -= a;
    display(cout, X) << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "*"                                                                       //
// ================================================================================== //
{
    // Output message
    cout << "** operator* for std::array" << endl;
   
    // Scope variables
    double                      a = 1, b = 2;
    array<double, 2>            x, y, z;
    array<array<double, 2>, 2>  X, Y, Z;

    // Initialize arrays
    x[0] = 1.0;    x[1] = 2.0;
    y = x;
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Sum between arrays
    cout << "  prod between 1D arrays" << endl;
    cout << "    x * y = ";
    z = x * y;
    display(cout, z) << endl;
    cout << "  prod between 2D arrays" << endl;
    cout << "    X * Y = ";
    Z = X * Y;
    display(cout, Z) << endl;
    cout << "  prod between 1D/2D arrays" << endl;
    cout << "    x * Y = ";
    Z = x * Y;
    display(cout, Z) << endl;
    cout << "    X * y = ";
    Z = X * y;
    display(cout, Z) << endl;
    cout << "  prod between const and 1D arrays" << endl;
    cout << "    a * x = ";
    z = a * x;
    display(cout, z) << endl;
    cout << "    y * b = ";
    z = y * b;
    display(cout, z) << endl;
    cout << "  prod between const and 2D arrays" << endl;
    cout << "    a * X = ";
    Z = a * X;
    display(cout, Z) << endl;
    cout << "    Y * b = ";
    Z = Y * b;
    display(cout, Z) << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "/"                                                                       //
// ================================================================================== //
{
    // Output message
    cout << "** operator/ for std::array" << endl;

    // Scope variables
    double                      a = 1, b = 2;
    array<double, 2>            x, y, z;
    array<array<double, 2>, 2>  X, Y, Z;

    // Initialize arrays
    x[0] = 1.0;    x[1] = 2.0;
    y = x;
    X[0][0] = 1.0;    X[0][1] = 2.0;
    X[1][0] = 3.0;    X[1][1] = 4.0;
    X[2][0] = 5.0;    X[2][1] = 6.0;
    Y = X;

    // Variables
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    b = " << b << endl;
    cout << "    x = " << endl;
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    X = ";
    display(cout, X) << endl;
    cout << "    Y = ";
    display(cout, Y) << endl;

    // Sum between arrays
    cout << "  div between 1D arrays" << endl;
    cout << "    x / y = ";
    z = x / y;
    display(cout, z) << endl;
    cout << "  div between 2D arrays" << endl;
    cout << "    X / Y = ";
    Z = X / Y;
    display(cout, Z) << endl;
    cout << "  div between 1D/2D arrays" << endl;
    cout << "    x / Y = ";
    Z = x / Y;
    display(cout, Z) << endl;
    cout << "    X / y = ";
    Z = X / y;
    display(cout, Z) << endl;
    cout << "  div between const and 1D arrays" << endl;
    cout << "    a / x = ";
    z = a / x;
    display(cout, z) << endl;
    cout << "    y / b = ";
    z = y / b;
    display(cout, z) << endl;
    cout << "  div between const and 2D arrays" << endl;
    cout << "    a / X = ";
    Z = a / X;
    display(cout, Z) << endl;
    cout << "    Y / b = ";
    Z = Y / b;
    display(cout, Z) << endl;
    cout << endl;
}

// ================================================================================== //
// OUTPUT MESSAGE                                                                     //
// ================================================================================== //
{
    cout << endl;
}

return; };

// ---------------------------------------------------------------------------------- //
void arrayMathFunct_Ex(
    void
) {

// ================================================================================== //
// void arrayMathFunct_Ex(                                                            //
//     void)                                                                          //
//                                                                                    //
// Examples of usage of operators for C++ v10.0 arrays.                               //
// ================================================================================== //
// INPUT                                                                              //
// ================================================================================== //
// - none                                                                             //
// ================================================================================== //
// OUTPUT                                                                             //
// ================================================================================== //
// - none                                                                             //
// ================================================================================== //

// ================================================================================== //
// VARIABLES DECLARATION                                                              //
// ================================================================================== //

// Local variables
// none

// Counters
// none

// ================================================================================== //
// OPERATOR "min"                                                                     //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function min()" << endl;

    // Scope variables -------------------------------------------------------------- //
    double                       a = 1.5;
    array<double, 3>             x, t;
    array<array<double, 3>, 3>   y, z;

    // Initialize scope variables --------------------------------------------------- //
    x[0] = 3.0; x[1] = 3.0; x[2] = 3.0;
    t[0] = 1.0; t[1] = 4.0; t[2] = 2.0;
    y[0][0] = 0.0; y[0][1] = 1.0; y[0][2] = 2.0;
    y[1][0] = 3.0; y[1][1] = 4.0; y[1][2] = 5.0;
    y[2][0] = 6.0; y[2][1] = 7.0; y[2][2] = 8.0;
    z[0][0] = 2.0; z[0][1] = 2.0; z[0][2] = 2.0;
    z[1][0] = 2.0; z[1][1] = 2.0; z[1][2] = 2.0;
    z[2][0] = 2.0; z[2][1] = 2.0; z[2][2] = 2.0;
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    t = ";
    display(cout, t) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    z = ";
    display(cout, z) << endl;

    // min between scalar and 1D array ---------------------------------------------- //
    cout << "  min(t, a) = ";
    display(cout, min(t,a)) << endl;

    // min between 1D arrays -------------------------------------------------------- //
    cout << "  min(x, t) = ";
    display(cout, min(x, t)) << endl;

    // min between scalar and 2D array ---------------------------------------------- //
    cout << "  min(y, a) = ";
    display(cout, min(y, a)) << endl;

    // min between 1D array and 2D array -------------------------------------------- //
    cout << "  min(y, x) = ";
    display(cout, min(y, x)) << endl;

    // min between 2D arrays -------------------------------------------------------- //
    cout << "  min(y, z) = ";
    display(cout, min(y, z)) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "minval"                                                                  //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function minval()" << endl;

    // Scope variables -------------------------------------------------------------- //
    int                      nn = 0;
    double                   a = 3.0, mm;
    array<double, 3>         x;
    array<int, 3>            i;
    array<array<int, 3>, 3>  y;

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    i[0] = 4;   i[1] = 1;   i[2] = 4;
    y[0] = 2*i;
    y[1] = i;
    y[2] = -3*i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;

    // Minval of double ------------------------------------------------------------- //
    minval(a,mm);
    cout << "  minval(a) = ";
    display(cout, mm) << endl;

    // Minval of 1D arrays ---------------------------------------------------------- //
    minval(x,mm);
    cout << "  minval(x) = ";
    display(cout, mm) << endl;

    // Minval of 2D arrays ---------------------------------------------------------- //
    minval(y,nn);
    cout << "  minval(y) = ";
    display(cout, nn) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "max"                                                                     //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function max()" << endl;

    // Scope variables -------------------------------------------------------------- //
    double                       a = 1.5;
    array<double, 3>             x, t;
    array<array<double, 3>, 3>   y, z;

    // Initialize scope variables --------------------------------------------------- //
    x[0] = 3.0; x[1] = 3.0; x[2] = 3.0;
    t[0] = 1.0; t[1] = 4.0; t[2] = 2.0;
    y[0][0] = 0.0; y[0][1] = 1.0; y[0][2] = 2.0;
    y[1][0] = 3.0; y[1][1] = 4.0; y[1][2] = 5.0;
    y[2][0] = 6.0; y[2][1] = 7.0; y[2][2] = 8.0;
    z[0][0] = 2.0; z[0][1] = 2.0; z[0][2] = 2.0;
    z[1][0] = 2.0; z[1][1] = 2.0; z[1][2] = 2.0;
    z[2][0] = 2.0; z[2][1] = 2.0; z[2][2] = 2.0;
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    t = ";
    display(cout, t) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    z = ";
    display(cout, z) << endl;

    // min between scalar and 1D array ---------------------------------------------- //
    cout << "  max(t, a) = ";
    display(cout, max(t,a)) << endl;

    // min between 1D arrays -------------------------------------------------------- //
    cout << "  max(x, t) = ";
    display(cout, max(x, t)) << endl;

    // min between scalar and 2D array ---------------------------------------------- //
    cout << "  max(y, a) = ";
    display(cout, max(y, a)) << endl;

    // min between 1D array and 2D array -------------------------------------------- //
    cout << "  max(y, x) = ";
    display(cout, max(y, x)) << endl;

    // min between 2D arrays -------------------------------------------------------- //
    cout << "  max(y, z) = ";
    display(cout, max(y, z)) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "maxval"                                                                  //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function maxval()" << endl;

    // Scope variables -------------------------------------------------------------- //
    int                          nn = 0;
    double                       a = 3.0, mm;
    array<double, 3>             x;
    array<int, 3>                i;
    array<array<int, 3>, 3>      y;

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    i[0] = 1;   i[1] = 2;   i[2] = 4;
    y[0] = i;
    y[1] = 2*i;
    y[2] = -3*i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;

    // Minval of double ------------------------------------------------------------- //
    maxval(a,mm);
    cout << "  maxval(a) = ";
    display(cout, mm) << endl;

    // Minval of 1D arrays ---------------------------------------------------------- //
    maxval(x,mm);
    cout << "  maxval(x) = ";
    display(cout, mm) << endl;

    // Minval of 2D arrays ---------------------------------------------------------- //
    maxval(y,nn);
    cout << "  maxval(y) = ";
    display(cout, nn) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "sum"                                                                     //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function sum()" << endl;

    // Scope variables -------------------------------------------------------------- //
    int                      nn = -5;
    double                   a = 3.0, mm;
    array<double, 3>         x;
    array<int, 3>            i;
    array<array<int, 3>, 3>  y;

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    i[0] = 1;   i[1] = 2;   i[2] = 4;
    y[0] = i;
    y[1] = 2*i;
    y[2] = 3*i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared: " << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;

    // Minval of double ------------------------------------------------------------- //
    sum(a,mm);
    cout << "  sum(a) = " << mm << endl;

    // Minval of 1D arrays ---------------------------------------------------------- //
    sum(x,mm);
    cout << "  sum(x) = " << mm << endl;

    // Minval of 2D arrays ---------------------------------------------------------- //
    sum(y,nn);
    cout << "  sum(y) = " << nn << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "abs"                                                                     //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function abs()" << endl;

    // Scope variables -------------------------------------------------------------- //
    double                   a = 3.0;
    array<double, 3>         x;
    array<int, 3>            i;
    array<array<int, 3>, 3>  y;

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = -1.1; x[2] = 3.0;
    i[0] = 1;   i[1] = 2;   i[2] = 4;
    y[0] = i;
    y[1] = 2*i;
    y[2] = -1*i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;

    // Minval of double ------------------------------------------------------------- //
    cout << "  abs(a) = ";
    display(cout, abs(a)) << endl;

    // Minval of 1D arrays ---------------------------------------------------------- //
    cout << "  abs(x) = ";
    display(cout, abs(x)) << endl;

    // Minval of 2D arrays ---------------------------------------------------------- //
    cout << "  abs(y) = ";
    display(cout, abs(y)) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "pow"                                                                     //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function pow()" << endl;

    // Scope variables -------------------------------------------------------------- //
    double                   a = 3.0;
    array<double, 3>         x;
    array<int, 3>            i;
    array<array<int, 3>, 3>  y;

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    i[0] = 1;   i[1] = 2;   i[2] = 4;
    y[0] = i;
    y[1] = 2*i;
    y[2] = 3*i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    a = " << a << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;

    // Minval of double ------------------------------------------------------------- //
    cout << "  pow(a,2) = " << pow(a,2.0) << endl;

    // Minval of 1D arrays ---------------------------------------------------------- //
    cout << "  pow(x,2) = " << pow(x,2.0) << endl;

    // Minval of 2D arrays ---------------------------------------------------------- //
    cout << "  pow(y,2) = " << pow(y,2.0) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "norm"                                                                    //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** functon norm()" << endl;

    // Scope variables -------------------------------------------------------------- //
    array<double, 3>   x;
    array<int, 3>      i;

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    i[0] = 1;   i[1] = -2;   i[2] = -4;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    i = ";
    display(cout, i) << endl;

    // norm of array< double > ------------------------------------------------------ //
    cout << "  norm(x,2) = " << norm(x,2) << endl;
    cout << "  norm(x,3) = " << norm(x,3) << endl;
    cout << "  norm_inf(x) = " << norm_inf(x) << endl;

    // norm of array< int > --------------------------------------------------------- //
    cout << "  norm(i,2) = " << norm(i,2) << endl;
    cout << "  norm(i,3) = " << norm(i,3) << endl;
    cout << "  norm_inf(i) = " << norm_inf(i) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "Dot_Product"                                                             //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** functon Dot_Product()" << endl;

    // Scope variables -------------------------------------------------------------- //
    array<double, 3>   x, y;
    array<int, 3>      i, j;

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 1.1; x[2] = 3.0;
    y = x;
    i[0] = 1;   i[1] = -2;   i[2] = 4;
    j = i;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y) << endl;
    cout << "    i = ";
    display(cout, i) << endl;
    cout << "    j = ";
    display(cout, j) << endl;

    // Dot_Product of array< double > ----------------------------------------------- //
    cout << "  Dot_Product(x,y) = " << Dot_Product(x,y) << endl;

    // Dot_Product of array< int > -------------------------------------------------- //
    cout << "  Dot_Product(i,j) = " << Dot_Product(i,j) << endl;
    cout << endl;

}

// ================================================================================== //
// OPERATOR "Cross_Product"                                                           //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** functon Cross_Product()" << endl;

    // Scope variables -------------------------------------------------------------- //
    dvector1D          x(3, 0.0), y(3, 0.0);
    ivector1D          i(3, 1), j(3, 0);

    // Initialize variables --------------------------------------------------------- //
    x[0] = 1.05; x[1] = 0.0; x[2] = 0.0;
    y[0] = 0.00; y[1] = 2.1; y[2] = 0.0;
    i[0] = 0;   i[1] = -2;   i[2] = 0;
    j[0] = 4;   j[1] =  0;   j[2] = 0;

    // Output message --------------------------------------------------------------- //
    cout << "  Declared:" << endl;
    cout << "    x = ";
    display(cout, x) << endl;
    cout << "    y = ";
    display(cout, y ) << endl;
    cout << "    i = ";
    display(cout, i) << endl;
    cout << "    j = ";
    display(cout, j) << endl;

    // Dot_Product of vector< double > ---------------------------------------------- //
    cout << "  Cross_Product(x,y) = ";
    display(cout, Cross_Product(x,y)) << endl;
    cout << "  Cross_Product(x,x) = ";
    display(cout, Cross_Product(x,x)) << endl;

    // Dot_Product of vector< int > ------------------------------------------------- //
    cout << "  Cross_Product(i,j) = ";
    display(cout, Cross_Product(i,j)) << endl;
    cout << "  Cross_Product(i,i) = ";
    display(cout, Cross_Product(i,i)) << endl;
    cout << endl;

}

// ================================================================================== //
// OUTPUT MESSAGE                                                                     //
// ================================================================================== //
{
    cout << endl;
}

return; };

// ---------------------------------------------------------------------------------- //
void stringOperators_Ex(
    void
) {

// ================================================================================== //
// void stringOperators_Ex(                                                           //
//     void)                                                                          //
//                                                                                    //
// Examples of usage of operators for strings.                                        //
// ================================================================================== //
// INPUT                                                                              //
// ================================================================================== //
// - none                                                                             //
// ================================================================================== //
// OUTPUT                                                                             //
// ================================================================================== //
// - none                                                                             //
// ================================================================================== //

// ================================================================================== //
// VARIABLES DECLARATION                                                              //
// ================================================================================== //

// Local variables
// none

// Counters
// none

// ================================================================================== //
// OPERATOR "ltrim"                                                                   //
// ================================================================================== //
{

    // Output message --------------------------------------------------------------- //
    cout << "** function ltrim()" << endl;

    // Scope variables -------------------------------------------------------------- //
    string                       s = "  test string #1  ";

    // Initialize scope variables --------------------------------------------------- //
    cout << "  std::string s =\"" << s << "\"" << endl;

    // left trimming ---------------------------------------------------------------- //
    cout << "  ltrim(s) = \"" << ltrim(s) << "\"" << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "rtrim"                                                                   //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function rtrim()" << endl;

    // Scope variables -------------------------------------------------------------- //
    string                       s = "  test string #2  ";

    // Initialize scope variables --------------------------------------------------- //
    cout << "  std::string s =\"" << s << "\"" << endl;

    // left trimming ---------------------------------------------------------------- //
    cout << "  rtrim(s) = \"" << rtrim(s) << "\"" << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "trim"                                                                    //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function trim()" << endl;

    // Scope variables -------------------------------------------------------------- //
    string                       s = "  test string #3  ";

    // Initialize scope variables --------------------------------------------------- //
    cout << "  std::string s =\"" << s << "\"" << endl;

    // left trimming ---------------------------------------------------------------- //
    cout << "  trim(s) = \"" << trim(s) << "\"" << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "ZeroPadNumber"                                                           //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function ZeroPadNumber()" << endl;

    // Scope variables -------------------------------------------------------------- //
    int                          x = 14, y = 1283;
    string                       s;

    // Padding strings -------------------------------------------------------------- //
    cout << "  ZeroPadNumber(6, 14) =\"" << ZeroPadNumber(6, x) << "\"" << endl;
    cout << "  ZeroPadNumber(3, 1283) =\"" << ZeroPadNumber(3, y) << "\"" << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "ConvertString"                                                           //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function convert_string()" << endl;

    // Scope variables -------------------------------------------------------------- //
    double                       x;
    dvector1D                    v;
    array<double, 3>             a;
    string                       s0 = " 0.12 ";
    string                       s1 = "  0.12 0.13 0.14 ";
    string                       s2 = "  0.22 0.23 0.24 0.25";

    // Padding strings -------------------------------------------------------------- //
    cout << "  std::string s0 = \"" << s0 << "\"" << endl;
    cout << "  std::string s1 = \"" << s1 << "\"" << endl;
    cout << "  std::string s2 = \"" << s2 << "\"" << endl;
    convert_string(s0, x);
    cout << "  convert_string(s0, x), x = " << x << endl;
    convert_string(s1, v);
    cout << "  convert_string(s1, v), v = ";
    display(cout, v) << endl;
    convert_string(s2, a);
    cout << "  convert_string(s2, a), a = ";
    display(cout, a) << endl;
    cout << endl;
}

// ================================================================================== //
// OPERATOR "Get_After_Keyword"                                                       //
// ================================================================================== //
{
    // Output message --------------------------------------------------------------- //
    cout << "** function Get_After_Keyword()" << endl;

    // Scope variables -------------------------------------------------------------- //
    string                       s = " field_1 ; field_2 ; field_3";
    string                       field;

    // Padding strings -------------------------------------------------------------- //
    cout << "  std::string s = \"" << s << "\"" << endl;
    Get_After_Keyword(s, "field_1", ';', field);
    cout << "  Get_After_Keyword(s \"field_1\", ';', field), field = \"" << field << "\"" << endl;
    cout << endl;
}

// ================================================================================== //
// OUTPUT MESSAGE                                                                     //
// ================================================================================== //
{
    // Scope variables -------------------------------------------------------------- //
    // none

    // Output message --------------------------------------------------------------- //
    cout << endl;
}

return; };

// ================================================================================== //
// MAIN                                                                               //
// ================================================================================== //
int main(void) {
cout << "========== TEST base operators for std::vector ==========" << endl;
vectorOperators_Ex();
cout << "========== TEST math functions for std::vector ==========" << endl;
vectorMathFunct_Ex();
cout << "========== TEST base operators for std::array ===========" << endl;
arrayOperators_Ex();
cout << "========== TEST math functions for std::array ===========" << endl;
arrayMathFunct_Ex();
cout << "============ TEST operators for std::string =============" << endl;
stringOperators_Ex();

return(0); };
