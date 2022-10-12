#include <iostream>
#include <ios>
#include <iomanip>

int main(){
    // std::endl; \n
    /*
    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "=================" << std::endl;
    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;

    std::cout << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";
    */

    //====================================================================

    // std::setw() : set width
    /*
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " " << "Wodds" << " 33" << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;

    std::cout << std::endl;
    std::cout << "Foramtted Table : " << std::endl;

    std::cout << std::setw(10) << "FirstName" << std::setw(10) << "LastName" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Wodds" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;
    */
    //======================================================================================
    //std::right -->> Right justified
    /*
    int col_width = 20;
    std::cout << std::right;
    std::cout << "Foramtted Table : " << std::endl;

    std::cout << std::setw(col_width) << "FirstName" << std::setw(col_width) << "LastName" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Wodds" << std::setw(col_width) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << "29" << std::endl;
    */
    //======================================================================================
    //std::left -->> Left Justified
    /*
    int col_width = 20;
    std::cout << std::left;
    std::cout << "Foramtted Table : " << std::endl;

    std::cout << std::setw(col_width) << "FirstName" << std::setw(col_width) << "LastName" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Wodds" << std::setw(col_width) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << "29" << std::endl;
    */
    //======================================================================================
    //std::internal -->> Internal Justified
    /*
    //Internal justified : sign is left justified, data is right justified
    std::cout << std::endl;
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;
    */
    //======================================================================================
    //std::setfill
    /*
    int col_width = 20;
    std::cout << std::left;
    std::cout << std::setfill('-'); // the fill character
    std::cout << std::setw(col_width) << "FirstName" << std::setw(col_width) << "LastName" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Wodds" << std::setw(col_width) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << "29" << std::endl;
    */
    //======================================================================================
    // std::boolalpha
    /*
    //boolalpha and noboolalpha : control bool output format : 1/0 or true/false
    bool condition {true};
    bool other_condition {false};

    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;
    */
    //======================================================================================
    //std::showpos
    /*
    //showpos and noshowpos : show or hide the + sign for positive numbers
    int pos_num {34};
    int neg_num {-45};

    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;
    */
    //======================================================================================
    //std::dec  std::oct    std::hex
    /*
    //different number systems : std::dec, std::hex, std::oct
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};

    std::cout << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec  << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex  << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct  << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec  << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex  << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct  << neg_int << std::endl;

    std::cout << std::endl;
    std::cout << "double_var in different bases : " << std::endl;
    std::cout << "double_var (dec) : " << std::dec  << double_var << std::endl;
    std::cout << "double_var (hex) : " << std::hex  << double_var << std::endl;
    std::cout << "double_var (oct) : " << std::oct  << double_var << std::endl;
    */
    //======================================================================================

    //std::showbase
    /*
    //showbase and noshowbase : show the base for integral types
    int pos_int = 717171;
    std::cout << std::endl;
    std::cout << "pos_int (noshowbase : default) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec  << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex  << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct  << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int (showbase) : " << std::endl;
    std::cout << std::showbase;
    std::cout << "pos_int (dec) : " << std::dec  << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex  << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct  << pos_int << std::endl;
    */
    //======================================================================================

    //std::uppercase
    /*
    //uppercase and nouppercase -->> for formatting and comparison
    int pos_int = 717171;
    std::cout << std::endl;
    std::cout << "pos_int (nouppercase : default) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec  << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex  << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct  << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec  << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex  << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct  << pos_int << std::endl;
    */
    //======================================================================================

    //std::scientific , std::fixed
    /*
    double a{ 3.1415926545897932384626433832795 };
    double b{ 2006.0 };
    double c{ 1.34e-10 };

    std::cout << std::endl;
    std::cout << "double values (default ) : "  << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (fixed) : "  << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (scientific) : "  << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) : "  << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    */
    //======================================================================================


    //std::setprecision
    /*
    //setprecision() : the number of digits printed out for a floating point. Default is 6
    double a = 3.1415926545897932384626433832795;

    std::cout << std::endl;
    std::cout << "a (default precision(6)) : " << a << std::endl;

    std::cout << std::setprecision(10);
    std::cout << "a (default precision(10)) : " << a << std::endl;

    std::cout << std::setprecision(20);
    std::cout << "a (default precision(20)) : " << a << std::endl;

    std::cout << std::setprecision(50);
    std::cout << "a (default precision(50)) : " << a << std::endl;

    //Reset precisionto 6
    std::cout << std::setprecision(6);
    */
    //======================================================================================

    //std::showpoint
    /*
    //showpoint and noshowpoint : show trailing zeros if necessary
    double d {34.1};
    double e {101.99};
    double f {12.0};
    int    g {45};

    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint : " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;
    */
    //======================================================================================

    // std::flush
    
    // std::flush : flushes the output buffer to its final destination
    std::cout << "This is a nice message...." << std::endl << std::flush;
    //After this std::flush, we're sure that as this line , the message has been sent
    // to the stream. (skipping the buffer) This may be important in some applications



    return 0;
}


/*

Output Formatting

#include <ios>
#include <iomanip>

http://en.cppreference.com/w/cpp/io/manip

std::endl       std::flush      std::showpoint      std::right      std::boolalpha
std::setfill()      std::left       std::internal       std::setw()     std::hex
std::fixed      std::setprecision()     std::dec        std::scientific
std::showbase       std::uppercase      std::showpos        std::oct



std::flush -->> causes immediate sending of data to the device connected to the stream


Manipulator(s)          header          Purpose
===============         =========       =============

std::endl               <ostream>       Insert new line character
=======================================================================
std::flush              <ostream>       Flush the output stream
=======================================================================
std::setw()             <iomanip>       changes the width of the next input/output field
=======================================================================
std::left               <ios>           Value Justification
std::right
std::internal
=======================================================================
std::boolalpha          <ios>           Bool output format
std::noboolalpha
=======================================================================
std::showpos            <ios>           Show + sign for posititve numbers
std::noshowpos
=======================================================================
std::dec                <ios>           Control the default number system
std::hex
std::oct
=======================================================================
std::showbase           <ios>           Include prefix to show base
std::noshowbase
=======================================================================
std::uppercase          <ios>           Show Digits in uppercase
std::nouppercase
=======================================================================
std::fixed              <ios>           Control floating point output format
std::scientific
=======================================================================
std::setprecision()     <iomanip>       Number of digits used to represent a floating point type
=======================================================================
std::setfill()          <iomanip>       Changes the fill character
=======================================================================
std::showpoint          <ios>           Controls whether trailing zeros are shown
std::noshowpoint
=======================================================================


*/