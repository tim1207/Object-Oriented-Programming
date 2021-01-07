#ifndef SVGSHAPE
#define SVGSHAPE
#include <string>

using namespace std;
class SvgShape {
    public:
        SvgShape(){
          _strokeWidth = 0.0;
          _fillColor = "black";
          _strokeColor = "black";
         }
        void setFillColor(std::string fillColor) {
          _fillColor = fillColor;
         }
        void setStroke(double strokeWidth, std::string strokeColor) {
           _strokeWidth = strokeWidth;
           _strokeColor = strokeColor;
        }
        virtual std::string toSVG() const =0 ;
    protected:
      double getstrokeWidth() const{
        return _strokeWidth;
      }
      string getfillColor() const{
        return _fillColor;
      }
      string getStrokeColor() const{
        return _strokeColor;
      }
    private:
        double _strokeWidth;
        std::string _fillColor, _strokeColor;
    };
void setSvgShapeStyle(SvgShape * shape, double strokeWidth, std::string strokeColor, std::string fillColor){
  shape->setStroke(strokeWidth,strokeColor);
  shape->setFillColor(fillColor);
}

std::string makeSvgOutput(int width, int height, std::vector<SvgShape *> const & shape){
  string result;
  result+="<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"";
  result+= to_string(width);
  result+="\" height=\"";
  result+=to_string(height);
  result+="\" viewBox=\"0 0 100 100\">";

  for(int i=0;i<shape.size();i++){
    result+=shape[i]->toSVG();
  }
  result+="</svg>";
  return result;
}
#endif
