#ifndef SVGCIRCLE
#define SVGCIRCLE
#include <string>
#include "svg_shape.h"
using namespace std;

class SvgCircle : public SvgShape {
   public:
       SvgCircle(double x, double y, double r): SvgShape(){
         _x=x;
         _y=y;
         _r=r;
        }
        const double & aa(int x){
          _x=0;

          return _x;
        }

       std::string toSVG() const override {
         string result="<circle cx=\"";
         result += to_string(_x);
         result += "\" cy=\"";
         result += to_string(_y);
         result += "\" r=\"";
         result += to_string(_r);
         result += "\" stroke-width=\"";
         result += to_string(getstrokeWidth());
         result += "\" stroke=\"";
         result += getStrokeColor();
         result += "\" fill=\"";
         result += getfillColor();
         result += "\"/>";
         return result;
       }
   private:
       double _x, _y, _r;
   };
#endif
