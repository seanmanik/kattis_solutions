#include <iostream>
#include <vector>

using namespace std;

class Circle
{
public:
    int x;
    int y;
    int r;
    Circle() {}
    Circle(int a, int b, int c)
    {
        x = a;
        y = b;
        r = c;
    }

    bool hitTarget(int xC, int yC)
    {
        int dist = (yC - y) * (yC - y) + (xC - x) * (xC - x);
        if (dist <= r * r)
        {
            return true;
        }
        return false;
    }
};

class Rectangle
{
public:
    int x1, x2, y1, y2;
    Rectangle() {}
    Rectangle(int a, int b, int c, int d)
    {
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    }

    bool hitTarget(int xC, int yC)
    {
        if (xC <= x2 && xC >= x1 && yC <= y2 && yC >= y1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    int shapes;
    cin >> shapes;
    vector<Rectangle> rectangles(0);
    vector<Circle> circles(0);
    for (int i = 0; i < shapes; i++)
    {
        string shape;
        cin >> shape;
        if (shape == "rectangle")
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            rectangles.push_back(Rectangle(x1, y1, x2, y2));
        }
        else if (shape == "circle")
        {
            int x, y, r;
            cin >> x >> y >> r;
            circles.push_back(Circle(x, y, r));
        }
    }
    int shots;
    cin >> shots;
    for (int i = 0; i < shots; i++)
    {
        int total = 0;
        int x, y;
        cin >> x >> y;
        for (int j = 0; j < rectangles.size(); j++)
        {
            Rectangle curr = rectangles[j];
            if (rectangles[j].hitTarget(x, y))
            {
                total++;
            }
        }
        for (int j = 0; j < circles.size(); j++)
        {
            if (circles[j].hitTarget(x, y))
            {
                total++;
            }
        }
        cout << total << "\n";
    }
}