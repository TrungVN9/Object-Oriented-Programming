class Geometry
{
private:
    char shape;
    double radius, length, width, height;
public:
    Geometry(); // all private variables must be zeros
    Geometry(char s, double r); //
    Geometry(char s, double l, double w);
    Geometry(char s, double l, double w, double h);
    void set_shape(char s);
    void set_length(double l);
    void set_width (double w);
    void set_height (double h);
    char get_shape();
    double get_length();
    double get_width();
    double get_height();
    double getAreaS(double a, double b);
    double getAreaS(double a, double b, double c);
};
