#include "../src/circle.h"
#include "../src/vector.h"

class CircleTest : public ::testing::Test { // test fixture, PolygonTest: derived class, Test: base class
  protected :
    void SetUp() override {
      a = Circle(5, p);
      b = Circle(3 ,3);
    }
    Circle a,b;
    double in[2] = {0,0};
    mathVector p = mathVector(in, 2);
};
TEST_F(CircleTest,primeterTest){
  ASSERT_NEAR(10*M_PI,a.getPrimeter(),0.001);
}

TEST_F(CircleTest,nameTest){
  ASSERT_EQ("anonymous",a.getName());
}
