#ifndef SVGLINE
#define SVGLINE
#include "svg_shape.h"

class SvgLine : public SvgShape {
    public:
        SvgLine(double x1, double y1, double x2, double y2): SvgShape() {
          _x1 = x1;
          _y1 = y1;
          _x2 = x2;
          _y2 = y2;
         }

        std::string toSVG() const override{
          string result="<line x1=\"";
          result += to_string(_x1);
          result += "\" y1=\"";
          result += to_string(_y1);
          result += "\" x2=\"";
          result += to_string(_x2);
          result += "\" y2=\"";
          result += to_string(_y2);
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
        double _x1, _y1, _x2, _y2;
    };




#endif
