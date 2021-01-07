#ifndef SVGPOLYGON
#define SVGPOLYGON
#include "svg_shape.h"
class SvgPolygon : public SvgShape {
    public:
        SvgPolygon(std::vector<double *> const & v): SvgShape() {
          _v=v;
         }

        std::string toSVG() const override{

          string result="<polygon points=\"";

          result += to_string((_v[0])[0]);
          result += " ";
          result += to_string((_v[0])[1]);
          for(int i=1;i<_v.size();i++){
            result += " ";
            result += to_string((_v[i])[0]);
            result += " ";
            result += to_string((_v[i])[1]);
          }
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
        std::vector<double *> _v;
    };



#endif
