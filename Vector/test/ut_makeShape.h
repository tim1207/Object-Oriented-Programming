#include "../src/makeShape.h"
#include <vector>
#include <iostream>

TEST(makeShapeTest, test1)
{
    vector<Shape *> result = objectsFromFile("input.txt");
    cout<<result.size()<<endl;
    cout << result[0]->toString() << endl
         << result[1]->toString() << endl;
}